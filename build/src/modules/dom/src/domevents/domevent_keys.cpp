/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 1995-2017 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
*/

/* This file is assumed included by domevents.cpp, and will not compile on its own. */

/* static */ void
DOM_KeyboardEvent_Constructor::AddKeyConstantsL(ES_Object *object, DOM_Runtime *runtime)
{
#ifdef OP_KEY_CANCEL_ENABLED
	PutNumericConstantL(object, "DOM_VK_CANCEL", OP_KEY_CANCEL, runtime);
#endif // OP_KEY_CANCEL_ENABLED
#ifdef OP_KEY_BACKSPACE_ENABLED
	PutNumericConstantL(object, "DOM_VK_BACKSPACE", OP_KEY_BACKSPACE, runtime);
#endif // OP_KEY_BACKSPACE_ENABLED
#ifdef OP_KEY_TAB_ENABLED
	PutNumericConstantL(object, "DOM_VK_TAB", OP_KEY_TAB, runtime);
#endif // OP_KEY_TAB_ENABLED
#ifdef OP_KEY_CLEAR_ENABLED
	PutNumericConstantL(object, "DOM_VK_CLEAR", OP_KEY_CLEAR, runtime);
#endif // OP_KEY_CLEAR_ENABLED
#ifdef OP_KEY_ENTER_ENABLED
	PutNumericConstantL(object, "DOM_VK_ENTER", OP_KEY_ENTER, runtime);
#endif // OP_KEY_ENTER_ENABLED
#ifdef OP_KEY_SHIFT_ENABLED
	PutNumericConstantL(object, "DOM_VK_SHIFT", OP_KEY_SHIFT, runtime);
#endif // OP_KEY_SHIFT_ENABLED
#ifdef OP_KEY_CTRL_ENABLED
	PutNumericConstantL(object, "DOM_VK_CTRL", OP_KEY_CTRL, runtime);
#endif // OP_KEY_CTRL_ENABLED
#ifdef OP_KEY_ALT_ENABLED
	PutNumericConstantL(object, "DOM_VK_ALT", OP_KEY_ALT, runtime);
#endif // OP_KEY_ALT_ENABLED
#ifdef OP_KEY_PAUSE_ENABLED
	PutNumericConstantL(object, "DOM_VK_PAUSE", OP_KEY_PAUSE, runtime);
#endif // OP_KEY_PAUSE_ENABLED
#ifdef OP_KEY_CAPS_LOCK_ENABLED
	PutNumericConstantL(object, "DOM_VK_CAPS_LOCK", OP_KEY_CAPS_LOCK, runtime);
#endif // OP_KEY_CAPS_LOCK_ENABLED
#ifdef OP_KEY_KANA_ENABLED
	PutNumericConstantL(object, "DOM_VK_KANA", OP_KEY_KANA, runtime);
#endif // OP_KEY_KANA_ENABLED
#ifdef OP_KEY_FINAL_ENABLED
	PutNumericConstantL(object, "DOM_VK_FINAL", OP_KEY_FINAL, runtime);
#endif // OP_KEY_FINAL_ENABLED
#ifdef OP_KEY_KANJI_ENABLED
	PutNumericConstantL(object, "DOM_VK_KANJI", OP_KEY_KANJI, runtime);
#endif // OP_KEY_KANJI_ENABLED
#ifdef OP_KEY_ESCAPE_ENABLED
	PutNumericConstantL(object, "DOM_VK_ESCAPE", OP_KEY_ESCAPE, runtime);
#endif // OP_KEY_ESCAPE_ENABLED
#ifdef OP_KEY_CONVERT_ENABLED
	PutNumericConstantL(object, "DOM_VK_CONVERT", OP_KEY_CONVERT, runtime);
#endif // OP_KEY_CONVERT_ENABLED
#ifdef OP_KEY_NONCONVERT_ENABLED
	PutNumericConstantL(object, "DOM_VK_NONCONVERT", OP_KEY_NONCONVERT, runtime);
#endif // OP_KEY_NONCONVERT_ENABLED
#ifdef OP_KEY_ACCEPT_ENABLED
	PutNumericConstantL(object, "DOM_VK_ACCEPT", OP_KEY_ACCEPT, runtime);
#endif // OP_KEY_ACCEPT_ENABLED
#ifdef OP_KEY_MODECHANGE_ENABLED
	PutNumericConstantL(object, "DOM_VK_MODECHANGE", OP_KEY_MODECHANGE, runtime);
#endif // OP_KEY_MODECHANGE_ENABLED
#ifdef OP_KEY_SPACE_ENABLED
	PutNumericConstantL(object, "DOM_VK_SPACE", OP_KEY_SPACE, runtime);
#endif // OP_KEY_SPACE_ENABLED
#ifdef OP_KEY_PAGEUP_ENABLED
	PutNumericConstantL(object, "DOM_VK_PAGEUP", OP_KEY_PAGEUP, runtime);
#endif // OP_KEY_PAGEUP_ENABLED
#ifdef OP_KEY_PAGEDOWN_ENABLED
	PutNumericConstantL(object, "DOM_VK_PAGEDOWN", OP_KEY_PAGEDOWN, runtime);
#endif // OP_KEY_PAGEDOWN_ENABLED
#ifdef OP_KEY_END_ENABLED
	PutNumericConstantL(object, "DOM_VK_END", OP_KEY_END, runtime);
#endif // OP_KEY_END_ENABLED
#ifdef OP_KEY_HOME_ENABLED
	PutNumericConstantL(object, "DOM_VK_HOME", OP_KEY_HOME, runtime);
#endif // OP_KEY_HOME_ENABLED
#ifdef OP_KEY_LEFT_ENABLED
	PutNumericConstantL(object, "DOM_VK_LEFT", OP_KEY_LEFT, runtime);
#endif // OP_KEY_LEFT_ENABLED
#ifdef OP_KEY_UP_ENABLED
	PutNumericConstantL(object, "DOM_VK_UP", OP_KEY_UP, runtime);
#endif // OP_KEY_UP_ENABLED
#ifdef OP_KEY_RIGHT_ENABLED
	PutNumericConstantL(object, "DOM_VK_RIGHT", OP_KEY_RIGHT, runtime);
#endif // OP_KEY_RIGHT_ENABLED
#ifdef OP_KEY_DOWN_ENABLED
	PutNumericConstantL(object, "DOM_VK_DOWN", OP_KEY_DOWN, runtime);
#endif // OP_KEY_DOWN_ENABLED
#ifdef OP_KEY_SELECT_ENABLED
	PutNumericConstantL(object, "DOM_VK_SELECT", OP_KEY_SELECT, runtime);
#endif // OP_KEY_SELECT_ENABLED
#ifdef OP_KEY_PRINT_ENABLED
	PutNumericConstantL(object, "DOM_VK_PRINT", OP_KEY_PRINT, runtime);
#endif // OP_KEY_PRINT_ENABLED
#ifdef OP_KEY_EXECUTE_ENABLED
	PutNumericConstantL(object, "DOM_VK_EXECUTE", OP_KEY_EXECUTE, runtime);
#endif // OP_KEY_EXECUTE_ENABLED
#ifdef OP_KEY_PRINTSCREEN_ENABLED
	PutNumericConstantL(object, "DOM_VK_PRINTSCREEN", OP_KEY_PRINTSCREEN, runtime);
#endif // OP_KEY_PRINTSCREEN_ENABLED
#ifdef OP_KEY_INSERT_ENABLED
	PutNumericConstantL(object, "DOM_VK_INSERT", OP_KEY_INSERT, runtime);
#endif // OP_KEY_INSERT_ENABLED
#ifdef OP_KEY_DELETE_ENABLED
	PutNumericConstantL(object, "DOM_VK_DELETE", OP_KEY_DELETE, runtime);
#endif // OP_KEY_DELETE_ENABLED
#ifdef OP_KEY_HELP_ENABLED
	PutNumericConstantL(object, "DOM_VK_HELP", OP_KEY_HELP, runtime);
#endif // OP_KEY_HELP_ENABLED
#ifdef OP_KEY_0_ENABLED
	PutNumericConstantL(object, "DOM_VK_0", OP_KEY_0, runtime);
#endif // OP_KEY_0_ENABLED
#ifdef OP_KEY_1_ENABLED
	PutNumericConstantL(object, "DOM_VK_1", OP_KEY_1, runtime);
#endif // OP_KEY_1_ENABLED
#ifdef OP_KEY_2_ENABLED
	PutNumericConstantL(object, "DOM_VK_2", OP_KEY_2, runtime);
#endif // OP_KEY_2_ENABLED
#ifdef OP_KEY_3_ENABLED
	PutNumericConstantL(object, "DOM_VK_3", OP_KEY_3, runtime);
#endif // OP_KEY_3_ENABLED
#ifdef OP_KEY_4_ENABLED
	PutNumericConstantL(object, "DOM_VK_4", OP_KEY_4, runtime);
#endif // OP_KEY_4_ENABLED
#ifdef OP_KEY_5_ENABLED
	PutNumericConstantL(object, "DOM_VK_5", OP_KEY_5, runtime);
#endif // OP_KEY_5_ENABLED
#ifdef OP_KEY_6_ENABLED
	PutNumericConstantL(object, "DOM_VK_6", OP_KEY_6, runtime);
#endif // OP_KEY_6_ENABLED
#ifdef OP_KEY_7_ENABLED
	PutNumericConstantL(object, "DOM_VK_7", OP_KEY_7, runtime);
#endif // OP_KEY_7_ENABLED
#ifdef OP_KEY_8_ENABLED
	PutNumericConstantL(object, "DOM_VK_8", OP_KEY_8, runtime);
#endif // OP_KEY_8_ENABLED
#ifdef OP_KEY_9_ENABLED
	PutNumericConstantL(object, "DOM_VK_9", OP_KEY_9, runtime);
#endif // OP_KEY_9_ENABLED
#ifdef OP_KEY_A_ENABLED
	PutNumericConstantL(object, "DOM_VK_A", OP_KEY_A, runtime);
#endif // OP_KEY_A_ENABLED
#ifdef OP_KEY_B_ENABLED
	PutNumericConstantL(object, "DOM_VK_B", OP_KEY_B, runtime);
#endif // OP_KEY_B_ENABLED
#ifdef OP_KEY_C_ENABLED
	PutNumericConstantL(object, "DOM_VK_C", OP_KEY_C, runtime);
#endif // OP_KEY_C_ENABLED
#ifdef OP_KEY_D_ENABLED
	PutNumericConstantL(object, "DOM_VK_D", OP_KEY_D, runtime);
#endif // OP_KEY_D_ENABLED
#ifdef OP_KEY_E_ENABLED
	PutNumericConstantL(object, "DOM_VK_E", OP_KEY_E, runtime);
#endif // OP_KEY_E_ENABLED
#ifdef OP_KEY_F_ENABLED
	PutNumericConstantL(object, "DOM_VK_F", OP_KEY_F, runtime);
#endif // OP_KEY_F_ENABLED
#ifdef OP_KEY_G_ENABLED
	PutNumericConstantL(object, "DOM_VK_G", OP_KEY_G, runtime);
#endif // OP_KEY_G_ENABLED
#ifdef OP_KEY_H_ENABLED
	PutNumericConstantL(object, "DOM_VK_H", OP_KEY_H, runtime);
#endif // OP_KEY_H_ENABLED
#ifdef OP_KEY_I_ENABLED
	PutNumericConstantL(object, "DOM_VK_I", OP_KEY_I, runtime);
#endif // OP_KEY_I_ENABLED
#ifdef OP_KEY_J_ENABLED
	PutNumericConstantL(object, "DOM_VK_J", OP_KEY_J, runtime);
#endif // OP_KEY_J_ENABLED
#ifdef OP_KEY_K_ENABLED
	PutNumericConstantL(object, "DOM_VK_K", OP_KEY_K, runtime);
#endif // OP_KEY_K_ENABLED
#ifdef OP_KEY_L_ENABLED
	PutNumericConstantL(object, "DOM_VK_L", OP_KEY_L, runtime);
#endif // OP_KEY_L_ENABLED
#ifdef OP_KEY_M_ENABLED
	PutNumericConstantL(object, "DOM_VK_M", OP_KEY_M, runtime);
#endif // OP_KEY_M_ENABLED
#ifdef OP_KEY_N_ENABLED
	PutNumericConstantL(object, "DOM_VK_N", OP_KEY_N, runtime);
#endif // OP_KEY_N_ENABLED
#ifdef OP_KEY_O_ENABLED
	PutNumericConstantL(object, "DOM_VK_O", OP_KEY_O, runtime);
#endif // OP_KEY_O_ENABLED
#ifdef OP_KEY_P_ENABLED
	PutNumericConstantL(object, "DOM_VK_P", OP_KEY_P, runtime);
#endif // OP_KEY_P_ENABLED
#ifdef OP_KEY_Q_ENABLED
	PutNumericConstantL(object, "DOM_VK_Q", OP_KEY_Q, runtime);
#endif // OP_KEY_Q_ENABLED
#ifdef OP_KEY_R_ENABLED
	PutNumericConstantL(object, "DOM_VK_R", OP_KEY_R, runtime);
#endif // OP_KEY_R_ENABLED
#ifdef OP_KEY_S_ENABLED
	PutNumericConstantL(object, "DOM_VK_S", OP_KEY_S, runtime);
#endif // OP_KEY_S_ENABLED
#ifdef OP_KEY_T_ENABLED
	PutNumericConstantL(object, "DOM_VK_T", OP_KEY_T, runtime);
#endif // OP_KEY_T_ENABLED
#ifdef OP_KEY_U_ENABLED
	PutNumericConstantL(object, "DOM_VK_U", OP_KEY_U, runtime);
#endif // OP_KEY_U_ENABLED
#ifdef OP_KEY_V_ENABLED
	PutNumericConstantL(object, "DOM_VK_V", OP_KEY_V, runtime);
#endif // OP_KEY_V_ENABLED
#ifdef OP_KEY_W_ENABLED
	PutNumericConstantL(object, "DOM_VK_W", OP_KEY_W, runtime);
#endif // OP_KEY_W_ENABLED
#ifdef OP_KEY_X_ENABLED
	PutNumericConstantL(object, "DOM_VK_X", OP_KEY_X, runtime);
#endif // OP_KEY_X_ENABLED
#ifdef OP_KEY_Y_ENABLED
	PutNumericConstantL(object, "DOM_VK_Y", OP_KEY_Y, runtime);
#endif // OP_KEY_Y_ENABLED
#ifdef OP_KEY_Z_ENABLED
	PutNumericConstantL(object, "DOM_VK_Z", OP_KEY_Z, runtime);
#endif // OP_KEY_Z_ENABLED
#ifdef OP_KEY_WINDOW_ENABLED
	PutNumericConstantL(object, "DOM_VK_WINDOW", OP_KEY_WINDOW, runtime);
#endif // OP_KEY_WINDOW_ENABLED
#ifdef OP_KEY_MAC_CTRL_ENABLED
	PutNumericConstantL(object, "DOM_VK_MAC_CTRL", OP_KEY_MAC_CTRL, runtime);
#endif // OP_KEY_MAC_CTRL_ENABLED
#ifdef OP_KEY_CONTEXT_MENU_ENABLED
	PutNumericConstantL(object, "DOM_VK_CONTEXT_MENU", OP_KEY_CONTEXT_MENU, runtime);
#endif // OP_KEY_CONTEXT_MENU_ENABLED
#ifdef OP_KEY_SLEEP_ENABLED
	PutNumericConstantL(object, "DOM_VK_SLEEP", OP_KEY_SLEEP, runtime);
#endif // OP_KEY_SLEEP_ENABLED
#ifdef OP_KEY_NUMPAD0_ENABLED
	PutNumericConstantL(object, "DOM_VK_NUMPAD0", OP_KEY_NUMPAD0, runtime);
#endif // OP_KEY_NUMPAD0_ENABLED
#ifdef OP_KEY_NUMPAD1_ENABLED
	PutNumericConstantL(object, "DOM_VK_NUMPAD1", OP_KEY_NUMPAD1, runtime);
#endif // OP_KEY_NUMPAD1_ENABLED
#ifdef OP_KEY_NUMPAD2_ENABLED
	PutNumericConstantL(object, "DOM_VK_NUMPAD2", OP_KEY_NUMPAD2, runtime);
#endif // OP_KEY_NUMPAD2_ENABLED
#ifdef OP_KEY_NUMPAD3_ENABLED
	PutNumericConstantL(object, "DOM_VK_NUMPAD3", OP_KEY_NUMPAD3, runtime);
#endif // OP_KEY_NUMPAD3_ENABLED
#ifdef OP_KEY_NUMPAD4_ENABLED
	PutNumericConstantL(object, "DOM_VK_NUMPAD4", OP_KEY_NUMPAD4, runtime);
#endif // OP_KEY_NUMPAD4_ENABLED
#ifdef OP_KEY_NUMPAD5_ENABLED
	PutNumericConstantL(object, "DOM_VK_NUMPAD5", OP_KEY_NUMPAD5, runtime);
#endif // OP_KEY_NUMPAD5_ENABLED
#ifdef OP_KEY_NUMPAD6_ENABLED
	PutNumericConstantL(object, "DOM_VK_NUMPAD6", OP_KEY_NUMPAD6, runtime);
#endif // OP_KEY_NUMPAD6_ENABLED
#ifdef OP_KEY_NUMPAD7_ENABLED
	PutNumericConstantL(object, "DOM_VK_NUMPAD7", OP_KEY_NUMPAD7, runtime);
#endif // OP_KEY_NUMPAD7_ENABLED
#ifdef OP_KEY_NUMPAD8_ENABLED
	PutNumericConstantL(object, "DOM_VK_NUMPAD8", OP_KEY_NUMPAD8, runtime);
#endif // OP_KEY_NUMPAD8_ENABLED
#ifdef OP_KEY_NUMPAD9_ENABLED
	PutNumericConstantL(object, "DOM_VK_NUMPAD9", OP_KEY_NUMPAD9, runtime);
#endif // OP_KEY_NUMPAD9_ENABLED
#ifdef OP_KEY_MULTIPLY_ENABLED
	PutNumericConstantL(object, "DOM_VK_MULTIPLY", OP_KEY_MULTIPLY, runtime);
#endif // OP_KEY_MULTIPLY_ENABLED
#ifdef OP_KEY_ADD_ENABLED
	PutNumericConstantL(object, "DOM_VK_ADD", OP_KEY_ADD, runtime);
#endif // OP_KEY_ADD_ENABLED
#ifdef OP_KEY_SEPARATOR_ENABLED
	PutNumericConstantL(object, "DOM_VK_SEPARATOR", OP_KEY_SEPARATOR, runtime);
#endif // OP_KEY_SEPARATOR_ENABLED
#ifdef OP_KEY_SUBTRACT_ENABLED
	PutNumericConstantL(object, "DOM_VK_SUBTRACT", OP_KEY_SUBTRACT, runtime);
#endif // OP_KEY_SUBTRACT_ENABLED
#ifdef OP_KEY_DECIMAL_ENABLED
	PutNumericConstantL(object, "DOM_VK_DECIMAL", OP_KEY_DECIMAL, runtime);
#endif // OP_KEY_DECIMAL_ENABLED
#ifdef OP_KEY_DIVIDE_ENABLED
	PutNumericConstantL(object, "DOM_VK_DIVIDE", OP_KEY_DIVIDE, runtime);
#endif // OP_KEY_DIVIDE_ENABLED
#ifdef OP_KEY_F1_ENABLED
	PutNumericConstantL(object, "DOM_VK_F1", OP_KEY_F1, runtime);
#endif // OP_KEY_F1_ENABLED
#ifdef OP_KEY_F2_ENABLED
	PutNumericConstantL(object, "DOM_VK_F2", OP_KEY_F2, runtime);
#endif // OP_KEY_F2_ENABLED
#ifdef OP_KEY_F3_ENABLED
	PutNumericConstantL(object, "DOM_VK_F3", OP_KEY_F3, runtime);
#endif // OP_KEY_F3_ENABLED
#ifdef OP_KEY_F4_ENABLED
	PutNumericConstantL(object, "DOM_VK_F4", OP_KEY_F4, runtime);
#endif // OP_KEY_F4_ENABLED
#ifdef OP_KEY_F5_ENABLED
	PutNumericConstantL(object, "DOM_VK_F5", OP_KEY_F5, runtime);
#endif // OP_KEY_F5_ENABLED
#ifdef OP_KEY_F6_ENABLED
	PutNumericConstantL(object, "DOM_VK_F6", OP_KEY_F6, runtime);
#endif // OP_KEY_F6_ENABLED
#ifdef OP_KEY_F7_ENABLED
	PutNumericConstantL(object, "DOM_VK_F7", OP_KEY_F7, runtime);
#endif // OP_KEY_F7_ENABLED
#ifdef OP_KEY_F8_ENABLED
	PutNumericConstantL(object, "DOM_VK_F8", OP_KEY_F8, runtime);
#endif // OP_KEY_F8_ENABLED
#ifdef OP_KEY_F9_ENABLED
	PutNumericConstantL(object, "DOM_VK_F9", OP_KEY_F9, runtime);
#endif // OP_KEY_F9_ENABLED
#ifdef OP_KEY_F10_ENABLED
	PutNumericConstantL(object, "DOM_VK_F10", OP_KEY_F10, runtime);
#endif // OP_KEY_F10_ENABLED
#ifdef OP_KEY_F11_ENABLED
	PutNumericConstantL(object, "DOM_VK_F11", OP_KEY_F11, runtime);
#endif // OP_KEY_F11_ENABLED
#ifdef OP_KEY_F12_ENABLED
	PutNumericConstantL(object, "DOM_VK_F12", OP_KEY_F12, runtime);
#endif // OP_KEY_F12_ENABLED
#ifdef OP_KEY_F13_ENABLED
	PutNumericConstantL(object, "DOM_VK_F13", OP_KEY_F13, runtime);
#endif // OP_KEY_F13_ENABLED
#ifdef OP_KEY_F14_ENABLED
	PutNumericConstantL(object, "DOM_VK_F14", OP_KEY_F14, runtime);
#endif // OP_KEY_F14_ENABLED
#ifdef OP_KEY_F15_ENABLED
	PutNumericConstantL(object, "DOM_VK_F15", OP_KEY_F15, runtime);
#endif // OP_KEY_F15_ENABLED
#ifdef OP_KEY_F16_ENABLED
	PutNumericConstantL(object, "DOM_VK_F16", OP_KEY_F16, runtime);
#endif // OP_KEY_F16_ENABLED
#ifdef OP_KEY_F17_ENABLED
	PutNumericConstantL(object, "DOM_VK_F17", OP_KEY_F17, runtime);
#endif // OP_KEY_F17_ENABLED
#ifdef OP_KEY_F18_ENABLED
	PutNumericConstantL(object, "DOM_VK_F18", OP_KEY_F18, runtime);
#endif // OP_KEY_F18_ENABLED
#ifdef OP_KEY_F19_ENABLED
	PutNumericConstantL(object, "DOM_VK_F19", OP_KEY_F19, runtime);
#endif // OP_KEY_F19_ENABLED
#ifdef OP_KEY_F20_ENABLED
	PutNumericConstantL(object, "DOM_VK_F20", OP_KEY_F20, runtime);
#endif // OP_KEY_F20_ENABLED
#ifdef OP_KEY_F21_ENABLED
	PutNumericConstantL(object, "DOM_VK_F21", OP_KEY_F21, runtime);
#endif // OP_KEY_F21_ENABLED
#ifdef OP_KEY_F22_ENABLED
	PutNumericConstantL(object, "DOM_VK_F22", OP_KEY_F22, runtime);
#endif // OP_KEY_F22_ENABLED
#ifdef OP_KEY_F23_ENABLED
	PutNumericConstantL(object, "DOM_VK_F23", OP_KEY_F23, runtime);
#endif // OP_KEY_F23_ENABLED
#ifdef OP_KEY_F24_ENABLED
	PutNumericConstantL(object, "DOM_VK_F24", OP_KEY_F24, runtime);
#endif // OP_KEY_F24_ENABLED
#ifdef OP_KEY_NUM_LOCK_ENABLED
	PutNumericConstantL(object, "DOM_VK_NUM_LOCK", OP_KEY_NUM_LOCK, runtime);
#endif // OP_KEY_NUM_LOCK_ENABLED
#ifdef OP_KEY_SCROLL_LOCK_ENABLED
	PutNumericConstantL(object, "DOM_VK_SCROLL_LOCK", OP_KEY_SCROLL_LOCK, runtime);
#endif // OP_KEY_SCROLL_LOCK_ENABLED
#ifdef OP_KEY_META_ENABLED
	PutNumericConstantL(object, "DOM_VK_META", OP_KEY_META, runtime);
#endif // OP_KEY_META_ENABLED
#ifdef OP_KEY_OEM_1_ENABLED
	PutNumericConstantL(object, "DOM_VK_OEM_1", OP_KEY_OEM_1, runtime);
#endif // OP_KEY_OEM_1_ENABLED
#ifdef OP_KEY_OEM_PLUS_ENABLED
	PutNumericConstantL(object, "DOM_VK_OEM_PLUS", OP_KEY_OEM_PLUS, runtime);
#endif // OP_KEY_OEM_PLUS_ENABLED
#ifdef OP_KEY_OEM_COMMA_ENABLED
	PutNumericConstantL(object, "DOM_VK_OEM_COMMA", OP_KEY_OEM_COMMA, runtime);
#endif // OP_KEY_OEM_COMMA_ENABLED
#ifdef OP_KEY_OEM_MINUS_ENABLED
	PutNumericConstantL(object, "DOM_VK_OEM_MINUS", OP_KEY_OEM_MINUS, runtime);
#endif // OP_KEY_OEM_MINUS_ENABLED
#ifdef OP_KEY_OEM_PERIOD_ENABLED
	PutNumericConstantL(object, "DOM_VK_OEM_PERIOD", OP_KEY_OEM_PERIOD, runtime);
#endif // OP_KEY_OEM_PERIOD_ENABLED
#ifdef OP_KEY_OEM_2_ENABLED
	PutNumericConstantL(object, "DOM_VK_OEM_2", OP_KEY_OEM_2, runtime);
#endif // OP_KEY_OEM_2_ENABLED
#ifdef OP_KEY_OEM_3_ENABLED
	PutNumericConstantL(object, "DOM_VK_OEM_3", OP_KEY_OEM_3, runtime);
#endif // OP_KEY_OEM_3_ENABLED
#ifdef OP_KEY_OEM_4_ENABLED
	PutNumericConstantL(object, "DOM_VK_OEM_4", OP_KEY_OEM_4, runtime);
#endif // OP_KEY_OEM_4_ENABLED
#ifdef OP_KEY_OEM_5_ENABLED
	PutNumericConstantL(object, "DOM_VK_OEM_5", OP_KEY_OEM_5, runtime);
#endif // OP_KEY_OEM_5_ENABLED
#ifdef OP_KEY_OEM_6_ENABLED
	PutNumericConstantL(object, "DOM_VK_OEM_6", OP_KEY_OEM_6, runtime);
#endif // OP_KEY_OEM_6_ENABLED
#ifdef OP_KEY_OEM_7_ENABLED
	PutNumericConstantL(object, "DOM_VK_OEM_7", OP_KEY_OEM_7, runtime);
#endif // OP_KEY_OEM_7_ENABLED
#ifdef OP_KEY_OEM_8_ENABLED
	PutNumericConstantL(object, "DOM_VK_OEM_8", OP_KEY_OEM_8, runtime);
#endif // OP_KEY_OEM_8_ENABLED
#ifdef OP_KEY_OEM_102_ENABLED
	PutNumericConstantL(object, "DOM_VK_OEM_102", OP_KEY_OEM_102, runtime);
#endif // OP_KEY_OEM_102_ENABLED
#ifdef OP_KEY_PROCESSKEY_ENABLED
	PutNumericConstantL(object, "DOM_VK_PROCESSKEY", OP_KEY_PROCESSKEY, runtime);
#endif // OP_KEY_PROCESSKEY_ENABLED
#ifdef OP_KEY_UNICODE_ENABLED
	PutNumericConstantL(object, "DOM_VK_UNICODE", OP_KEY_UNICODE, runtime);
#endif // OP_KEY_UNICODE_ENABLED
#ifdef OP_KEY_F25_ENABLED
	PutNumericConstantL(object, "DOM_VK_F25", OP_KEY_F25, runtime);
#endif // OP_KEY_F25_ENABLED
#ifdef OP_KEY_F26_ENABLED
	PutNumericConstantL(object, "DOM_VK_F26", OP_KEY_F26, runtime);
#endif // OP_KEY_F26_ENABLED
#ifdef OP_KEY_F27_ENABLED
	PutNumericConstantL(object, "DOM_VK_F27", OP_KEY_F27, runtime);
#endif // OP_KEY_F27_ENABLED
#ifdef OP_KEY_F28_ENABLED
	PutNumericConstantL(object, "DOM_VK_F28", OP_KEY_F28, runtime);
#endif // OP_KEY_F28_ENABLED
#ifdef OP_KEY_F29_ENABLED
	PutNumericConstantL(object, "DOM_VK_F29", OP_KEY_F29, runtime);
#endif // OP_KEY_F29_ENABLED
#ifdef OP_KEY_F30_ENABLED
	PutNumericConstantL(object, "DOM_VK_F30", OP_KEY_F30, runtime);
#endif // OP_KEY_F30_ENABLED
#ifdef OP_KEY_F31_ENABLED
	PutNumericConstantL(object, "DOM_VK_F31", OP_KEY_F31, runtime);
#endif // OP_KEY_F31_ENABLED
#ifdef OP_KEY_F32_ENABLED
	PutNumericConstantL(object, "DOM_VK_F32", OP_KEY_F32, runtime);
#endif // OP_KEY_F32_ENABLED
#ifdef OP_KEY_F33_ENABLED
	PutNumericConstantL(object, "DOM_VK_F33", OP_KEY_F33, runtime);
#endif // OP_KEY_F33_ENABLED
#ifdef OP_KEY_F34_ENABLED
	PutNumericConstantL(object, "DOM_VK_F34", OP_KEY_F34, runtime);
#endif // OP_KEY_F34_ENABLED
#ifdef OP_KEY_F35_ENABLED
	PutNumericConstantL(object, "DOM_VK_F35", OP_KEY_F35, runtime);
#endif // OP_KEY_F35_ENABLED
#ifdef OP_KEY_F36_ENABLED
	PutNumericConstantL(object, "DOM_VK_F36", OP_KEY_F36, runtime);
#endif // OP_KEY_F36_ENABLED
#ifdef OP_KEY_VOLUMEUP_ENABLED
	PutNumericConstantL(object, "DOM_VK_VOLUMEUP", OP_KEY_VOLUMEUP, runtime);
#endif // OP_KEY_VOLUMEUP_ENABLED
#ifdef OP_KEY_VOLUMEDOWN_ENABLED
	PutNumericConstantL(object, "DOM_VK_VOLUMEDOWN", OP_KEY_VOLUMEDOWN, runtime);
#endif // OP_KEY_VOLUMEDOWN_ENABLED
#ifdef OP_KEY_MENU_ENABLED
	PutNumericConstantL(object, "DOM_VK_MENU", OP_KEY_MENU, runtime);
#endif // OP_KEY_MENU_ENABLED
#ifdef OP_KEY_PLAY_ENABLED
	PutNumericConstantL(object, "DOM_VK_PLAY", OP_KEY_PLAY, runtime);
#endif // OP_KEY_PLAY_ENABLED
#ifdef OP_KEY_NEXT_ENABLED
	PutNumericConstantL(object, "DOM_VK_NEXT", OP_KEY_NEXT, runtime);
#endif // OP_KEY_NEXT_ENABLED
#ifdef OP_KEY_PREVIOUS_ENABLED
	PutNumericConstantL(object, "DOM_VK_PREVIOUS", OP_KEY_PREVIOUS, runtime);
#endif // OP_KEY_PREVIOUS_ENABLED
#ifdef OP_KEY_FASTFORWARD_ENABLED
	PutNumericConstantL(object, "DOM_VK_FASTFORWARD", OP_KEY_FASTFORWARD, runtime);
#endif // OP_KEY_FASTFORWARD_ENABLED
#ifdef OP_KEY_REWIND_ENABLED
	PutNumericConstantL(object, "DOM_VK_REWIND", OP_KEY_REWIND, runtime);
#endif // OP_KEY_REWIND_ENABLED
#ifdef OP_KEY_STOP_ENABLED
	PutNumericConstantL(object, "DOM_VK_STOP", OP_KEY_STOP, runtime);
#endif // OP_KEY_STOP_ENABLED
#ifdef OP_KEY_REDO_ENABLED
	PutNumericConstantL(object, "DOM_VK_REDO", OP_KEY_REDO, runtime);
#endif // OP_KEY_REDO_ENABLED
#ifdef OP_KEY_UNDO_ENABLED
	PutNumericConstantL(object, "DOM_VK_UNDO", OP_KEY_UNDO, runtime);
#endif // OP_KEY_UNDO_ENABLED
#ifdef OP_KEY_PROPERITES_ENABLED
	PutNumericConstantL(object, "DOM_VK_PROPERITES", OP_KEY_PROPERITES, runtime);
#endif // OP_KEY_PROPERITES_ENABLED
#ifdef OP_KEY_FRONT_ENABLED
	PutNumericConstantL(object, "DOM_VK_FRONT", OP_KEY_FRONT, runtime);
#endif // OP_KEY_FRONT_ENABLED
#ifdef OP_KEY_LEFT_TAB_ENABLED
	PutNumericConstantL(object, "DOM_VK_LEFT_TAB", OP_KEY_LEFT_TAB, runtime);
#endif // OP_KEY_LEFT_TAB_ENABLED
#ifdef OP_KEY_XF86XK_MON_BRIGHTNESS_UP_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_MON_BRIGHTNESS_UP", OP_KEY_XF86XK_MON_BRIGHTNESS_UP, runtime);
#endif // OP_KEY_XF86XK_MON_BRIGHTNESS_UP_ENABLED
#ifdef OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_MON_BRIGHTNESS_DOWN", OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN, runtime);
#endif // OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN_ENABLED
#ifdef OP_KEY_XF86XK_KBD_LIGHT_ON_OFF_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_KBD_LIGHT_ON_OFF", OP_KEY_XF86XK_KBD_LIGHT_ON_OFF, runtime);
#endif // OP_KEY_XF86XK_KBD_LIGHT_ON_OFF_ENABLED
#ifdef OP_KEY_XF86XK_KBD_BRIGHTNESS_UP_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_KBD_BRIGHTNESS_UP", OP_KEY_XF86XK_KBD_BRIGHTNESS_UP, runtime);
#endif // OP_KEY_XF86XK_KBD_BRIGHTNESS_UP_ENABLED
#ifdef OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_KBD_BRIGHTNESS_DOWN", OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN, runtime);
#endif // OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN_ENABLED
#ifdef OP_KEY_XF86XK_STANDBY_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_STANDBY", OP_KEY_XF86XK_STANDBY, runtime);
#endif // OP_KEY_XF86XK_STANDBY_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_LOWER_VOLUME_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_AUDIO_LOWER_VOLUME", OP_KEY_XF86XK_AUDIO_LOWER_VOLUME, runtime);
#endif // OP_KEY_XF86XK_AUDIO_LOWER_VOLUME_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_MUTE_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_AUDIO_MUTE", OP_KEY_XF86XK_AUDIO_MUTE, runtime);
#endif // OP_KEY_XF86XK_AUDIO_MUTE_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_RAISE_VOLUME_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_AUDIO_RAISE_VOLUME", OP_KEY_XF86XK_AUDIO_RAISE_VOLUME, runtime);
#endif // OP_KEY_XF86XK_AUDIO_RAISE_VOLUME_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_PLAY_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_AUDIO_PLAY", OP_KEY_XF86XK_AUDIO_PLAY, runtime);
#endif // OP_KEY_XF86XK_AUDIO_PLAY_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_STOP_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_AUDIO_STOP", OP_KEY_XF86XK_AUDIO_STOP, runtime);
#endif // OP_KEY_XF86XK_AUDIO_STOP_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_PREV_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_AUDIO_PREV", OP_KEY_XF86XK_AUDIO_PREV, runtime);
#endif // OP_KEY_XF86XK_AUDIO_PREV_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_NEXT_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_AUDIO_NEXT", OP_KEY_XF86XK_AUDIO_NEXT, runtime);
#endif // OP_KEY_XF86XK_AUDIO_NEXT_ENABLED
#ifdef OP_KEY_XF86XK_HOME_PAGE_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_HOME_PAGE", OP_KEY_XF86XK_HOME_PAGE, runtime);
#endif // OP_KEY_XF86XK_HOME_PAGE_ENABLED
#ifdef OP_KEY_XF86XK_MAIL_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_MAIL", OP_KEY_XF86XK_MAIL, runtime);
#endif // OP_KEY_XF86XK_MAIL_ENABLED
#ifdef OP_KEY_XF86XK_START_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_START", OP_KEY_XF86XK_START, runtime);
#endif // OP_KEY_XF86XK_START_ENABLED
#ifdef OP_KEY_XF86XK_SEARCH_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_SEARCH", OP_KEY_XF86XK_SEARCH, runtime);
#endif // OP_KEY_XF86XK_SEARCH_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_RECORD_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_AUDIO_RECORD", OP_KEY_XF86XK_AUDIO_RECORD, runtime);
#endif // OP_KEY_XF86XK_AUDIO_RECORD_ENABLED
#ifdef OP_KEY_XF86XK_CALCULATOR_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_CALCULATOR", OP_KEY_XF86XK_CALCULATOR, runtime);
#endif // OP_KEY_XF86XK_CALCULATOR_ENABLED
#ifdef OP_KEY_XF86XK_MEMO_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_MEMO", OP_KEY_XF86XK_MEMO, runtime);
#endif // OP_KEY_XF86XK_MEMO_ENABLED
#ifdef OP_KEY_XF86XK_TO_DO_LIST_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_TO_DO_LIST", OP_KEY_XF86XK_TO_DO_LIST, runtime);
#endif // OP_KEY_XF86XK_TO_DO_LIST_ENABLED
#ifdef OP_KEY_XF86XK_CALENDAR_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_CALENDAR", OP_KEY_XF86XK_CALENDAR, runtime);
#endif // OP_KEY_XF86XK_CALENDAR_ENABLED
#ifdef OP_KEY_XF86XK_POWER_DOWN_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_POWER_DOWN", OP_KEY_XF86XK_POWER_DOWN, runtime);
#endif // OP_KEY_XF86XK_POWER_DOWN_ENABLED
#ifdef OP_KEY_XF86XK_CONTRAST_ADJUST_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_CONTRAST_ADJUST", OP_KEY_XF86XK_CONTRAST_ADJUST, runtime);
#endif // OP_KEY_XF86XK_CONTRAST_ADJUST_ENABLED
#ifdef OP_KEY_XF86XK_ROCKER_UP_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_ROCKER_UP", OP_KEY_XF86XK_ROCKER_UP, runtime);
#endif // OP_KEY_XF86XK_ROCKER_UP_ENABLED
#ifdef OP_KEY_XF86XK_ROCKER_DOWN_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_ROCKER_DOWN", OP_KEY_XF86XK_ROCKER_DOWN, runtime);
#endif // OP_KEY_XF86XK_ROCKER_DOWN_ENABLED
#ifdef OP_KEY_XF86XK_ROCKER_ENTER_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_ROCKER_ENTER", OP_KEY_XF86XK_ROCKER_ENTER, runtime);
#endif // OP_KEY_XF86XK_ROCKER_ENTER_ENABLED
#ifdef OP_KEY_XF86XK_BACK_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_BACK", OP_KEY_XF86XK_BACK, runtime);
#endif // OP_KEY_XF86XK_BACK_ENABLED
#ifdef OP_KEY_XF86XK_FORWARD_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_FORWARD", OP_KEY_XF86XK_FORWARD, runtime);
#endif // OP_KEY_XF86XK_FORWARD_ENABLED
#ifdef OP_KEY_XF86XK_STOP_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_STOP", OP_KEY_XF86XK_STOP, runtime);
#endif // OP_KEY_XF86XK_STOP_ENABLED
#ifdef OP_KEY_XF86XK_REFRESH_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_REFRESH", OP_KEY_XF86XK_REFRESH, runtime);
#endif // OP_KEY_XF86XK_REFRESH_ENABLED
#ifdef OP_KEY_XF86XK_POWER_OFF_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_POWER_OFF", OP_KEY_XF86XK_POWER_OFF, runtime);
#endif // OP_KEY_XF86XK_POWER_OFF_ENABLED
#ifdef OP_KEY_XF86XK_WAKE_UP_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_WAKE_UP", OP_KEY_XF86XK_WAKE_UP, runtime);
#endif // OP_KEY_XF86XK_WAKE_UP_ENABLED
#ifdef OP_KEY_XF86XK_EJECT_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_EJECT", OP_KEY_XF86XK_EJECT, runtime);
#endif // OP_KEY_XF86XK_EJECT_ENABLED
#ifdef OP_KEY_XF86XK_SCREEN_SAVER_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_SCREEN_SAVER", OP_KEY_XF86XK_SCREEN_SAVER, runtime);
#endif // OP_KEY_XF86XK_SCREEN_SAVER_ENABLED
#ifdef OP_KEY_XF86XK_WWW_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_WWW", OP_KEY_XF86XK_WWW, runtime);
#endif // OP_KEY_XF86XK_WWW_ENABLED
#ifdef OP_KEY_XF86XK_FAVORITES_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_FAVORITES", OP_KEY_XF86XK_FAVORITES, runtime);
#endif // OP_KEY_XF86XK_FAVORITES_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_PAUSE_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_AUDIO_PAUSE", OP_KEY_XF86XK_AUDIO_PAUSE, runtime);
#endif // OP_KEY_XF86XK_AUDIO_PAUSE_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_MEDIA_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_AUDIO_MEDIA", OP_KEY_XF86XK_AUDIO_MEDIA, runtime);
#endif // OP_KEY_XF86XK_AUDIO_MEDIA_ENABLED
#ifdef OP_KEY_XF86XK_MY_COMPUTER_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_MY_COMPUTER", OP_KEY_XF86XK_MY_COMPUTER, runtime);
#endif // OP_KEY_XF86XK_MY_COMPUTER_ENABLED
#ifdef OP_KEY_XF86XK_VENDOR_HOME_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_VENDOR_HOME", OP_KEY_XF86XK_VENDOR_HOME, runtime);
#endif // OP_KEY_XF86XK_VENDOR_HOME_ENABLED
#ifdef OP_KEY_XF86XK_LIGHT_BULB_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_LIGHT_BULB", OP_KEY_XF86XK_LIGHT_BULB, runtime);
#endif // OP_KEY_XF86XK_LIGHT_BULB_ENABLED
#ifdef OP_KEY_XF86XK_SHOP_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_SHOP", OP_KEY_XF86XK_SHOP, runtime);
#endif // OP_KEY_XF86XK_SHOP_ENABLED
#ifdef OP_KEY_XF86XK_HISTORY_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_HISTORY", OP_KEY_XF86XK_HISTORY, runtime);
#endif // OP_KEY_XF86XK_HISTORY_ENABLED
#ifdef OP_KEY_XF86XK_OPEN_URL_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_OPEN_URL", OP_KEY_XF86XK_OPEN_URL, runtime);
#endif // OP_KEY_XF86XK_OPEN_URL_ENABLED
#ifdef OP_KEY_XF86XK_ADD_FAVORITE_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_ADD_FAVORITE", OP_KEY_XF86XK_ADD_FAVORITE, runtime);
#endif // OP_KEY_XF86XK_ADD_FAVORITE_ENABLED
#ifdef OP_KEY_XF86XK_HOT_LINKS_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_HOT_LINKS", OP_KEY_XF86XK_HOT_LINKS, runtime);
#endif // OP_KEY_XF86XK_HOT_LINKS_ENABLED
#ifdef OP_KEY_XF86XK_BRIGHTNESS_ADJUST_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_BRIGHTNESS_ADJUST", OP_KEY_XF86XK_BRIGHTNESS_ADJUST, runtime);
#endif // OP_KEY_XF86XK_BRIGHTNESS_ADJUST_ENABLED
#ifdef OP_KEY_XF86XK_FINANCE_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_FINANCE", OP_KEY_XF86XK_FINANCE, runtime);
#endif // OP_KEY_XF86XK_FINANCE_ENABLED
#ifdef OP_KEY_XF86XK_COMMUNITY_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_COMMUNITY", OP_KEY_XF86XK_COMMUNITY, runtime);
#endif // OP_KEY_XF86XK_COMMUNITY_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_REWIND_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_AUDIO_REWIND", OP_KEY_XF86XK_AUDIO_REWIND, runtime);
#endif // OP_KEY_XF86XK_AUDIO_REWIND_ENABLED
#ifdef OP_KEY_XF86XK_BACK_FORWARD_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_BACK_FORWARD", OP_KEY_XF86XK_BACK_FORWARD, runtime);
#endif // OP_KEY_XF86XK_BACK_FORWARD_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH0_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_LAUNCH0", OP_KEY_XF86XK_LAUNCH0, runtime);
#endif // OP_KEY_XF86XK_LAUNCH0_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH1_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_LAUNCH1", OP_KEY_XF86XK_LAUNCH1, runtime);
#endif // OP_KEY_XF86XK_LAUNCH1_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH2_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_LAUNCH2", OP_KEY_XF86XK_LAUNCH2, runtime);
#endif // OP_KEY_XF86XK_LAUNCH2_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH3_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_LAUNCH3", OP_KEY_XF86XK_LAUNCH3, runtime);
#endif // OP_KEY_XF86XK_LAUNCH3_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH4_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_LAUNCH4", OP_KEY_XF86XK_LAUNCH4, runtime);
#endif // OP_KEY_XF86XK_LAUNCH4_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH5_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_LAUNCH5", OP_KEY_XF86XK_LAUNCH5, runtime);
#endif // OP_KEY_XF86XK_LAUNCH5_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH6_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_LAUNCH6", OP_KEY_XF86XK_LAUNCH6, runtime);
#endif // OP_KEY_XF86XK_LAUNCH6_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH7_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_LAUNCH7", OP_KEY_XF86XK_LAUNCH7, runtime);
#endif // OP_KEY_XF86XK_LAUNCH7_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH8_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_LAUNCH8", OP_KEY_XF86XK_LAUNCH8, runtime);
#endif // OP_KEY_XF86XK_LAUNCH8_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH9_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_LAUNCH9", OP_KEY_XF86XK_LAUNCH9, runtime);
#endif // OP_KEY_XF86XK_LAUNCH9_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH_A_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_LAUNCH_A", OP_KEY_XF86XK_LAUNCH_A, runtime);
#endif // OP_KEY_XF86XK_LAUNCH_A_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH_B_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_LAUNCH_B", OP_KEY_XF86XK_LAUNCH_B, runtime);
#endif // OP_KEY_XF86XK_LAUNCH_B_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH_C_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_LAUNCH_C", OP_KEY_XF86XK_LAUNCH_C, runtime);
#endif // OP_KEY_XF86XK_LAUNCH_C_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH_D_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_LAUNCH_D", OP_KEY_XF86XK_LAUNCH_D, runtime);
#endif // OP_KEY_XF86XK_LAUNCH_D_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH_E_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_LAUNCH_E", OP_KEY_XF86XK_LAUNCH_E, runtime);
#endif // OP_KEY_XF86XK_LAUNCH_E_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH_F_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_LAUNCH_F", OP_KEY_XF86XK_LAUNCH_F, runtime);
#endif // OP_KEY_XF86XK_LAUNCH_F_ENABLED
#ifdef OP_KEY_XF86XK_APPLICATION_LEFT_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_APPLICATION_LEFT", OP_KEY_XF86XK_APPLICATION_LEFT, runtime);
#endif // OP_KEY_XF86XK_APPLICATION_LEFT_ENABLED
#ifdef OP_KEY_XF86XK_APPLICATION_RIGHT_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_APPLICATION_RIGHT", OP_KEY_XF86XK_APPLICATION_RIGHT, runtime);
#endif // OP_KEY_XF86XK_APPLICATION_RIGHT_ENABLED
#ifdef OP_KEY_XF86XK_BOOK_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_BOOK", OP_KEY_XF86XK_BOOK, runtime);
#endif // OP_KEY_XF86XK_BOOK_ENABLED
#ifdef OP_KEY_XF86XK_CD_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_CD", OP_KEY_XF86XK_CD, runtime);
#endif // OP_KEY_XF86XK_CD_ENABLED
#ifdef OP_KEY_XF86XK_CLOSE_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_CLOSE", OP_KEY_XF86XK_CLOSE, runtime);
#endif // OP_KEY_XF86XK_CLOSE_ENABLED
#ifdef OP_KEY_XF86XK_COPY_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_COPY", OP_KEY_XF86XK_COPY, runtime);
#endif // OP_KEY_XF86XK_COPY_ENABLED
#ifdef OP_KEY_XF86XK_CUT_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_CUT", OP_KEY_XF86XK_CUT, runtime);
#endif // OP_KEY_XF86XK_CUT_ENABLED
#ifdef OP_KEY_XF86XK_DISPLAY_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_DISPLAY", OP_KEY_XF86XK_DISPLAY, runtime);
#endif // OP_KEY_XF86XK_DISPLAY_ENABLED
#ifdef OP_KEY_XF86XK_DOS_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_DOS", OP_KEY_XF86XK_DOS, runtime);
#endif // OP_KEY_XF86XK_DOS_ENABLED
#ifdef OP_KEY_XF86XK_DOCUMENTS_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_DOCUMENTS", OP_KEY_XF86XK_DOCUMENTS, runtime);
#endif // OP_KEY_XF86XK_DOCUMENTS_ENABLED
#ifdef OP_KEY_XF86XK_EXCEL_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_EXCEL", OP_KEY_XF86XK_EXCEL, runtime);
#endif // OP_KEY_XF86XK_EXCEL_ENABLED
#ifdef OP_KEY_XF86XK_EXPLORER_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_EXPLORER", OP_KEY_XF86XK_EXPLORER, runtime);
#endif // OP_KEY_XF86XK_EXPLORER_ENABLED
#ifdef OP_KEY_XF86XK_GAME_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_GAME", OP_KEY_XF86XK_GAME, runtime);
#endif // OP_KEY_XF86XK_GAME_ENABLED
#ifdef OP_KEY_XF86XK_GO_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_GO", OP_KEY_XF86XK_GO, runtime);
#endif // OP_KEY_XF86XK_GO_ENABLED
#ifdef OP_KEY_XF86XK_I_TOUCH_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_I_TOUCH", OP_KEY_XF86XK_I_TOUCH, runtime);
#endif // OP_KEY_XF86XK_I_TOUCH_ENABLED
#ifdef OP_KEY_XF86XK_LOG_OFF_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_LOG_OFF", OP_KEY_XF86XK_LOG_OFF, runtime);
#endif // OP_KEY_XF86XK_LOG_OFF_ENABLED
#ifdef OP_KEY_XF86XK_MARKET_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_MARKET", OP_KEY_XF86XK_MARKET, runtime);
#endif // OP_KEY_XF86XK_MARKET_ENABLED
#ifdef OP_KEY_XF86XK_MEETING_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_MEETING", OP_KEY_XF86XK_MEETING, runtime);
#endif // OP_KEY_XF86XK_MEETING_ENABLED
#ifdef OP_KEY_XF86XK_MENU_KB_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_MENU_KB", OP_KEY_XF86XK_MENU_KB, runtime);
#endif // OP_KEY_XF86XK_MENU_KB_ENABLED
#ifdef OP_KEY_XF86XK_MENU_PB_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_MENU_PB", OP_KEY_XF86XK_MENU_PB, runtime);
#endif // OP_KEY_XF86XK_MENU_PB_ENABLED
#ifdef OP_KEY_XF86XK_MY_SITES_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_MY_SITES", OP_KEY_XF86XK_MY_SITES, runtime);
#endif // OP_KEY_XF86XK_MY_SITES_ENABLED
#ifdef OP_KEY_XF86XK_NEW_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_NEW", OP_KEY_XF86XK_NEW, runtime);
#endif // OP_KEY_XF86XK_NEW_ENABLED
#ifdef OP_KEY_XF86XK_NEWS_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_NEWS", OP_KEY_XF86XK_NEWS, runtime);
#endif // OP_KEY_XF86XK_NEWS_ENABLED
#ifdef OP_KEY_XF86XK_OFFICE_HOME_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_OFFICE_HOME", OP_KEY_XF86XK_OFFICE_HOME, runtime);
#endif // OP_KEY_XF86XK_OFFICE_HOME_ENABLED
#ifdef OP_KEY_XF86XK_OPEN_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_OPEN", OP_KEY_XF86XK_OPEN, runtime);
#endif // OP_KEY_XF86XK_OPEN_ENABLED
#ifdef OP_KEY_XF86XK_OPTION_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_OPTION", OP_KEY_XF86XK_OPTION, runtime);
#endif // OP_KEY_XF86XK_OPTION_ENABLED
#ifdef OP_KEY_XF86XK_PASTE_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_PASTE", OP_KEY_XF86XK_PASTE, runtime);
#endif // OP_KEY_XF86XK_PASTE_ENABLED
#ifdef OP_KEY_XF86XK_PHONE_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_PHONE", OP_KEY_XF86XK_PHONE, runtime);
#endif // OP_KEY_XF86XK_PHONE_ENABLED
#ifdef OP_KEY_XF86XK_REPLY_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_REPLY", OP_KEY_XF86XK_REPLY, runtime);
#endif // OP_KEY_XF86XK_REPLY_ENABLED
#ifdef OP_KEY_XF86XK_RELOAD_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_RELOAD", OP_KEY_XF86XK_RELOAD, runtime);
#endif // OP_KEY_XF86XK_RELOAD_ENABLED
#ifdef OP_KEY_XF86XK_ROTATE_WINDOWS_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_ROTATE_WINDOWS", OP_KEY_XF86XK_ROTATE_WINDOWS, runtime);
#endif // OP_KEY_XF86XK_ROTATE_WINDOWS_ENABLED
#ifdef OP_KEY_XF86XK_ROTATION_PB_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_ROTATION_PB", OP_KEY_XF86XK_ROTATION_PB, runtime);
#endif // OP_KEY_XF86XK_ROTATION_PB_ENABLED
#ifdef OP_KEY_XF86XK_ROTATION_KB_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_ROTATION_KB", OP_KEY_XF86XK_ROTATION_KB, runtime);
#endif // OP_KEY_XF86XK_ROTATION_KB_ENABLED
#ifdef OP_KEY_XF86XK_SAVE_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_SAVE", OP_KEY_XF86XK_SAVE, runtime);
#endif // OP_KEY_XF86XK_SAVE_ENABLED
#ifdef OP_KEY_XF86XK_SCROLL_UP_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_SCROLL_UP", OP_KEY_XF86XK_SCROLL_UP, runtime);
#endif // OP_KEY_XF86XK_SCROLL_UP_ENABLED
#ifdef OP_KEY_XF86XK_SCROLL_DOWN_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_SCROLL_DOWN", OP_KEY_XF86XK_SCROLL_DOWN, runtime);
#endif // OP_KEY_XF86XK_SCROLL_DOWN_ENABLED
#ifdef OP_KEY_XF86XK_SCROLL_CLICK_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_SCROLL_CLICK", OP_KEY_XF86XK_SCROLL_CLICK, runtime);
#endif // OP_KEY_XF86XK_SCROLL_CLICK_ENABLED
#ifdef OP_KEY_XF86XK_SEND_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_SEND", OP_KEY_XF86XK_SEND, runtime);
#endif // OP_KEY_XF86XK_SEND_ENABLED
#ifdef OP_KEY_XF86XK_SPELL_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_SPELL", OP_KEY_XF86XK_SPELL, runtime);
#endif // OP_KEY_XF86XK_SPELL_ENABLED
#ifdef OP_KEY_XF86XK_SPLIT_SCREEN_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_SPLIT_SCREEN", OP_KEY_XF86XK_SPLIT_SCREEN, runtime);
#endif // OP_KEY_XF86XK_SPLIT_SCREEN_ENABLED
#ifdef OP_KEY_XF86XK_SUPPORT_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_SUPPORT", OP_KEY_XF86XK_SUPPORT, runtime);
#endif // OP_KEY_XF86XK_SUPPORT_ENABLED
#ifdef OP_KEY_XF86XK_TASK_PANE_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_TASK_PANE", OP_KEY_XF86XK_TASK_PANE, runtime);
#endif // OP_KEY_XF86XK_TASK_PANE_ENABLED
#ifdef OP_KEY_XF86XK_TERMINAL_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_TERMINAL", OP_KEY_XF86XK_TERMINAL, runtime);
#endif // OP_KEY_XF86XK_TERMINAL_ENABLED
#ifdef OP_KEY_XF86XK_TOOLS_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_TOOLS", OP_KEY_XF86XK_TOOLS, runtime);
#endif // OP_KEY_XF86XK_TOOLS_ENABLED
#ifdef OP_KEY_XF86XK_TRAVEL_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_TRAVEL", OP_KEY_XF86XK_TRAVEL, runtime);
#endif // OP_KEY_XF86XK_TRAVEL_ENABLED
#ifdef OP_KEY_XF86XK_USER_PB_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_USER_PB", OP_KEY_XF86XK_USER_PB, runtime);
#endif // OP_KEY_XF86XK_USER_PB_ENABLED
#ifdef OP_KEY_XF86XK_USER1KB_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_USER1KB", OP_KEY_XF86XK_USER1KB, runtime);
#endif // OP_KEY_XF86XK_USER1KB_ENABLED
#ifdef OP_KEY_XF86XK_USER2KB_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_USER2KB", OP_KEY_XF86XK_USER2KB, runtime);
#endif // OP_KEY_XF86XK_USER2KB_ENABLED
#ifdef OP_KEY_XF86XK_VIDEO_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_VIDEO", OP_KEY_XF86XK_VIDEO, runtime);
#endif // OP_KEY_XF86XK_VIDEO_ENABLED
#ifdef OP_KEY_XF86XK_WHEEL_BUTTON_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_WHEEL_BUTTON", OP_KEY_XF86XK_WHEEL_BUTTON, runtime);
#endif // OP_KEY_XF86XK_WHEEL_BUTTON_ENABLED
#ifdef OP_KEY_XF86XK_WORD_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_WORD", OP_KEY_XF86XK_WORD, runtime);
#endif // OP_KEY_XF86XK_WORD_ENABLED
#ifdef OP_KEY_XF86XK_XFER_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_XFER", OP_KEY_XF86XK_XFER, runtime);
#endif // OP_KEY_XF86XK_XFER_ENABLED
#ifdef OP_KEY_XF86XK_ZOOM_IN_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_ZOOM_IN", OP_KEY_XF86XK_ZOOM_IN, runtime);
#endif // OP_KEY_XF86XK_ZOOM_IN_ENABLED
#ifdef OP_KEY_XF86XK_ZOOM_OUT_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_ZOOM_OUT", OP_KEY_XF86XK_ZOOM_OUT, runtime);
#endif // OP_KEY_XF86XK_ZOOM_OUT_ENABLED
#ifdef OP_KEY_XF86XK_AWAY_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_AWAY", OP_KEY_XF86XK_AWAY, runtime);
#endif // OP_KEY_XF86XK_AWAY_ENABLED
#ifdef OP_KEY_XF86XK_MESSENGER_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_MESSENGER", OP_KEY_XF86XK_MESSENGER, runtime);
#endif // OP_KEY_XF86XK_MESSENGER_ENABLED
#ifdef OP_KEY_XF86XK_WEB_CAM_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_WEB_CAM", OP_KEY_XF86XK_WEB_CAM, runtime);
#endif // OP_KEY_XF86XK_WEB_CAM_ENABLED
#ifdef OP_KEY_XF86XK_MAIL_FORWARD_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_MAIL_FORWARD", OP_KEY_XF86XK_MAIL_FORWARD, runtime);
#endif // OP_KEY_XF86XK_MAIL_FORWARD_ENABLED
#ifdef OP_KEY_XF86XK_PICTURES_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_PICTURES", OP_KEY_XF86XK_PICTURES, runtime);
#endif // OP_KEY_XF86XK_PICTURES_ENABLED
#ifdef OP_KEY_XF86XK_MUSIC_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_MUSIC", OP_KEY_XF86XK_MUSIC, runtime);
#endif // OP_KEY_XF86XK_MUSIC_ENABLED
#ifdef OP_KEY_XF86XK_BATTERY_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_BATTERY", OP_KEY_XF86XK_BATTERY, runtime);
#endif // OP_KEY_XF86XK_BATTERY_ENABLED
#ifdef OP_KEY_XF86XK_BLUETOOTH_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_BLUETOOTH", OP_KEY_XF86XK_BLUETOOTH, runtime);
#endif // OP_KEY_XF86XK_BLUETOOTH_ENABLED
#ifdef OP_KEY_XF86XK_WLAN_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_WLAN", OP_KEY_XF86XK_WLAN, runtime);
#endif // OP_KEY_XF86XK_WLAN_ENABLED
#ifdef OP_KEY_XF86XK_UWB_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_UWB", OP_KEY_XF86XK_UWB, runtime);
#endif // OP_KEY_XF86XK_UWB_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_FORWARD_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_AUDIO_FORWARD", OP_KEY_XF86XK_AUDIO_FORWARD, runtime);
#endif // OP_KEY_XF86XK_AUDIO_FORWARD_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_REPEAT_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_AUDIO_REPEAT", OP_KEY_XF86XK_AUDIO_REPEAT, runtime);
#endif // OP_KEY_XF86XK_AUDIO_REPEAT_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_RANDOM_PLAY_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_AUDIO_RANDOM_PLAY", OP_KEY_XF86XK_AUDIO_RANDOM_PLAY, runtime);
#endif // OP_KEY_XF86XK_AUDIO_RANDOM_PLAY_ENABLED
#ifdef OP_KEY_XF86XK_SUBTITLE_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_SUBTITLE", OP_KEY_XF86XK_SUBTITLE, runtime);
#endif // OP_KEY_XF86XK_SUBTITLE_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_CYCLE_TRACK_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_AUDIO_CYCLE_TRACK", OP_KEY_XF86XK_AUDIO_CYCLE_TRACK, runtime);
#endif // OP_KEY_XF86XK_AUDIO_CYCLE_TRACK_ENABLED
#ifdef OP_KEY_XF86XK_CYCLE_ANGLE_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_CYCLE_ANGLE", OP_KEY_XF86XK_CYCLE_ANGLE, runtime);
#endif // OP_KEY_XF86XK_CYCLE_ANGLE_ENABLED
#ifdef OP_KEY_XF86XK_FRAME_BACK_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_FRAME_BACK", OP_KEY_XF86XK_FRAME_BACK, runtime);
#endif // OP_KEY_XF86XK_FRAME_BACK_ENABLED
#ifdef OP_KEY_XF86XK_FRAME_FORWARD_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_FRAME_FORWARD", OP_KEY_XF86XK_FRAME_FORWARD, runtime);
#endif // OP_KEY_XF86XK_FRAME_FORWARD_ENABLED
#ifdef OP_KEY_XF86XK_TIME_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_TIME", OP_KEY_XF86XK_TIME, runtime);
#endif // OP_KEY_XF86XK_TIME_ENABLED
#ifdef OP_KEY_XF86XK_VIEW_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_VIEW", OP_KEY_XF86XK_VIEW, runtime);
#endif // OP_KEY_XF86XK_VIEW_ENABLED
#ifdef OP_KEY_XF86XK_TOP_MENU_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_TOP_MENU", OP_KEY_XF86XK_TOP_MENU, runtime);
#endif // OP_KEY_XF86XK_TOP_MENU_ENABLED
#ifdef OP_KEY_XF86XK_RED_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_RED", OP_KEY_XF86XK_RED, runtime);
#endif // OP_KEY_XF86XK_RED_ENABLED
#ifdef OP_KEY_XF86XK_GREEN_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_GREEN", OP_KEY_XF86XK_GREEN, runtime);
#endif // OP_KEY_XF86XK_GREEN_ENABLED
#ifdef OP_KEY_XF86XK_YELLOW_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_YELLOW", OP_KEY_XF86XK_YELLOW, runtime);
#endif // OP_KEY_XF86XK_YELLOW_ENABLED
#ifdef OP_KEY_XF86XK_BLUE_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_BLUE", OP_KEY_XF86XK_BLUE, runtime);
#endif // OP_KEY_XF86XK_BLUE_ENABLED
#ifdef OP_KEY_XF86XK_SUSPEND_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_SUSPEND", OP_KEY_XF86XK_SUSPEND, runtime);
#endif // OP_KEY_XF86XK_SUSPEND_ENABLED
#ifdef OP_KEY_XF86XK_HIBERNATE_ENABLED
	PutNumericConstantL(object, "DOM_VK_XF86XK_HIBERNATE", OP_KEY_XF86XK_HIBERNATE, runtime);
#endif // OP_KEY_XF86XK_HIBERNATE_ENABLED
#ifdef OP_KEY_MAC_CTRL_LEFT_ENABLED
	PutNumericConstantL(object, "DOM_VK_MAC_CTRL_LEFT", OP_KEY_MAC_CTRL_LEFT, runtime);
#endif // OP_KEY_MAC_CTRL_LEFT_ENABLED
#ifdef OP_KEY_MAC_CTRL_RIGHT_ENABLED
	PutNumericConstantL(object, "DOM_VK_MAC_CTRL_RIGHT", OP_KEY_MAC_CTRL_RIGHT, runtime);
#endif // OP_KEY_MAC_CTRL_RIGHT_ENABLED
#ifdef OP_KEY_SWIPE_UP_ENABLED
	PutNumericConstantL(object, "DOM_VK_SWIPE_UP", OP_KEY_SWIPE_UP, runtime);
#endif // OP_KEY_SWIPE_UP_ENABLED
#ifdef OP_KEY_SWIPE_DOWN_ENABLED
	PutNumericConstantL(object, "DOM_VK_SWIPE_DOWN", OP_KEY_SWIPE_DOWN, runtime);
#endif // OP_KEY_SWIPE_DOWN_ENABLED
#ifdef OP_KEY_SWIPE_LEFT_ENABLED
	PutNumericConstantL(object, "DOM_VK_SWIPE_LEFT", OP_KEY_SWIPE_LEFT, runtime);
#endif // OP_KEY_SWIPE_LEFT_ENABLED
#ifdef OP_KEY_SWIPE_RIGHT_ENABLED
	PutNumericConstantL(object, "DOM_VK_SWIPE_RIGHT", OP_KEY_SWIPE_RIGHT, runtime);
#endif // OP_KEY_SWIPE_RIGHT_ENABLED
#ifdef OP_KEY_BACK_ENABLED
	PutNumericConstantL(object, "DOM_VK_BACK", OP_KEY_BACK, runtime);
#endif // OP_KEY_BACK_ENABLED
#ifdef OP_KEY_CONTEXT1_ENABLED
	PutNumericConstantL(object, "DOM_VK_CONTEXT1", OP_KEY_CONTEXT1, runtime);
#endif // OP_KEY_CONTEXT1_ENABLED
#ifdef OP_KEY_CONTEXT2_ENABLED
	PutNumericConstantL(object, "DOM_VK_CONTEXT2", OP_KEY_CONTEXT2, runtime);
#endif // OP_KEY_CONTEXT2_ENABLED
#ifdef OP_KEY_CONTEXT3_ENABLED
	PutNumericConstantL(object, "DOM_VK_CONTEXT3", OP_KEY_CONTEXT3, runtime);
#endif // OP_KEY_CONTEXT3_ENABLED
#ifdef OP_KEY_CONTEXT4_ENABLED
	PutNumericConstantL(object, "DOM_VK_CONTEXT4", OP_KEY_CONTEXT4, runtime);
#endif // OP_KEY_CONTEXT4_ENABLED
#ifdef OP_KEY_YES_ENABLED
	PutNumericConstantL(object, "DOM_VK_YES", OP_KEY_YES, runtime);
#endif // OP_KEY_YES_ENABLED
#ifdef OP_KEY_NO_ENABLED
	PutNumericConstantL(object, "DOM_VK_NO", OP_KEY_NO, runtime);
#endif // OP_KEY_NO_ENABLED
#ifdef OP_KEY_CALL_ENABLED
	PutNumericConstantL(object, "DOM_VK_CALL", OP_KEY_CALL, runtime);
#endif // OP_KEY_CALL_ENABLED
#ifdef OP_KEY_HANGUP_ENABLED
	PutNumericConstantL(object, "DOM_VK_HANGUP", OP_KEY_HANGUP, runtime);
#endif // OP_KEY_HANGUP_ENABLED
#ifdef OP_KEY_HK_TOGGLE_ENABLED
	PutNumericConstantL(object, "DOM_VK_HK_TOGGLE", OP_KEY_HK_TOGGLE, runtime);
#endif // OP_KEY_HK_TOGGLE_ENABLED
#ifdef OP_KEY_CHANNELDOWN_ENABLED
	PutNumericConstantL(object, "DOM_VK_CHANNELDOWN", OP_KEY_CHANNELDOWN, runtime);
#endif // OP_KEY_CHANNELDOWN_ENABLED
#ifdef OP_KEY_CHANNELUP_ENABLED
	PutNumericConstantL(object, "DOM_VK_CHANNELUP", OP_KEY_CHANNELUP, runtime);
#endif // OP_KEY_CHANNELUP_ENABLED
#ifdef OP_KEY_MUTE_ENABLED
	PutNumericConstantL(object, "DOM_VK_MUTE", OP_KEY_MUTE, runtime);
#endif // OP_KEY_MUTE_ENABLED
#ifdef OP_KEY_RECORD_ENABLED
	PutNumericConstantL(object, "DOM_VK_RECORD", OP_KEY_RECORD, runtime);
#endif // OP_KEY_RECORD_ENABLED
}
