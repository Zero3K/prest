#pragma once

/*
CrashCatch - A simple cross-platform crash handler
Version 1.2.0
Created by Keith Pottratz
Email: keithpotz@gmail.com
License: MIT
*/

#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <functional>
#include <cstdlib>

#if defined(_WIN32)
#define CRASHCATCH_PLATFORM_WINDOWS
#include <Windows.h>
#include <DbgHelp.h>
#pragma comment(lib, "DbgHelp.lib") //Auto-link debugging support library
#elif defined(__linux__)
#define CRASHCATCH_PLATFORM_LINUX
#include <signal.h>
#include <execinfo.h>
#include <unistd.h>
#include <limits.h>
#include <cxxabi.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#endif

namespace CrashCatch {

    // Context data passed to crash callback (onCrash, onCrashUpload)
    struct CrashContext {
        std::string dumpFilePath;  // .dmp (Windows) or blank (Linux)
        std::string logFilePath;   // .txt summary log
        std::string timestamp;     // Crash timestamp
        int signalOrCode;          // Signal or exception code

        // Constructor
        CrashContext() : signalOrCode(0) {}
        
        // Constructor with parameters
        CrashContext(const std::string& dumpPath, const std::string& logPath, 
                    const std::string& ts, int code) 
            : dumpFilePath(dumpPath), logFilePath(logPath), timestamp(ts), signalOrCode(code) {}
    };

    // Configuration structure for CrashCatch behavior
    struct Config {
        std::string dumpFolder;       // Where to save crash files
        std::string dumpFileName;     // Base name (timestamp added optionally)
        bool enableTextLog;           // Output .txt human-readable crash report
        bool autoTimestamp;           // Auto-append timestamp to filenames
        bool showCrashDialog;         // (Windows only) Show MessageBox on crash
        std::string appVersion;       // Application version string
        std::string buildConfig;      // Debug/Release configuration
        std::string additionalNotes; // Extra info for crash reports

        // Constructor with default values
        Config() {
            dumpFolder = "./crash_dumps/";
            dumpFileName = "crash";
            enableTextLog = true;
            autoTimestamp = true;
            showCrashDialog = true;
            appVersion = "unknown";
#ifdef _DEBUG
            buildConfig = "Debug";
#else
            buildConfig = "Release";
#endif
            additionalNotes = "";
        }
    };

    // Global configuration - use function to ensure proper initialization
    inline Config& getGlobalConfig() {
        static Config config;
        return config;
    }

    // Convenience reference to global config
    #define globalConfig getGlobalConfig()

    // Generate timestamp string (YYYY-MM-DD_HH-MM-SS)
    inline std::string getTimestamp() {
        time_t now = time(0);
        struct tm* timeinfo = localtime(&now);
        char buffer[80];
        strftime(buffer, sizeof(buffer), "%Y-%m-%d_%H-%M-%S", timeinfo);
        return std::string(buffer);
    }

    // Return full path to current executable
    inline std::string getExecutablePath() {
#ifdef CRASHCATCH_PLATFORM_WINDOWS
        char buffer[MAX_PATH];
        GetModuleFileNameA(NULL, buffer, MAX_PATH);
        return std::string(buffer);
#elif defined(CRASHCATCH_PLATFORM_LINUX)
        char path[PATH_MAX];
        ssize_t len = readlink("/proc/self/exe", path, sizeof(path) - 1);
        if (len != -1) {
            path[len] = '\0';
            return std::string(path);
        }
        return "(unknown)";
#endif
    }

    // Create directories recursively (replacement for std::filesystem::create_directories)
    inline bool createDirectories(const std::string& path) {
#ifdef CRASHCATCH_PLATFORM_WINDOWS
        // Use SHCreateDirectoryEx or CreateDirectory with recursive logic
        size_t pos = 0;
        std::string dir;
        while ((pos = path.find('\\', pos)) != std::string::npos) {
            dir = path.substr(0, pos++);
            if (!dir.empty() && dir != "." && dir != ".." && dir.find(':') == std::string::npos) {
                CreateDirectoryA(dir.c_str(), NULL);
            }
        }
        CreateDirectoryA(path.c_str(), NULL);
        return true;
#else
        // Use mkdir -p equivalent
        size_t pos = 0;
        std::string dir;
        while ((pos = path.find('/', pos)) != std::string::npos) {
            dir = path.substr(0, pos++);
            if (!dir.empty() && dir != "." && dir != "..") {
                mkdir(dir.c_str(), 0755);
            }
        }
        mkdir(path.c_str(), 0755);
        return true;
#endif
    }

#ifdef CRASHCATCH_PLATFORM_LINUX
    // Demangle C++ symbol names from backtrace
    inline std::string demangle(const char* symbol) {
        size_t size;
        int status;
        char* demangled = abi::__cxa_demangle(symbol, NULL, &size, &status);
        std::string result = (status == 0) ? demangled : symbol;
        free(demangled);
        return result;
    }
#endif

    // Collect system/app info for inclusion in crash logs
    inline std::string getDiagnosticsInfo() {
        std::stringstream ss;
        ss << "App Version: " << globalConfig.appVersion << "\n";
        ss << "Build Config: " << globalConfig.buildConfig << "\n";
#ifdef CRASHCATCH_PLATFORM_WINDOWS
        ss << "Platform: Windows\n";
#elif defined(CRASHCATCH_PLATFORM_LINUX)
        ss << "Platform: Linux\n";
#endif
        ss << "Executable: " << getExecutablePath() << "\n";
        if (!globalConfig.additionalNotes.empty()) {
            ss << "Notes: " << globalConfig.additionalNotes << "\n";
        }
        return ss.str();
    }

    // Write human-readable crash report to .txt file
    inline void writeCrashLog(const std::string& logPath, const std::string& timestamp, int signal = 0, 
                             const std::string& assertionInfo = "") {
        std::ofstream log(logPath.c_str());
        if (!log.is_open()) return;

        if (!assertionInfo.empty()) {
            log << "Assertion Failure Report\n========================\n";
            log << assertionInfo << "\n";
        } else {
            log << "Crash Report\n============\n";
        }

#ifdef CRASHCATCH_PLATFORM_LINUX
        // Stack trace for Linux
        log << "Signal: " << strsignal(signal) << " (" << signal << ")\n";
#endif
        log << "Timestamp: " << (timestamp.empty() ? "N/A" : timestamp) << "\n\n";
        log << "Environment Info:\n" << getDiagnosticsInfo() << "\n";

#ifdef CRASHCATCH_PLATFORM_LINUX
        // Output stack trace
        void* callstack[128];
        int frames = backtrace(callstack, 128);
        char** symbols = backtrace_symbols(callstack, frames);
        log << "\nStack Trace:\n";
        for (int i = 0; i < frames; ++i) {
            log << "  [" << i << "]: " << demangle(symbols[i]) << "\n";
        }
        free(symbols);
#endif

        log.close();
    }

#ifdef CRASHCATCH_PLATFORM_WINDOWS
    // Windows unhandled exception handler
    inline LONG WINAPI UnhandledExceptionHandler(EXCEPTION_POINTERS* ep) {
        DWORD code = ep->ExceptionRecord->ExceptionCode;
        if (code == DBG_PRINTEXCEPTION_C || code == DBG_CONTROL_C) {
            return EXCEPTION_CONTINUE_SEARCH;
        }

        std::string timestamp = globalConfig.autoTimestamp ? getTimestamp() : "";
        std::string base = globalConfig.dumpFileName + (timestamp.empty() ? "" : ("_" + timestamp));
        std::string dumpPath = globalConfig.dumpFolder + base + ".dmp";
        std::string logPath = globalConfig.dumpFolder + base + ".txt";

        createDirectories(globalConfig.dumpFolder);

        HANDLE hFile = CreateFileA(dumpPath.c_str(), GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
        if (hFile != INVALID_HANDLE_VALUE) {
            MINIDUMP_EXCEPTION_INFORMATION dumpInfo = { GetCurrentThreadId(), ep, FALSE };
            MiniDumpWriteDump(GetCurrentProcess(), GetCurrentProcessId(), hFile, MiniDumpWithDataSegs, &dumpInfo, NULL, NULL);
            CloseHandle(hFile);

            if (globalConfig.enableTextLog) {
                writeCrashLog(logPath, timestamp);
            }

            if (globalConfig.showCrashDialog) {
                std::string msg = "Crash occurred. Dump written to:\n" + dumpPath;
                MessageBoxA(NULL, msg.c_str(), "Crash Detected", MB_OK | MB_ICONERROR);
            }
        }

        return EXCEPTION_EXECUTE_HANDLER;
    }
#endif

#ifdef CRASHCATCH_PLATFORM_LINUX
    // POSIX signal handler (Linux only)
    inline void linuxSignalHandler(int signum) {
        std::string timestamp = globalConfig.autoTimestamp ? getTimestamp() : "";
        std::string base = globalConfig.dumpFileName + (timestamp.empty() ? "" : ("_" + timestamp));
        std::string logPath = globalConfig.dumpFolder + base + ".txt";

        createDirectories(globalConfig.dumpFolder);

        writeCrashLog(logPath, timestamp, signum);

        _exit(1);
    }
#endif

    // Initialize CrashCatch with user configuration
    inline bool initialize(const Config& config = Config()) {
        globalConfig = config;
#ifdef CRASHCATCH_PLATFORM_WINDOWS
        SetUnhandledExceptionFilter(UnhandledExceptionHandler);
#elif defined(CRASHCATCH_PLATFORM_LINUX)
        signal(SIGSEGV, linuxSignalHandler);
        signal(SIGABRT, linuxSignalHandler);
        signal(SIGFPE, linuxSignalHandler);
        signal(SIGILL, linuxSignalHandler);
        signal(SIGBUS, linuxSignalHandler);
#endif
        return true;
    }

    // Shorthand: use default configuration
    inline bool enable() { return initialize(Config()); }

    // Helper function to convert int to string (C++98 compatible)
    inline std::string toString(int value) {
        std::stringstream ss;
        ss << value;
        return ss.str();
    }

    // Handle assertion failures with CrashCatch (Windows specific)
    inline void handleAssertion(const char* expression, const char* file, int line) {
#ifdef CRASHCATCH_PLATFORM_WINDOWS
        std::string timestamp = globalConfig.autoTimestamp ? getTimestamp() : "";
        std::string base = globalConfig.dumpFileName + (timestamp.empty() ? "" : ("_assertion_" + timestamp));
        std::string logPath = globalConfig.dumpFolder + base + ".txt";

        createDirectories(globalConfig.dumpFolder);

        // Create assertion info string
        std::stringstream assertionInfo;
        assertionInfo << "Assertion failed!\n";
        assertionInfo << "Expression: " << (expression ? expression : "unknown") << "\n";
        assertionInfo << "File: " << (file ? file : "unknown") << "\n";
        assertionInfo << "Line: " << line << "\n";

        if (globalConfig.enableTextLog) {
            writeCrashLog(logPath, timestamp, 0, assertionInfo.str());
        }

        if (globalConfig.showCrashDialog) {
            std::string msg = "Assertion failed!\n\n";
            msg += "Expression: " + std::string(expression ? expression : "unknown") + "\n";
            msg += "File: " + std::string(file ? file : "unknown") + "\n";
            msg += "Line: " + toString(line) + "\n\n";
            if (globalConfig.enableTextLog) {
                msg += "Log written to: " + logPath;
            }
            MessageBoxA(NULL, msg.c_str(), "Assertion Failure", MB_OK | MB_ICONERROR);
        }

        // Terminate the program
        TerminateProcess(GetCurrentProcess(), 1);
#endif
    }

    // Auto-initialize when included (optional)
#ifdef CRASHCATCH_AUTO_INIT
    namespace {
        const bool _autoInit = CrashCatch::enable();
    }
#endif

} // namespace CrashCatch
