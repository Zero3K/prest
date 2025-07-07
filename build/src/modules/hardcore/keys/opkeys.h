/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 1995-2017 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
*/

#ifndef OPKEY_AUTO_H
#define OPKEY_AUTO_H

#define YES 1
#define NO 0

#ifndef PRODUCT_OPKEY_FILE
#error "You must define PRODUCT_OPKEY_FILE to the opkey definition file for your platform/product. see hardcore/keys/README.txt for more information."
#endif // PRODUCT_OPKEY_FILE

#include PRODUCT_OPKEY_FILE

#if !defined ENABLE_OP_KEY_CANCEL || (ENABLE_OP_KEY_CANCEL != YES && ENABLE_OP_KEY_CANCEL != NO)
#	error "You need to decide if OP_KEY_CANCEL (Cancel) should be enabled."
#endif // !defined ENABLE_OP_KEY_CANCEL || (ENABLE_OP_KEY_CANCEL != YES && ENABLE_OP_KEY_CANCEL != NO)
#if !defined ENABLE_OP_KEY_CANCEL || (ENABLE_OP_KEY_CANCEL != YES && ENABLE_OP_KEY_CANCEL != NO)
#	error "You need to decide if OP_KEY_CANCEL (Cancel) should be enabled."
#endif // !defined ENABLE_OP_KEY_CANCEL || (ENABLE_OP_KEY_CANCEL != YES && ENABLE_OP_KEY_CANCEL != NO)
#if ENABLE_OP_KEY_CANCEL == YES
#	define OP_KEY_CANCEL_ENABLED 1
#endif // ENABLE_OP_KEY_CANCEL == YES
#undef ENABLE_OP_KEY_CANCEL
#if !defined ENABLE_OP_KEY_BACKSPACE || (ENABLE_OP_KEY_BACKSPACE != YES && ENABLE_OP_KEY_BACKSPACE != NO)
#	error "You need to decide if OP_KEY_BACKSPACE (Backspace) should be enabled."
#endif // !defined ENABLE_OP_KEY_BACKSPACE || (ENABLE_OP_KEY_BACKSPACE != YES && ENABLE_OP_KEY_BACKSPACE != NO)
#if !defined ENABLE_OP_KEY_BACKSPACE || (ENABLE_OP_KEY_BACKSPACE != YES && ENABLE_OP_KEY_BACKSPACE != NO)
#	error "You need to decide if OP_KEY_BACKSPACE (Backspace) should be enabled."
#endif // !defined ENABLE_OP_KEY_BACKSPACE || (ENABLE_OP_KEY_BACKSPACE != YES && ENABLE_OP_KEY_BACKSPACE != NO)
#if ENABLE_OP_KEY_BACKSPACE == YES
#	define OP_KEY_BACKSPACE_ENABLED 1
#endif // ENABLE_OP_KEY_BACKSPACE == YES
#undef ENABLE_OP_KEY_BACKSPACE
#if !defined ENABLE_OP_KEY_TAB || (ENABLE_OP_KEY_TAB != YES && ENABLE_OP_KEY_TAB != NO)
#	error "You need to decide if OP_KEY_TAB (Tab) should be enabled."
#endif // !defined ENABLE_OP_KEY_TAB || (ENABLE_OP_KEY_TAB != YES && ENABLE_OP_KEY_TAB != NO)
#if !defined ENABLE_OP_KEY_TAB || (ENABLE_OP_KEY_TAB != YES && ENABLE_OP_KEY_TAB != NO)
#	error "You need to decide if OP_KEY_TAB (Tab) should be enabled."
#endif // !defined ENABLE_OP_KEY_TAB || (ENABLE_OP_KEY_TAB != YES && ENABLE_OP_KEY_TAB != NO)
#if ENABLE_OP_KEY_TAB == YES
#	define OP_KEY_TAB_ENABLED 1
#endif // ENABLE_OP_KEY_TAB == YES
#undef ENABLE_OP_KEY_TAB
#if !defined ENABLE_OP_KEY_CLEAR || (ENABLE_OP_KEY_CLEAR != YES && ENABLE_OP_KEY_CLEAR != NO)
#	error "You need to decide if OP_KEY_CLEAR (Clear) should be enabled."
#endif // !defined ENABLE_OP_KEY_CLEAR || (ENABLE_OP_KEY_CLEAR != YES && ENABLE_OP_KEY_CLEAR != NO)
#if !defined ENABLE_OP_KEY_CLEAR || (ENABLE_OP_KEY_CLEAR != YES && ENABLE_OP_KEY_CLEAR != NO)
#	error "You need to decide if OP_KEY_CLEAR (Clear) should be enabled."
#endif // !defined ENABLE_OP_KEY_CLEAR || (ENABLE_OP_KEY_CLEAR != YES && ENABLE_OP_KEY_CLEAR != NO)
#if ENABLE_OP_KEY_CLEAR == YES
#	define OP_KEY_CLEAR_ENABLED 1
#endif // ENABLE_OP_KEY_CLEAR == YES
#undef ENABLE_OP_KEY_CLEAR
#if !defined ENABLE_OP_KEY_ENTER || (ENABLE_OP_KEY_ENTER != YES && ENABLE_OP_KEY_ENTER != NO)
#	error "You need to decide if OP_KEY_ENTER (Enter) should be enabled."
#endif // !defined ENABLE_OP_KEY_ENTER || (ENABLE_OP_KEY_ENTER != YES && ENABLE_OP_KEY_ENTER != NO)
#if !defined ENABLE_OP_KEY_ENTER || (ENABLE_OP_KEY_ENTER != YES && ENABLE_OP_KEY_ENTER != NO)
#	error "You need to decide if OP_KEY_ENTER (Enter) should be enabled."
#endif // !defined ENABLE_OP_KEY_ENTER || (ENABLE_OP_KEY_ENTER != YES && ENABLE_OP_KEY_ENTER != NO)
#if ENABLE_OP_KEY_ENTER == YES
#	define OP_KEY_ENTER_ENABLED 1
#endif // ENABLE_OP_KEY_ENTER == YES
#undef ENABLE_OP_KEY_ENTER
#if !defined ENABLE_OP_KEY_SHIFT || (ENABLE_OP_KEY_SHIFT != YES && ENABLE_OP_KEY_SHIFT != NO)
#	error "You need to decide if OP_KEY_SHIFT (Shift) should be enabled."
#endif // !defined ENABLE_OP_KEY_SHIFT || (ENABLE_OP_KEY_SHIFT != YES && ENABLE_OP_KEY_SHIFT != NO)
#if !defined ENABLE_OP_KEY_SHIFT || (ENABLE_OP_KEY_SHIFT != YES && ENABLE_OP_KEY_SHIFT != NO)
#	error "You need to decide if OP_KEY_SHIFT (Shift) should be enabled."
#endif // !defined ENABLE_OP_KEY_SHIFT || (ENABLE_OP_KEY_SHIFT != YES && ENABLE_OP_KEY_SHIFT != NO)
#if ENABLE_OP_KEY_SHIFT == YES
#	define OP_KEY_SHIFT_ENABLED 1
#endif // ENABLE_OP_KEY_SHIFT == YES
#undef ENABLE_OP_KEY_SHIFT
#if !defined ENABLE_OP_KEY_CTRL || (ENABLE_OP_KEY_CTRL != YES && ENABLE_OP_KEY_CTRL != NO)
#	error "You need to decide if OP_KEY_CTRL (Control) should be enabled."
#endif // !defined ENABLE_OP_KEY_CTRL || (ENABLE_OP_KEY_CTRL != YES && ENABLE_OP_KEY_CTRL != NO)
#if !defined ENABLE_OP_KEY_CTRL || (ENABLE_OP_KEY_CTRL != YES && ENABLE_OP_KEY_CTRL != NO)
#	error "You need to decide if OP_KEY_CTRL (Control) should be enabled."
#endif // !defined ENABLE_OP_KEY_CTRL || (ENABLE_OP_KEY_CTRL != YES && ENABLE_OP_KEY_CTRL != NO)
#if ENABLE_OP_KEY_CTRL == YES
#	define OP_KEY_CTRL_ENABLED 1
#endif // ENABLE_OP_KEY_CTRL == YES
#undef ENABLE_OP_KEY_CTRL
#if !defined ENABLE_OP_KEY_ALT || (ENABLE_OP_KEY_ALT != YES && ENABLE_OP_KEY_ALT != NO)
#	error "You need to decide if OP_KEY_ALT (Alt) should be enabled."
#endif // !defined ENABLE_OP_KEY_ALT || (ENABLE_OP_KEY_ALT != YES && ENABLE_OP_KEY_ALT != NO)
#if !defined ENABLE_OP_KEY_ALT || (ENABLE_OP_KEY_ALT != YES && ENABLE_OP_KEY_ALT != NO)
#	error "You need to decide if OP_KEY_ALT (Alt) should be enabled."
#endif // !defined ENABLE_OP_KEY_ALT || (ENABLE_OP_KEY_ALT != YES && ENABLE_OP_KEY_ALT != NO)
#if ENABLE_OP_KEY_ALT == YES
#	define OP_KEY_ALT_ENABLED 1
#endif // ENABLE_OP_KEY_ALT == YES
#undef ENABLE_OP_KEY_ALT
#if !defined ENABLE_OP_KEY_PAUSE || (ENABLE_OP_KEY_PAUSE != YES && ENABLE_OP_KEY_PAUSE != NO)
#	error "You need to decide if OP_KEY_PAUSE (Pause) should be enabled."
#endif // !defined ENABLE_OP_KEY_PAUSE || (ENABLE_OP_KEY_PAUSE != YES && ENABLE_OP_KEY_PAUSE != NO)
#if !defined ENABLE_OP_KEY_PAUSE || (ENABLE_OP_KEY_PAUSE != YES && ENABLE_OP_KEY_PAUSE != NO)
#	error "You need to decide if OP_KEY_PAUSE (Pause) should be enabled."
#endif // !defined ENABLE_OP_KEY_PAUSE || (ENABLE_OP_KEY_PAUSE != YES && ENABLE_OP_KEY_PAUSE != NO)
#if ENABLE_OP_KEY_PAUSE == YES
#	define OP_KEY_PAUSE_ENABLED 1
#endif // ENABLE_OP_KEY_PAUSE == YES
#undef ENABLE_OP_KEY_PAUSE
#if !defined ENABLE_OP_KEY_CAPS_LOCK || (ENABLE_OP_KEY_CAPS_LOCK != YES && ENABLE_OP_KEY_CAPS_LOCK != NO)
#	error "You need to decide if OP_KEY_CAPS_LOCK (CapsLock) should be enabled."
#endif // !defined ENABLE_OP_KEY_CAPS_LOCK || (ENABLE_OP_KEY_CAPS_LOCK != YES && ENABLE_OP_KEY_CAPS_LOCK != NO)
#if !defined ENABLE_OP_KEY_CAPS_LOCK || (ENABLE_OP_KEY_CAPS_LOCK != YES && ENABLE_OP_KEY_CAPS_LOCK != NO)
#	error "You need to decide if OP_KEY_CAPS_LOCK (CapsLock) should be enabled."
#endif // !defined ENABLE_OP_KEY_CAPS_LOCK || (ENABLE_OP_KEY_CAPS_LOCK != YES && ENABLE_OP_KEY_CAPS_LOCK != NO)
#if ENABLE_OP_KEY_CAPS_LOCK == YES
#	define OP_KEY_CAPS_LOCK_ENABLED 1
#endif // ENABLE_OP_KEY_CAPS_LOCK == YES
#undef ENABLE_OP_KEY_CAPS_LOCK
#if !defined ENABLE_OP_KEY_KANA || (ENABLE_OP_KEY_KANA != YES && ENABLE_OP_KEY_KANA != NO)
#	error "You need to decide if OP_KEY_KANA (Kana) should be enabled."
#endif // !defined ENABLE_OP_KEY_KANA || (ENABLE_OP_KEY_KANA != YES && ENABLE_OP_KEY_KANA != NO)
#if !defined ENABLE_OP_KEY_KANA || (ENABLE_OP_KEY_KANA != YES && ENABLE_OP_KEY_KANA != NO)
#	error "You need to decide if OP_KEY_KANA (Kana) should be enabled."
#endif // !defined ENABLE_OP_KEY_KANA || (ENABLE_OP_KEY_KANA != YES && ENABLE_OP_KEY_KANA != NO)
#if ENABLE_OP_KEY_KANA == YES
#	define OP_KEY_KANA_ENABLED 1
#endif // ENABLE_OP_KEY_KANA == YES
#undef ENABLE_OP_KEY_KANA
#if !defined ENABLE_OP_KEY_FINAL || (ENABLE_OP_KEY_FINAL != YES && ENABLE_OP_KEY_FINAL != NO)
#	error "You need to decide if OP_KEY_FINAL (Final) should be enabled."
#endif // !defined ENABLE_OP_KEY_FINAL || (ENABLE_OP_KEY_FINAL != YES && ENABLE_OP_KEY_FINAL != NO)
#if !defined ENABLE_OP_KEY_FINAL || (ENABLE_OP_KEY_FINAL != YES && ENABLE_OP_KEY_FINAL != NO)
#	error "You need to decide if OP_KEY_FINAL (Final) should be enabled."
#endif // !defined ENABLE_OP_KEY_FINAL || (ENABLE_OP_KEY_FINAL != YES && ENABLE_OP_KEY_FINAL != NO)
#if ENABLE_OP_KEY_FINAL == YES
#	define OP_KEY_FINAL_ENABLED 1
#endif // ENABLE_OP_KEY_FINAL == YES
#undef ENABLE_OP_KEY_FINAL
#if !defined ENABLE_OP_KEY_KANJI || (ENABLE_OP_KEY_KANJI != YES && ENABLE_OP_KEY_KANJI != NO)
#	error "You need to decide if OP_KEY_KANJI (Kanji) should be enabled."
#endif // !defined ENABLE_OP_KEY_KANJI || (ENABLE_OP_KEY_KANJI != YES && ENABLE_OP_KEY_KANJI != NO)
#if !defined ENABLE_OP_KEY_KANJI || (ENABLE_OP_KEY_KANJI != YES && ENABLE_OP_KEY_KANJI != NO)
#	error "You need to decide if OP_KEY_KANJI (Kanji) should be enabled."
#endif // !defined ENABLE_OP_KEY_KANJI || (ENABLE_OP_KEY_KANJI != YES && ENABLE_OP_KEY_KANJI != NO)
#if ENABLE_OP_KEY_KANJI == YES
#	define OP_KEY_KANJI_ENABLED 1
#endif // ENABLE_OP_KEY_KANJI == YES
#undef ENABLE_OP_KEY_KANJI
#if !defined ENABLE_OP_KEY_ESCAPE || (ENABLE_OP_KEY_ESCAPE != YES && ENABLE_OP_KEY_ESCAPE != NO)
#	error "You need to decide if OP_KEY_ESCAPE (Esc) should be enabled."
#endif // !defined ENABLE_OP_KEY_ESCAPE || (ENABLE_OP_KEY_ESCAPE != YES && ENABLE_OP_KEY_ESCAPE != NO)
#if !defined ENABLE_OP_KEY_ESCAPE || (ENABLE_OP_KEY_ESCAPE != YES && ENABLE_OP_KEY_ESCAPE != NO)
#	error "You need to decide if OP_KEY_ESCAPE (Esc) should be enabled."
#endif // !defined ENABLE_OP_KEY_ESCAPE || (ENABLE_OP_KEY_ESCAPE != YES && ENABLE_OP_KEY_ESCAPE != NO)
#if ENABLE_OP_KEY_ESCAPE == YES
#	define OP_KEY_ESCAPE_ENABLED 1
#endif // ENABLE_OP_KEY_ESCAPE == YES
#undef ENABLE_OP_KEY_ESCAPE
#if !defined ENABLE_OP_KEY_CONVERT || (ENABLE_OP_KEY_CONVERT != YES && ENABLE_OP_KEY_CONVERT != NO)
#	error "You need to decide if OP_KEY_CONVERT (Convert) should be enabled."
#endif // !defined ENABLE_OP_KEY_CONVERT || (ENABLE_OP_KEY_CONVERT != YES && ENABLE_OP_KEY_CONVERT != NO)
#if !defined ENABLE_OP_KEY_CONVERT || (ENABLE_OP_KEY_CONVERT != YES && ENABLE_OP_KEY_CONVERT != NO)
#	error "You need to decide if OP_KEY_CONVERT (Convert) should be enabled."
#endif // !defined ENABLE_OP_KEY_CONVERT || (ENABLE_OP_KEY_CONVERT != YES && ENABLE_OP_KEY_CONVERT != NO)
#if ENABLE_OP_KEY_CONVERT == YES
#	define OP_KEY_CONVERT_ENABLED 1
#endif // ENABLE_OP_KEY_CONVERT == YES
#undef ENABLE_OP_KEY_CONVERT
#if !defined ENABLE_OP_KEY_NONCONVERT || (ENABLE_OP_KEY_NONCONVERT != YES && ENABLE_OP_KEY_NONCONVERT != NO)
#	error "You need to decide if OP_KEY_NONCONVERT (NonConvert) should be enabled."
#endif // !defined ENABLE_OP_KEY_NONCONVERT || (ENABLE_OP_KEY_NONCONVERT != YES && ENABLE_OP_KEY_NONCONVERT != NO)
#if !defined ENABLE_OP_KEY_NONCONVERT || (ENABLE_OP_KEY_NONCONVERT != YES && ENABLE_OP_KEY_NONCONVERT != NO)
#	error "You need to decide if OP_KEY_NONCONVERT (NonConvert) should be enabled."
#endif // !defined ENABLE_OP_KEY_NONCONVERT || (ENABLE_OP_KEY_NONCONVERT != YES && ENABLE_OP_KEY_NONCONVERT != NO)
#if ENABLE_OP_KEY_NONCONVERT == YES
#	define OP_KEY_NONCONVERT_ENABLED 1
#endif // ENABLE_OP_KEY_NONCONVERT == YES
#undef ENABLE_OP_KEY_NONCONVERT
#if !defined ENABLE_OP_KEY_ACCEPT || (ENABLE_OP_KEY_ACCEPT != YES && ENABLE_OP_KEY_ACCEPT != NO)
#	error "You need to decide if OP_KEY_ACCEPT (Accept) should be enabled."
#endif // !defined ENABLE_OP_KEY_ACCEPT || (ENABLE_OP_KEY_ACCEPT != YES && ENABLE_OP_KEY_ACCEPT != NO)
#if !defined ENABLE_OP_KEY_ACCEPT || (ENABLE_OP_KEY_ACCEPT != YES && ENABLE_OP_KEY_ACCEPT != NO)
#	error "You need to decide if OP_KEY_ACCEPT (Accept) should be enabled."
#endif // !defined ENABLE_OP_KEY_ACCEPT || (ENABLE_OP_KEY_ACCEPT != YES && ENABLE_OP_KEY_ACCEPT != NO)
#if ENABLE_OP_KEY_ACCEPT == YES
#	define OP_KEY_ACCEPT_ENABLED 1
#endif // ENABLE_OP_KEY_ACCEPT == YES
#undef ENABLE_OP_KEY_ACCEPT
#if !defined ENABLE_OP_KEY_MODECHANGE || (ENABLE_OP_KEY_MODECHANGE != YES && ENABLE_OP_KEY_MODECHANGE != NO)
#	error "You need to decide if OP_KEY_MODECHANGE (ModeChange) should be enabled."
#endif // !defined ENABLE_OP_KEY_MODECHANGE || (ENABLE_OP_KEY_MODECHANGE != YES && ENABLE_OP_KEY_MODECHANGE != NO)
#if !defined ENABLE_OP_KEY_MODECHANGE || (ENABLE_OP_KEY_MODECHANGE != YES && ENABLE_OP_KEY_MODECHANGE != NO)
#	error "You need to decide if OP_KEY_MODECHANGE (ModeChange) should be enabled."
#endif // !defined ENABLE_OP_KEY_MODECHANGE || (ENABLE_OP_KEY_MODECHANGE != YES && ENABLE_OP_KEY_MODECHANGE != NO)
#if ENABLE_OP_KEY_MODECHANGE == YES
#	define OP_KEY_MODECHANGE_ENABLED 1
#endif // ENABLE_OP_KEY_MODECHANGE == YES
#undef ENABLE_OP_KEY_MODECHANGE
#if !defined ENABLE_OP_KEY_SPACE || (ENABLE_OP_KEY_SPACE != YES && ENABLE_OP_KEY_SPACE != NO)
#	error "You need to decide if OP_KEY_SPACE (Spacebar) should be enabled."
#endif // !defined ENABLE_OP_KEY_SPACE || (ENABLE_OP_KEY_SPACE != YES && ENABLE_OP_KEY_SPACE != NO)
#if !defined ENABLE_OP_KEY_SPACE || (ENABLE_OP_KEY_SPACE != YES && ENABLE_OP_KEY_SPACE != NO)
#	error "You need to decide if OP_KEY_SPACE (Spacebar) should be enabled."
#endif // !defined ENABLE_OP_KEY_SPACE || (ENABLE_OP_KEY_SPACE != YES && ENABLE_OP_KEY_SPACE != NO)
#if ENABLE_OP_KEY_SPACE == YES
#	define OP_KEY_SPACE_ENABLED 1
#endif // ENABLE_OP_KEY_SPACE == YES
#undef ENABLE_OP_KEY_SPACE
#if !defined ENABLE_OP_KEY_PAGEUP || (ENABLE_OP_KEY_PAGEUP != YES && ENABLE_OP_KEY_PAGEUP != NO)
#	error "You need to decide if OP_KEY_PAGEUP (PageUp) should be enabled."
#endif // !defined ENABLE_OP_KEY_PAGEUP || (ENABLE_OP_KEY_PAGEUP != YES && ENABLE_OP_KEY_PAGEUP != NO)
#if !defined ENABLE_OP_KEY_PAGEUP || (ENABLE_OP_KEY_PAGEUP != YES && ENABLE_OP_KEY_PAGEUP != NO)
#	error "You need to decide if OP_KEY_PAGEUP (PageUp) should be enabled."
#endif // !defined ENABLE_OP_KEY_PAGEUP || (ENABLE_OP_KEY_PAGEUP != YES && ENABLE_OP_KEY_PAGEUP != NO)
#if ENABLE_OP_KEY_PAGEUP == YES
#	define OP_KEY_PAGEUP_ENABLED 1
#endif // ENABLE_OP_KEY_PAGEUP == YES
#undef ENABLE_OP_KEY_PAGEUP
#if !defined ENABLE_OP_KEY_PAGEDOWN || (ENABLE_OP_KEY_PAGEDOWN != YES && ENABLE_OP_KEY_PAGEDOWN != NO)
#	error "You need to decide if OP_KEY_PAGEDOWN (PageDown) should be enabled."
#endif // !defined ENABLE_OP_KEY_PAGEDOWN || (ENABLE_OP_KEY_PAGEDOWN != YES && ENABLE_OP_KEY_PAGEDOWN != NO)
#if !defined ENABLE_OP_KEY_PAGEDOWN || (ENABLE_OP_KEY_PAGEDOWN != YES && ENABLE_OP_KEY_PAGEDOWN != NO)
#	error "You need to decide if OP_KEY_PAGEDOWN (PageDown) should be enabled."
#endif // !defined ENABLE_OP_KEY_PAGEDOWN || (ENABLE_OP_KEY_PAGEDOWN != YES && ENABLE_OP_KEY_PAGEDOWN != NO)
#if ENABLE_OP_KEY_PAGEDOWN == YES
#	define OP_KEY_PAGEDOWN_ENABLED 1
#endif // ENABLE_OP_KEY_PAGEDOWN == YES
#undef ENABLE_OP_KEY_PAGEDOWN
#if !defined ENABLE_OP_KEY_END || (ENABLE_OP_KEY_END != YES && ENABLE_OP_KEY_END != NO)
#	error "You need to decide if OP_KEY_END (End) should be enabled."
#endif // !defined ENABLE_OP_KEY_END || (ENABLE_OP_KEY_END != YES && ENABLE_OP_KEY_END != NO)
#if !defined ENABLE_OP_KEY_END || (ENABLE_OP_KEY_END != YES && ENABLE_OP_KEY_END != NO)
#	error "You need to decide if OP_KEY_END (End) should be enabled."
#endif // !defined ENABLE_OP_KEY_END || (ENABLE_OP_KEY_END != YES && ENABLE_OP_KEY_END != NO)
#if ENABLE_OP_KEY_END == YES
#	define OP_KEY_END_ENABLED 1
#endif // ENABLE_OP_KEY_END == YES
#undef ENABLE_OP_KEY_END
#if !defined ENABLE_OP_KEY_HOME || (ENABLE_OP_KEY_HOME != YES && ENABLE_OP_KEY_HOME != NO)
#	error "You need to decide if OP_KEY_HOME (Home) should be enabled."
#endif // !defined ENABLE_OP_KEY_HOME || (ENABLE_OP_KEY_HOME != YES && ENABLE_OP_KEY_HOME != NO)
#if !defined ENABLE_OP_KEY_HOME || (ENABLE_OP_KEY_HOME != YES && ENABLE_OP_KEY_HOME != NO)
#	error "You need to decide if OP_KEY_HOME (Home) should be enabled."
#endif // !defined ENABLE_OP_KEY_HOME || (ENABLE_OP_KEY_HOME != YES && ENABLE_OP_KEY_HOME != NO)
#if ENABLE_OP_KEY_HOME == YES
#	define OP_KEY_HOME_ENABLED 1
#endif // ENABLE_OP_KEY_HOME == YES
#undef ENABLE_OP_KEY_HOME
#if !defined ENABLE_OP_KEY_LEFT || (ENABLE_OP_KEY_LEFT != YES && ENABLE_OP_KEY_LEFT != NO)
#	error "You need to decide if OP_KEY_LEFT (Left) should be enabled."
#endif // !defined ENABLE_OP_KEY_LEFT || (ENABLE_OP_KEY_LEFT != YES && ENABLE_OP_KEY_LEFT != NO)
#if !defined ENABLE_OP_KEY_LEFT || (ENABLE_OP_KEY_LEFT != YES && ENABLE_OP_KEY_LEFT != NO)
#	error "You need to decide if OP_KEY_LEFT (Left) should be enabled."
#endif // !defined ENABLE_OP_KEY_LEFT || (ENABLE_OP_KEY_LEFT != YES && ENABLE_OP_KEY_LEFT != NO)
#if ENABLE_OP_KEY_LEFT == YES
#	define OP_KEY_LEFT_ENABLED 1
#endif // ENABLE_OP_KEY_LEFT == YES
#undef ENABLE_OP_KEY_LEFT
#if !defined ENABLE_OP_KEY_UP || (ENABLE_OP_KEY_UP != YES && ENABLE_OP_KEY_UP != NO)
#	error "You need to decide if OP_KEY_UP (Up) should be enabled."
#endif // !defined ENABLE_OP_KEY_UP || (ENABLE_OP_KEY_UP != YES && ENABLE_OP_KEY_UP != NO)
#if !defined ENABLE_OP_KEY_UP || (ENABLE_OP_KEY_UP != YES && ENABLE_OP_KEY_UP != NO)
#	error "You need to decide if OP_KEY_UP (Up) should be enabled."
#endif // !defined ENABLE_OP_KEY_UP || (ENABLE_OP_KEY_UP != YES && ENABLE_OP_KEY_UP != NO)
#if ENABLE_OP_KEY_UP == YES
#	define OP_KEY_UP_ENABLED 1
#endif // ENABLE_OP_KEY_UP == YES
#undef ENABLE_OP_KEY_UP
#if !defined ENABLE_OP_KEY_RIGHT || (ENABLE_OP_KEY_RIGHT != YES && ENABLE_OP_KEY_RIGHT != NO)
#	error "You need to decide if OP_KEY_RIGHT (Right) should be enabled."
#endif // !defined ENABLE_OP_KEY_RIGHT || (ENABLE_OP_KEY_RIGHT != YES && ENABLE_OP_KEY_RIGHT != NO)
#if !defined ENABLE_OP_KEY_RIGHT || (ENABLE_OP_KEY_RIGHT != YES && ENABLE_OP_KEY_RIGHT != NO)
#	error "You need to decide if OP_KEY_RIGHT (Right) should be enabled."
#endif // !defined ENABLE_OP_KEY_RIGHT || (ENABLE_OP_KEY_RIGHT != YES && ENABLE_OP_KEY_RIGHT != NO)
#if ENABLE_OP_KEY_RIGHT == YES
#	define OP_KEY_RIGHT_ENABLED 1
#endif // ENABLE_OP_KEY_RIGHT == YES
#undef ENABLE_OP_KEY_RIGHT
#if !defined ENABLE_OP_KEY_DOWN || (ENABLE_OP_KEY_DOWN != YES && ENABLE_OP_KEY_DOWN != NO)
#	error "You need to decide if OP_KEY_DOWN (Down) should be enabled."
#endif // !defined ENABLE_OP_KEY_DOWN || (ENABLE_OP_KEY_DOWN != YES && ENABLE_OP_KEY_DOWN != NO)
#if !defined ENABLE_OP_KEY_DOWN || (ENABLE_OP_KEY_DOWN != YES && ENABLE_OP_KEY_DOWN != NO)
#	error "You need to decide if OP_KEY_DOWN (Down) should be enabled."
#endif // !defined ENABLE_OP_KEY_DOWN || (ENABLE_OP_KEY_DOWN != YES && ENABLE_OP_KEY_DOWN != NO)
#if ENABLE_OP_KEY_DOWN == YES
#	define OP_KEY_DOWN_ENABLED 1
#endif // ENABLE_OP_KEY_DOWN == YES
#undef ENABLE_OP_KEY_DOWN
#if !defined ENABLE_OP_KEY_SELECT || (ENABLE_OP_KEY_SELECT != YES && ENABLE_OP_KEY_SELECT != NO)
#	error "You need to decide if OP_KEY_SELECT (Select) should be enabled."
#endif // !defined ENABLE_OP_KEY_SELECT || (ENABLE_OP_KEY_SELECT != YES && ENABLE_OP_KEY_SELECT != NO)
#if !defined ENABLE_OP_KEY_SELECT || (ENABLE_OP_KEY_SELECT != YES && ENABLE_OP_KEY_SELECT != NO)
#	error "You need to decide if OP_KEY_SELECT (Select) should be enabled."
#endif // !defined ENABLE_OP_KEY_SELECT || (ENABLE_OP_KEY_SELECT != YES && ENABLE_OP_KEY_SELECT != NO)
#if ENABLE_OP_KEY_SELECT == YES
#	define OP_KEY_SELECT_ENABLED 1
#endif // ENABLE_OP_KEY_SELECT == YES
#undef ENABLE_OP_KEY_SELECT
#if !defined ENABLE_OP_KEY_PRINT || (ENABLE_OP_KEY_PRINT != YES && ENABLE_OP_KEY_PRINT != NO)
#	error "You need to decide if OP_KEY_PRINT (Print) should be enabled."
#endif // !defined ENABLE_OP_KEY_PRINT || (ENABLE_OP_KEY_PRINT != YES && ENABLE_OP_KEY_PRINT != NO)
#if !defined ENABLE_OP_KEY_PRINT || (ENABLE_OP_KEY_PRINT != YES && ENABLE_OP_KEY_PRINT != NO)
#	error "You need to decide if OP_KEY_PRINT (Print) should be enabled."
#endif // !defined ENABLE_OP_KEY_PRINT || (ENABLE_OP_KEY_PRINT != YES && ENABLE_OP_KEY_PRINT != NO)
#if ENABLE_OP_KEY_PRINT == YES
#	define OP_KEY_PRINT_ENABLED 1
#endif // ENABLE_OP_KEY_PRINT == YES
#undef ENABLE_OP_KEY_PRINT
#if !defined ENABLE_OP_KEY_EXECUTE || (ENABLE_OP_KEY_EXECUTE != YES && ENABLE_OP_KEY_EXECUTE != NO)
#	error "You need to decide if OP_KEY_EXECUTE (Execute) should be enabled."
#endif // !defined ENABLE_OP_KEY_EXECUTE || (ENABLE_OP_KEY_EXECUTE != YES && ENABLE_OP_KEY_EXECUTE != NO)
#if !defined ENABLE_OP_KEY_EXECUTE || (ENABLE_OP_KEY_EXECUTE != YES && ENABLE_OP_KEY_EXECUTE != NO)
#	error "You need to decide if OP_KEY_EXECUTE (Execute) should be enabled."
#endif // !defined ENABLE_OP_KEY_EXECUTE || (ENABLE_OP_KEY_EXECUTE != YES && ENABLE_OP_KEY_EXECUTE != NO)
#if ENABLE_OP_KEY_EXECUTE == YES
#	define OP_KEY_EXECUTE_ENABLED 1
#endif // ENABLE_OP_KEY_EXECUTE == YES
#undef ENABLE_OP_KEY_EXECUTE
#if !defined ENABLE_OP_KEY_PRINTSCREEN || (ENABLE_OP_KEY_PRINTSCREEN != YES && ENABLE_OP_KEY_PRINTSCREEN != NO)
#	error "You need to decide if OP_KEY_PRINTSCREEN (PrintScreen) should be enabled."
#endif // !defined ENABLE_OP_KEY_PRINTSCREEN || (ENABLE_OP_KEY_PRINTSCREEN != YES && ENABLE_OP_KEY_PRINTSCREEN != NO)
#if !defined ENABLE_OP_KEY_PRINTSCREEN || (ENABLE_OP_KEY_PRINTSCREEN != YES && ENABLE_OP_KEY_PRINTSCREEN != NO)
#	error "You need to decide if OP_KEY_PRINTSCREEN (PrintScreen) should be enabled."
#endif // !defined ENABLE_OP_KEY_PRINTSCREEN || (ENABLE_OP_KEY_PRINTSCREEN != YES && ENABLE_OP_KEY_PRINTSCREEN != NO)
#if ENABLE_OP_KEY_PRINTSCREEN == YES
#	define OP_KEY_PRINTSCREEN_ENABLED 1
#endif // ENABLE_OP_KEY_PRINTSCREEN == YES
#undef ENABLE_OP_KEY_PRINTSCREEN
#if !defined ENABLE_OP_KEY_INSERT || (ENABLE_OP_KEY_INSERT != YES && ENABLE_OP_KEY_INSERT != NO)
#	error "You need to decide if OP_KEY_INSERT (Insert) should be enabled."
#endif // !defined ENABLE_OP_KEY_INSERT || (ENABLE_OP_KEY_INSERT != YES && ENABLE_OP_KEY_INSERT != NO)
#if !defined ENABLE_OP_KEY_INSERT || (ENABLE_OP_KEY_INSERT != YES && ENABLE_OP_KEY_INSERT != NO)
#	error "You need to decide if OP_KEY_INSERT (Insert) should be enabled."
#endif // !defined ENABLE_OP_KEY_INSERT || (ENABLE_OP_KEY_INSERT != YES && ENABLE_OP_KEY_INSERT != NO)
#if ENABLE_OP_KEY_INSERT == YES
#	define OP_KEY_INSERT_ENABLED 1
#endif // ENABLE_OP_KEY_INSERT == YES
#undef ENABLE_OP_KEY_INSERT
#if !defined ENABLE_OP_KEY_DELETE || (ENABLE_OP_KEY_DELETE != YES && ENABLE_OP_KEY_DELETE != NO)
#	error "You need to decide if OP_KEY_DELETE (Delete) should be enabled."
#endif // !defined ENABLE_OP_KEY_DELETE || (ENABLE_OP_KEY_DELETE != YES && ENABLE_OP_KEY_DELETE != NO)
#if !defined ENABLE_OP_KEY_DELETE || (ENABLE_OP_KEY_DELETE != YES && ENABLE_OP_KEY_DELETE != NO)
#	error "You need to decide if OP_KEY_DELETE (Delete) should be enabled."
#endif // !defined ENABLE_OP_KEY_DELETE || (ENABLE_OP_KEY_DELETE != YES && ENABLE_OP_KEY_DELETE != NO)
#if ENABLE_OP_KEY_DELETE == YES
#	define OP_KEY_DELETE_ENABLED 1
#endif // ENABLE_OP_KEY_DELETE == YES
#undef ENABLE_OP_KEY_DELETE
#if !defined ENABLE_OP_KEY_HELP || (ENABLE_OP_KEY_HELP != YES && ENABLE_OP_KEY_HELP != NO)
#	error "You need to decide if OP_KEY_HELP (Help) should be enabled."
#endif // !defined ENABLE_OP_KEY_HELP || (ENABLE_OP_KEY_HELP != YES && ENABLE_OP_KEY_HELP != NO)
#if !defined ENABLE_OP_KEY_HELP || (ENABLE_OP_KEY_HELP != YES && ENABLE_OP_KEY_HELP != NO)
#	error "You need to decide if OP_KEY_HELP (Help) should be enabled."
#endif // !defined ENABLE_OP_KEY_HELP || (ENABLE_OP_KEY_HELP != YES && ENABLE_OP_KEY_HELP != NO)
#if ENABLE_OP_KEY_HELP == YES
#	define OP_KEY_HELP_ENABLED 1
#endif // ENABLE_OP_KEY_HELP == YES
#undef ENABLE_OP_KEY_HELP
#if defined ENABLE_OP_KEY_0 && ENABLE_OP_KEY_0 != YES
#	error "You cannot disable the always-enabled OP_KEY_0 (0)."
#	else
#undef ENABLE_OP_KEY_0
#	define ENABLE_OP_KEY_0 YES
#endif // !defined ENABLE_OP_KEY_0 && ENABLE_OP_KEY_0 != YES
#if defined ENABLE_OP_KEY_0 && ENABLE_OP_KEY_0 != YES
#	error "You cannot disable the always-enabled OP_KEY_0 (0)."
#	else
#undef ENABLE_OP_KEY_0
#	define ENABLE_OP_KEY_0 YES
#endif // !defined ENABLE_OP_KEY_0 && ENABLE_OP_KEY_0 != YES
#if ENABLE_OP_KEY_0 == YES
#	define OP_KEY_0_ENABLED 1
#endif // ENABLE_OP_KEY_0 == YES
#undef ENABLE_OP_KEY_0
#if defined ENABLE_OP_KEY_1 && ENABLE_OP_KEY_1 != YES
#	error "You cannot disable the always-enabled OP_KEY_1 (1)."
#	else
#undef ENABLE_OP_KEY_1
#	define ENABLE_OP_KEY_1 YES
#endif // !defined ENABLE_OP_KEY_1 && ENABLE_OP_KEY_1 != YES
#if defined ENABLE_OP_KEY_1 && ENABLE_OP_KEY_1 != YES
#	error "You cannot disable the always-enabled OP_KEY_1 (1)."
#	else
#undef ENABLE_OP_KEY_1
#	define ENABLE_OP_KEY_1 YES
#endif // !defined ENABLE_OP_KEY_1 && ENABLE_OP_KEY_1 != YES
#if ENABLE_OP_KEY_1 == YES
#	define OP_KEY_1_ENABLED 1
#endif // ENABLE_OP_KEY_1 == YES
#undef ENABLE_OP_KEY_1
#if defined ENABLE_OP_KEY_2 && ENABLE_OP_KEY_2 != YES
#	error "You cannot disable the always-enabled OP_KEY_2 (2)."
#	else
#undef ENABLE_OP_KEY_2
#	define ENABLE_OP_KEY_2 YES
#endif // !defined ENABLE_OP_KEY_2 && ENABLE_OP_KEY_2 != YES
#if defined ENABLE_OP_KEY_2 && ENABLE_OP_KEY_2 != YES
#	error "You cannot disable the always-enabled OP_KEY_2 (2)."
#	else
#undef ENABLE_OP_KEY_2
#	define ENABLE_OP_KEY_2 YES
#endif // !defined ENABLE_OP_KEY_2 && ENABLE_OP_KEY_2 != YES
#if ENABLE_OP_KEY_2 == YES
#	define OP_KEY_2_ENABLED 1
#endif // ENABLE_OP_KEY_2 == YES
#undef ENABLE_OP_KEY_2
#if defined ENABLE_OP_KEY_3 && ENABLE_OP_KEY_3 != YES
#	error "You cannot disable the always-enabled OP_KEY_3 (3)."
#	else
#undef ENABLE_OP_KEY_3
#	define ENABLE_OP_KEY_3 YES
#endif // !defined ENABLE_OP_KEY_3 && ENABLE_OP_KEY_3 != YES
#if defined ENABLE_OP_KEY_3 && ENABLE_OP_KEY_3 != YES
#	error "You cannot disable the always-enabled OP_KEY_3 (3)."
#	else
#undef ENABLE_OP_KEY_3
#	define ENABLE_OP_KEY_3 YES
#endif // !defined ENABLE_OP_KEY_3 && ENABLE_OP_KEY_3 != YES
#if ENABLE_OP_KEY_3 == YES
#	define OP_KEY_3_ENABLED 1
#endif // ENABLE_OP_KEY_3 == YES
#undef ENABLE_OP_KEY_3
#if defined ENABLE_OP_KEY_4 && ENABLE_OP_KEY_4 != YES
#	error "You cannot disable the always-enabled OP_KEY_4 (4)."
#	else
#undef ENABLE_OP_KEY_4
#	define ENABLE_OP_KEY_4 YES
#endif // !defined ENABLE_OP_KEY_4 && ENABLE_OP_KEY_4 != YES
#if defined ENABLE_OP_KEY_4 && ENABLE_OP_KEY_4 != YES
#	error "You cannot disable the always-enabled OP_KEY_4 (4)."
#	else
#undef ENABLE_OP_KEY_4
#	define ENABLE_OP_KEY_4 YES
#endif // !defined ENABLE_OP_KEY_4 && ENABLE_OP_KEY_4 != YES
#if ENABLE_OP_KEY_4 == YES
#	define OP_KEY_4_ENABLED 1
#endif // ENABLE_OP_KEY_4 == YES
#undef ENABLE_OP_KEY_4
#if defined ENABLE_OP_KEY_5 && ENABLE_OP_KEY_5 != YES
#	error "You cannot disable the always-enabled OP_KEY_5 (5)."
#	else
#undef ENABLE_OP_KEY_5
#	define ENABLE_OP_KEY_5 YES
#endif // !defined ENABLE_OP_KEY_5 && ENABLE_OP_KEY_5 != YES
#if defined ENABLE_OP_KEY_5 && ENABLE_OP_KEY_5 != YES
#	error "You cannot disable the always-enabled OP_KEY_5 (5)."
#	else
#undef ENABLE_OP_KEY_5
#	define ENABLE_OP_KEY_5 YES
#endif // !defined ENABLE_OP_KEY_5 && ENABLE_OP_KEY_5 != YES
#if ENABLE_OP_KEY_5 == YES
#	define OP_KEY_5_ENABLED 1
#endif // ENABLE_OP_KEY_5 == YES
#undef ENABLE_OP_KEY_5
#if defined ENABLE_OP_KEY_6 && ENABLE_OP_KEY_6 != YES
#	error "You cannot disable the always-enabled OP_KEY_6 (6)."
#	else
#undef ENABLE_OP_KEY_6
#	define ENABLE_OP_KEY_6 YES
#endif // !defined ENABLE_OP_KEY_6 && ENABLE_OP_KEY_6 != YES
#if defined ENABLE_OP_KEY_6 && ENABLE_OP_KEY_6 != YES
#	error "You cannot disable the always-enabled OP_KEY_6 (6)."
#	else
#undef ENABLE_OP_KEY_6
#	define ENABLE_OP_KEY_6 YES
#endif // !defined ENABLE_OP_KEY_6 && ENABLE_OP_KEY_6 != YES
#if ENABLE_OP_KEY_6 == YES
#	define OP_KEY_6_ENABLED 1
#endif // ENABLE_OP_KEY_6 == YES
#undef ENABLE_OP_KEY_6
#if defined ENABLE_OP_KEY_7 && ENABLE_OP_KEY_7 != YES
#	error "You cannot disable the always-enabled OP_KEY_7 (7)."
#	else
#undef ENABLE_OP_KEY_7
#	define ENABLE_OP_KEY_7 YES
#endif // !defined ENABLE_OP_KEY_7 && ENABLE_OP_KEY_7 != YES
#if defined ENABLE_OP_KEY_7 && ENABLE_OP_KEY_7 != YES
#	error "You cannot disable the always-enabled OP_KEY_7 (7)."
#	else
#undef ENABLE_OP_KEY_7
#	define ENABLE_OP_KEY_7 YES
#endif // !defined ENABLE_OP_KEY_7 && ENABLE_OP_KEY_7 != YES
#if ENABLE_OP_KEY_7 == YES
#	define OP_KEY_7_ENABLED 1
#endif // ENABLE_OP_KEY_7 == YES
#undef ENABLE_OP_KEY_7
#if defined ENABLE_OP_KEY_8 && ENABLE_OP_KEY_8 != YES
#	error "You cannot disable the always-enabled OP_KEY_8 (8)."
#	else
#undef ENABLE_OP_KEY_8
#	define ENABLE_OP_KEY_8 YES
#endif // !defined ENABLE_OP_KEY_8 && ENABLE_OP_KEY_8 != YES
#if defined ENABLE_OP_KEY_8 && ENABLE_OP_KEY_8 != YES
#	error "You cannot disable the always-enabled OP_KEY_8 (8)."
#	else
#undef ENABLE_OP_KEY_8
#	define ENABLE_OP_KEY_8 YES
#endif // !defined ENABLE_OP_KEY_8 && ENABLE_OP_KEY_8 != YES
#if ENABLE_OP_KEY_8 == YES
#	define OP_KEY_8_ENABLED 1
#endif // ENABLE_OP_KEY_8 == YES
#undef ENABLE_OP_KEY_8
#if defined ENABLE_OP_KEY_9 && ENABLE_OP_KEY_9 != YES
#	error "You cannot disable the always-enabled OP_KEY_9 (9)."
#	else
#undef ENABLE_OP_KEY_9
#	define ENABLE_OP_KEY_9 YES
#endif // !defined ENABLE_OP_KEY_9 && ENABLE_OP_KEY_9 != YES
#if defined ENABLE_OP_KEY_9 && ENABLE_OP_KEY_9 != YES
#	error "You cannot disable the always-enabled OP_KEY_9 (9)."
#	else
#undef ENABLE_OP_KEY_9
#	define ENABLE_OP_KEY_9 YES
#endif // !defined ENABLE_OP_KEY_9 && ENABLE_OP_KEY_9 != YES
#if ENABLE_OP_KEY_9 == YES
#	define OP_KEY_9_ENABLED 1
#endif // ENABLE_OP_KEY_9 == YES
#undef ENABLE_OP_KEY_9
#if defined ENABLE_OP_KEY_A && ENABLE_OP_KEY_A != YES
#	error "You cannot disable the always-enabled OP_KEY_A (A)."
#	else
#undef ENABLE_OP_KEY_A
#	define ENABLE_OP_KEY_A YES
#endif // !defined ENABLE_OP_KEY_A && ENABLE_OP_KEY_A != YES
#if defined ENABLE_OP_KEY_A && ENABLE_OP_KEY_A != YES
#	error "You cannot disable the always-enabled OP_KEY_A (A)."
#	else
#undef ENABLE_OP_KEY_A
#	define ENABLE_OP_KEY_A YES
#endif // !defined ENABLE_OP_KEY_A && ENABLE_OP_KEY_A != YES
#if ENABLE_OP_KEY_A == YES
#	define OP_KEY_A_ENABLED 1
#endif // ENABLE_OP_KEY_A == YES
#undef ENABLE_OP_KEY_A
#if defined ENABLE_OP_KEY_B && ENABLE_OP_KEY_B != YES
#	error "You cannot disable the always-enabled OP_KEY_B (B)."
#	else
#undef ENABLE_OP_KEY_B
#	define ENABLE_OP_KEY_B YES
#endif // !defined ENABLE_OP_KEY_B && ENABLE_OP_KEY_B != YES
#if defined ENABLE_OP_KEY_B && ENABLE_OP_KEY_B != YES
#	error "You cannot disable the always-enabled OP_KEY_B (B)."
#	else
#undef ENABLE_OP_KEY_B
#	define ENABLE_OP_KEY_B YES
#endif // !defined ENABLE_OP_KEY_B && ENABLE_OP_KEY_B != YES
#if ENABLE_OP_KEY_B == YES
#	define OP_KEY_B_ENABLED 1
#endif // ENABLE_OP_KEY_B == YES
#undef ENABLE_OP_KEY_B
#if defined ENABLE_OP_KEY_C && ENABLE_OP_KEY_C != YES
#	error "You cannot disable the always-enabled OP_KEY_C (C)."
#	else
#undef ENABLE_OP_KEY_C
#	define ENABLE_OP_KEY_C YES
#endif // !defined ENABLE_OP_KEY_C && ENABLE_OP_KEY_C != YES
#if defined ENABLE_OP_KEY_C && ENABLE_OP_KEY_C != YES
#	error "You cannot disable the always-enabled OP_KEY_C (C)."
#	else
#undef ENABLE_OP_KEY_C
#	define ENABLE_OP_KEY_C YES
#endif // !defined ENABLE_OP_KEY_C && ENABLE_OP_KEY_C != YES
#if ENABLE_OP_KEY_C == YES
#	define OP_KEY_C_ENABLED 1
#endif // ENABLE_OP_KEY_C == YES
#undef ENABLE_OP_KEY_C
#if defined ENABLE_OP_KEY_D && ENABLE_OP_KEY_D != YES
#	error "You cannot disable the always-enabled OP_KEY_D (D)."
#	else
#undef ENABLE_OP_KEY_D
#	define ENABLE_OP_KEY_D YES
#endif // !defined ENABLE_OP_KEY_D && ENABLE_OP_KEY_D != YES
#if defined ENABLE_OP_KEY_D && ENABLE_OP_KEY_D != YES
#	error "You cannot disable the always-enabled OP_KEY_D (D)."
#	else
#undef ENABLE_OP_KEY_D
#	define ENABLE_OP_KEY_D YES
#endif // !defined ENABLE_OP_KEY_D && ENABLE_OP_KEY_D != YES
#if ENABLE_OP_KEY_D == YES
#	define OP_KEY_D_ENABLED 1
#endif // ENABLE_OP_KEY_D == YES
#undef ENABLE_OP_KEY_D
#if defined ENABLE_OP_KEY_E && ENABLE_OP_KEY_E != YES
#	error "You cannot disable the always-enabled OP_KEY_E (E)."
#	else
#undef ENABLE_OP_KEY_E
#	define ENABLE_OP_KEY_E YES
#endif // !defined ENABLE_OP_KEY_E && ENABLE_OP_KEY_E != YES
#if defined ENABLE_OP_KEY_E && ENABLE_OP_KEY_E != YES
#	error "You cannot disable the always-enabled OP_KEY_E (E)."
#	else
#undef ENABLE_OP_KEY_E
#	define ENABLE_OP_KEY_E YES
#endif // !defined ENABLE_OP_KEY_E && ENABLE_OP_KEY_E != YES
#if ENABLE_OP_KEY_E == YES
#	define OP_KEY_E_ENABLED 1
#endif // ENABLE_OP_KEY_E == YES
#undef ENABLE_OP_KEY_E
#if defined ENABLE_OP_KEY_F && ENABLE_OP_KEY_F != YES
#	error "You cannot disable the always-enabled OP_KEY_F (F)."
#	else
#undef ENABLE_OP_KEY_F
#	define ENABLE_OP_KEY_F YES
#endif // !defined ENABLE_OP_KEY_F && ENABLE_OP_KEY_F != YES
#if defined ENABLE_OP_KEY_F && ENABLE_OP_KEY_F != YES
#	error "You cannot disable the always-enabled OP_KEY_F (F)."
#	else
#undef ENABLE_OP_KEY_F
#	define ENABLE_OP_KEY_F YES
#endif // !defined ENABLE_OP_KEY_F && ENABLE_OP_KEY_F != YES
#if ENABLE_OP_KEY_F == YES
#	define OP_KEY_F_ENABLED 1
#endif // ENABLE_OP_KEY_F == YES
#undef ENABLE_OP_KEY_F
#if defined ENABLE_OP_KEY_G && ENABLE_OP_KEY_G != YES
#	error "You cannot disable the always-enabled OP_KEY_G (G)."
#	else
#undef ENABLE_OP_KEY_G
#	define ENABLE_OP_KEY_G YES
#endif // !defined ENABLE_OP_KEY_G && ENABLE_OP_KEY_G != YES
#if defined ENABLE_OP_KEY_G && ENABLE_OP_KEY_G != YES
#	error "You cannot disable the always-enabled OP_KEY_G (G)."
#	else
#undef ENABLE_OP_KEY_G
#	define ENABLE_OP_KEY_G YES
#endif // !defined ENABLE_OP_KEY_G && ENABLE_OP_KEY_G != YES
#if ENABLE_OP_KEY_G == YES
#	define OP_KEY_G_ENABLED 1
#endif // ENABLE_OP_KEY_G == YES
#undef ENABLE_OP_KEY_G
#if defined ENABLE_OP_KEY_H && ENABLE_OP_KEY_H != YES
#	error "You cannot disable the always-enabled OP_KEY_H (H)."
#	else
#undef ENABLE_OP_KEY_H
#	define ENABLE_OP_KEY_H YES
#endif // !defined ENABLE_OP_KEY_H && ENABLE_OP_KEY_H != YES
#if defined ENABLE_OP_KEY_H && ENABLE_OP_KEY_H != YES
#	error "You cannot disable the always-enabled OP_KEY_H (H)."
#	else
#undef ENABLE_OP_KEY_H
#	define ENABLE_OP_KEY_H YES
#endif // !defined ENABLE_OP_KEY_H && ENABLE_OP_KEY_H != YES
#if ENABLE_OP_KEY_H == YES
#	define OP_KEY_H_ENABLED 1
#endif // ENABLE_OP_KEY_H == YES
#undef ENABLE_OP_KEY_H
#if defined ENABLE_OP_KEY_I && ENABLE_OP_KEY_I != YES
#	error "You cannot disable the always-enabled OP_KEY_I (I)."
#	else
#undef ENABLE_OP_KEY_I
#	define ENABLE_OP_KEY_I YES
#endif // !defined ENABLE_OP_KEY_I && ENABLE_OP_KEY_I != YES
#if defined ENABLE_OP_KEY_I && ENABLE_OP_KEY_I != YES
#	error "You cannot disable the always-enabled OP_KEY_I (I)."
#	else
#undef ENABLE_OP_KEY_I
#	define ENABLE_OP_KEY_I YES
#endif // !defined ENABLE_OP_KEY_I && ENABLE_OP_KEY_I != YES
#if ENABLE_OP_KEY_I == YES
#	define OP_KEY_I_ENABLED 1
#endif // ENABLE_OP_KEY_I == YES
#undef ENABLE_OP_KEY_I
#if defined ENABLE_OP_KEY_J && ENABLE_OP_KEY_J != YES
#	error "You cannot disable the always-enabled OP_KEY_J (J)."
#	else
#undef ENABLE_OP_KEY_J
#	define ENABLE_OP_KEY_J YES
#endif // !defined ENABLE_OP_KEY_J && ENABLE_OP_KEY_J != YES
#if defined ENABLE_OP_KEY_J && ENABLE_OP_KEY_J != YES
#	error "You cannot disable the always-enabled OP_KEY_J (J)."
#	else
#undef ENABLE_OP_KEY_J
#	define ENABLE_OP_KEY_J YES
#endif // !defined ENABLE_OP_KEY_J && ENABLE_OP_KEY_J != YES
#if ENABLE_OP_KEY_J == YES
#	define OP_KEY_J_ENABLED 1
#endif // ENABLE_OP_KEY_J == YES
#undef ENABLE_OP_KEY_J
#if defined ENABLE_OP_KEY_K && ENABLE_OP_KEY_K != YES
#	error "You cannot disable the always-enabled OP_KEY_K (K)."
#	else
#undef ENABLE_OP_KEY_K
#	define ENABLE_OP_KEY_K YES
#endif // !defined ENABLE_OP_KEY_K && ENABLE_OP_KEY_K != YES
#if defined ENABLE_OP_KEY_K && ENABLE_OP_KEY_K != YES
#	error "You cannot disable the always-enabled OP_KEY_K (K)."
#	else
#undef ENABLE_OP_KEY_K
#	define ENABLE_OP_KEY_K YES
#endif // !defined ENABLE_OP_KEY_K && ENABLE_OP_KEY_K != YES
#if ENABLE_OP_KEY_K == YES
#	define OP_KEY_K_ENABLED 1
#endif // ENABLE_OP_KEY_K == YES
#undef ENABLE_OP_KEY_K
#if defined ENABLE_OP_KEY_L && ENABLE_OP_KEY_L != YES
#	error "You cannot disable the always-enabled OP_KEY_L (L)."
#	else
#undef ENABLE_OP_KEY_L
#	define ENABLE_OP_KEY_L YES
#endif // !defined ENABLE_OP_KEY_L && ENABLE_OP_KEY_L != YES
#if defined ENABLE_OP_KEY_L && ENABLE_OP_KEY_L != YES
#	error "You cannot disable the always-enabled OP_KEY_L (L)."
#	else
#undef ENABLE_OP_KEY_L
#	define ENABLE_OP_KEY_L YES
#endif // !defined ENABLE_OP_KEY_L && ENABLE_OP_KEY_L != YES
#if ENABLE_OP_KEY_L == YES
#	define OP_KEY_L_ENABLED 1
#endif // ENABLE_OP_KEY_L == YES
#undef ENABLE_OP_KEY_L
#if defined ENABLE_OP_KEY_M && ENABLE_OP_KEY_M != YES
#	error "You cannot disable the always-enabled OP_KEY_M (M)."
#	else
#undef ENABLE_OP_KEY_M
#	define ENABLE_OP_KEY_M YES
#endif // !defined ENABLE_OP_KEY_M && ENABLE_OP_KEY_M != YES
#if defined ENABLE_OP_KEY_M && ENABLE_OP_KEY_M != YES
#	error "You cannot disable the always-enabled OP_KEY_M (M)."
#	else
#undef ENABLE_OP_KEY_M
#	define ENABLE_OP_KEY_M YES
#endif // !defined ENABLE_OP_KEY_M && ENABLE_OP_KEY_M != YES
#if ENABLE_OP_KEY_M == YES
#	define OP_KEY_M_ENABLED 1
#endif // ENABLE_OP_KEY_M == YES
#undef ENABLE_OP_KEY_M
#if defined ENABLE_OP_KEY_N && ENABLE_OP_KEY_N != YES
#	error "You cannot disable the always-enabled OP_KEY_N (N)."
#	else
#undef ENABLE_OP_KEY_N
#	define ENABLE_OP_KEY_N YES
#endif // !defined ENABLE_OP_KEY_N && ENABLE_OP_KEY_N != YES
#if defined ENABLE_OP_KEY_N && ENABLE_OP_KEY_N != YES
#	error "You cannot disable the always-enabled OP_KEY_N (N)."
#	else
#undef ENABLE_OP_KEY_N
#	define ENABLE_OP_KEY_N YES
#endif // !defined ENABLE_OP_KEY_N && ENABLE_OP_KEY_N != YES
#if ENABLE_OP_KEY_N == YES
#	define OP_KEY_N_ENABLED 1
#endif // ENABLE_OP_KEY_N == YES
#undef ENABLE_OP_KEY_N
#if defined ENABLE_OP_KEY_O && ENABLE_OP_KEY_O != YES
#	error "You cannot disable the always-enabled OP_KEY_O (O)."
#	else
#undef ENABLE_OP_KEY_O
#	define ENABLE_OP_KEY_O YES
#endif // !defined ENABLE_OP_KEY_O && ENABLE_OP_KEY_O != YES
#if defined ENABLE_OP_KEY_O && ENABLE_OP_KEY_O != YES
#	error "You cannot disable the always-enabled OP_KEY_O (O)."
#	else
#undef ENABLE_OP_KEY_O
#	define ENABLE_OP_KEY_O YES
#endif // !defined ENABLE_OP_KEY_O && ENABLE_OP_KEY_O != YES
#if ENABLE_OP_KEY_O == YES
#	define OP_KEY_O_ENABLED 1
#endif // ENABLE_OP_KEY_O == YES
#undef ENABLE_OP_KEY_O
#if defined ENABLE_OP_KEY_P && ENABLE_OP_KEY_P != YES
#	error "You cannot disable the always-enabled OP_KEY_P (P)."
#	else
#undef ENABLE_OP_KEY_P
#	define ENABLE_OP_KEY_P YES
#endif // !defined ENABLE_OP_KEY_P && ENABLE_OP_KEY_P != YES
#if defined ENABLE_OP_KEY_P && ENABLE_OP_KEY_P != YES
#	error "You cannot disable the always-enabled OP_KEY_P (P)."
#	else
#undef ENABLE_OP_KEY_P
#	define ENABLE_OP_KEY_P YES
#endif // !defined ENABLE_OP_KEY_P && ENABLE_OP_KEY_P != YES
#if ENABLE_OP_KEY_P == YES
#	define OP_KEY_P_ENABLED 1
#endif // ENABLE_OP_KEY_P == YES
#undef ENABLE_OP_KEY_P
#if defined ENABLE_OP_KEY_Q && ENABLE_OP_KEY_Q != YES
#	error "You cannot disable the always-enabled OP_KEY_Q (Q)."
#	else
#undef ENABLE_OP_KEY_Q
#	define ENABLE_OP_KEY_Q YES
#endif // !defined ENABLE_OP_KEY_Q && ENABLE_OP_KEY_Q != YES
#if defined ENABLE_OP_KEY_Q && ENABLE_OP_KEY_Q != YES
#	error "You cannot disable the always-enabled OP_KEY_Q (Q)."
#	else
#undef ENABLE_OP_KEY_Q
#	define ENABLE_OP_KEY_Q YES
#endif // !defined ENABLE_OP_KEY_Q && ENABLE_OP_KEY_Q != YES
#if ENABLE_OP_KEY_Q == YES
#	define OP_KEY_Q_ENABLED 1
#endif // ENABLE_OP_KEY_Q == YES
#undef ENABLE_OP_KEY_Q
#if defined ENABLE_OP_KEY_R && ENABLE_OP_KEY_R != YES
#	error "You cannot disable the always-enabled OP_KEY_R (R)."
#	else
#undef ENABLE_OP_KEY_R
#	define ENABLE_OP_KEY_R YES
#endif // !defined ENABLE_OP_KEY_R && ENABLE_OP_KEY_R != YES
#if defined ENABLE_OP_KEY_R && ENABLE_OP_KEY_R != YES
#	error "You cannot disable the always-enabled OP_KEY_R (R)."
#	else
#undef ENABLE_OP_KEY_R
#	define ENABLE_OP_KEY_R YES
#endif // !defined ENABLE_OP_KEY_R && ENABLE_OP_KEY_R != YES
#if ENABLE_OP_KEY_R == YES
#	define OP_KEY_R_ENABLED 1
#endif // ENABLE_OP_KEY_R == YES
#undef ENABLE_OP_KEY_R
#if defined ENABLE_OP_KEY_S && ENABLE_OP_KEY_S != YES
#	error "You cannot disable the always-enabled OP_KEY_S (S)."
#	else
#undef ENABLE_OP_KEY_S
#	define ENABLE_OP_KEY_S YES
#endif // !defined ENABLE_OP_KEY_S && ENABLE_OP_KEY_S != YES
#if defined ENABLE_OP_KEY_S && ENABLE_OP_KEY_S != YES
#	error "You cannot disable the always-enabled OP_KEY_S (S)."
#	else
#undef ENABLE_OP_KEY_S
#	define ENABLE_OP_KEY_S YES
#endif // !defined ENABLE_OP_KEY_S && ENABLE_OP_KEY_S != YES
#if ENABLE_OP_KEY_S == YES
#	define OP_KEY_S_ENABLED 1
#endif // ENABLE_OP_KEY_S == YES
#undef ENABLE_OP_KEY_S
#if defined ENABLE_OP_KEY_T && ENABLE_OP_KEY_T != YES
#	error "You cannot disable the always-enabled OP_KEY_T (T)."
#	else
#undef ENABLE_OP_KEY_T
#	define ENABLE_OP_KEY_T YES
#endif // !defined ENABLE_OP_KEY_T && ENABLE_OP_KEY_T != YES
#if defined ENABLE_OP_KEY_T && ENABLE_OP_KEY_T != YES
#	error "You cannot disable the always-enabled OP_KEY_T (T)."
#	else
#undef ENABLE_OP_KEY_T
#	define ENABLE_OP_KEY_T YES
#endif // !defined ENABLE_OP_KEY_T && ENABLE_OP_KEY_T != YES
#if ENABLE_OP_KEY_T == YES
#	define OP_KEY_T_ENABLED 1
#endif // ENABLE_OP_KEY_T == YES
#undef ENABLE_OP_KEY_T
#if defined ENABLE_OP_KEY_U && ENABLE_OP_KEY_U != YES
#	error "You cannot disable the always-enabled OP_KEY_U (U)."
#	else
#undef ENABLE_OP_KEY_U
#	define ENABLE_OP_KEY_U YES
#endif // !defined ENABLE_OP_KEY_U && ENABLE_OP_KEY_U != YES
#if defined ENABLE_OP_KEY_U && ENABLE_OP_KEY_U != YES
#	error "You cannot disable the always-enabled OP_KEY_U (U)."
#	else
#undef ENABLE_OP_KEY_U
#	define ENABLE_OP_KEY_U YES
#endif // !defined ENABLE_OP_KEY_U && ENABLE_OP_KEY_U != YES
#if ENABLE_OP_KEY_U == YES
#	define OP_KEY_U_ENABLED 1
#endif // ENABLE_OP_KEY_U == YES
#undef ENABLE_OP_KEY_U
#if defined ENABLE_OP_KEY_V && ENABLE_OP_KEY_V != YES
#	error "You cannot disable the always-enabled OP_KEY_V (V)."
#	else
#undef ENABLE_OP_KEY_V
#	define ENABLE_OP_KEY_V YES
#endif // !defined ENABLE_OP_KEY_V && ENABLE_OP_KEY_V != YES
#if defined ENABLE_OP_KEY_V && ENABLE_OP_KEY_V != YES
#	error "You cannot disable the always-enabled OP_KEY_V (V)."
#	else
#undef ENABLE_OP_KEY_V
#	define ENABLE_OP_KEY_V YES
#endif // !defined ENABLE_OP_KEY_V && ENABLE_OP_KEY_V != YES
#if ENABLE_OP_KEY_V == YES
#	define OP_KEY_V_ENABLED 1
#endif // ENABLE_OP_KEY_V == YES
#undef ENABLE_OP_KEY_V
#if defined ENABLE_OP_KEY_W && ENABLE_OP_KEY_W != YES
#	error "You cannot disable the always-enabled OP_KEY_W (W)."
#	else
#undef ENABLE_OP_KEY_W
#	define ENABLE_OP_KEY_W YES
#endif // !defined ENABLE_OP_KEY_W && ENABLE_OP_KEY_W != YES
#if defined ENABLE_OP_KEY_W && ENABLE_OP_KEY_W != YES
#	error "You cannot disable the always-enabled OP_KEY_W (W)."
#	else
#undef ENABLE_OP_KEY_W
#	define ENABLE_OP_KEY_W YES
#endif // !defined ENABLE_OP_KEY_W && ENABLE_OP_KEY_W != YES
#if ENABLE_OP_KEY_W == YES
#	define OP_KEY_W_ENABLED 1
#endif // ENABLE_OP_KEY_W == YES
#undef ENABLE_OP_KEY_W
#if defined ENABLE_OP_KEY_X && ENABLE_OP_KEY_X != YES
#	error "You cannot disable the always-enabled OP_KEY_X (X)."
#	else
#undef ENABLE_OP_KEY_X
#	define ENABLE_OP_KEY_X YES
#endif // !defined ENABLE_OP_KEY_X && ENABLE_OP_KEY_X != YES
#if defined ENABLE_OP_KEY_X && ENABLE_OP_KEY_X != YES
#	error "You cannot disable the always-enabled OP_KEY_X (X)."
#	else
#undef ENABLE_OP_KEY_X
#	define ENABLE_OP_KEY_X YES
#endif // !defined ENABLE_OP_KEY_X && ENABLE_OP_KEY_X != YES
#if ENABLE_OP_KEY_X == YES
#	define OP_KEY_X_ENABLED 1
#endif // ENABLE_OP_KEY_X == YES
#undef ENABLE_OP_KEY_X
#if defined ENABLE_OP_KEY_Y && ENABLE_OP_KEY_Y != YES
#	error "You cannot disable the always-enabled OP_KEY_Y (Y)."
#	else
#undef ENABLE_OP_KEY_Y
#	define ENABLE_OP_KEY_Y YES
#endif // !defined ENABLE_OP_KEY_Y && ENABLE_OP_KEY_Y != YES
#if defined ENABLE_OP_KEY_Y && ENABLE_OP_KEY_Y != YES
#	error "You cannot disable the always-enabled OP_KEY_Y (Y)."
#	else
#undef ENABLE_OP_KEY_Y
#	define ENABLE_OP_KEY_Y YES
#endif // !defined ENABLE_OP_KEY_Y && ENABLE_OP_KEY_Y != YES
#if ENABLE_OP_KEY_Y == YES
#	define OP_KEY_Y_ENABLED 1
#endif // ENABLE_OP_KEY_Y == YES
#undef ENABLE_OP_KEY_Y
#if defined ENABLE_OP_KEY_Z && ENABLE_OP_KEY_Z != YES
#	error "You cannot disable the always-enabled OP_KEY_Z (Z)."
#	else
#undef ENABLE_OP_KEY_Z
#	define ENABLE_OP_KEY_Z YES
#endif // !defined ENABLE_OP_KEY_Z && ENABLE_OP_KEY_Z != YES
#if defined ENABLE_OP_KEY_Z && ENABLE_OP_KEY_Z != YES
#	error "You cannot disable the always-enabled OP_KEY_Z (Z)."
#	else
#undef ENABLE_OP_KEY_Z
#	define ENABLE_OP_KEY_Z YES
#endif // !defined ENABLE_OP_KEY_Z && ENABLE_OP_KEY_Z != YES
#if ENABLE_OP_KEY_Z == YES
#	define OP_KEY_Z_ENABLED 1
#endif // ENABLE_OP_KEY_Z == YES
#undef ENABLE_OP_KEY_Z
#if !defined ENABLE_OP_KEY_WINDOW || (ENABLE_OP_KEY_WINDOW != YES && ENABLE_OP_KEY_WINDOW != NO)
#	error "You need to decide if OP_KEY_WINDOW (Window) should be enabled."
#endif // !defined ENABLE_OP_KEY_WINDOW || (ENABLE_OP_KEY_WINDOW != YES && ENABLE_OP_KEY_WINDOW != NO)
#if !defined ENABLE_OP_KEY_WINDOW || (ENABLE_OP_KEY_WINDOW != YES && ENABLE_OP_KEY_WINDOW != NO)
#	error "You need to decide if OP_KEY_WINDOW (Window) should be enabled."
#endif // !defined ENABLE_OP_KEY_WINDOW || (ENABLE_OP_KEY_WINDOW != YES && ENABLE_OP_KEY_WINDOW != NO)
#if ENABLE_OP_KEY_WINDOW == YES
#	define OP_KEY_WINDOW_ENABLED 1
#endif // ENABLE_OP_KEY_WINDOW == YES
#undef ENABLE_OP_KEY_WINDOW
#if !defined ENABLE_OP_KEY_MAC_CTRL || (ENABLE_OP_KEY_MAC_CTRL != YES && ENABLE_OP_KEY_MAC_CTRL != NO)
#	error "You need to decide if OP_KEY_MAC_CTRL (MacControl) should be enabled."
#endif // !defined ENABLE_OP_KEY_MAC_CTRL || (ENABLE_OP_KEY_MAC_CTRL != YES && ENABLE_OP_KEY_MAC_CTRL != NO)
#if !defined ENABLE_OP_KEY_MAC_CTRL || (ENABLE_OP_KEY_MAC_CTRL != YES && ENABLE_OP_KEY_MAC_CTRL != NO)
#	error "You need to decide if OP_KEY_MAC_CTRL (MacControl) should be enabled."
#endif // !defined ENABLE_OP_KEY_MAC_CTRL || (ENABLE_OP_KEY_MAC_CTRL != YES && ENABLE_OP_KEY_MAC_CTRL != NO)
#if ENABLE_OP_KEY_MAC_CTRL == YES
#	define OP_KEY_MAC_CTRL_ENABLED 1
#endif // ENABLE_OP_KEY_MAC_CTRL == YES
#undef ENABLE_OP_KEY_MAC_CTRL
#if !defined ENABLE_OP_KEY_CONTEXT_MENU || (ENABLE_OP_KEY_CONTEXT_MENU != YES && ENABLE_OP_KEY_CONTEXT_MENU != NO)
#	error "You need to decide if OP_KEY_CONTEXT_MENU (ContextMenu) should be enabled."
#endif // !defined ENABLE_OP_KEY_CONTEXT_MENU || (ENABLE_OP_KEY_CONTEXT_MENU != YES && ENABLE_OP_KEY_CONTEXT_MENU != NO)
#if !defined ENABLE_OP_KEY_CONTEXT_MENU || (ENABLE_OP_KEY_CONTEXT_MENU != YES && ENABLE_OP_KEY_CONTEXT_MENU != NO)
#	error "You need to decide if OP_KEY_CONTEXT_MENU (ContextMenu) should be enabled."
#endif // !defined ENABLE_OP_KEY_CONTEXT_MENU || (ENABLE_OP_KEY_CONTEXT_MENU != YES && ENABLE_OP_KEY_CONTEXT_MENU != NO)
#if ENABLE_OP_KEY_CONTEXT_MENU == YES
#	define OP_KEY_CONTEXT_MENU_ENABLED 1
#endif // ENABLE_OP_KEY_CONTEXT_MENU == YES
#undef ENABLE_OP_KEY_CONTEXT_MENU
#if !defined ENABLE_OP_KEY_SLEEP || (ENABLE_OP_KEY_SLEEP != YES && ENABLE_OP_KEY_SLEEP != NO)
#	error "You need to decide if OP_KEY_SLEEP (Sleep) should be enabled."
#endif // !defined ENABLE_OP_KEY_SLEEP || (ENABLE_OP_KEY_SLEEP != YES && ENABLE_OP_KEY_SLEEP != NO)
#if !defined ENABLE_OP_KEY_SLEEP || (ENABLE_OP_KEY_SLEEP != YES && ENABLE_OP_KEY_SLEEP != NO)
#	error "You need to decide if OP_KEY_SLEEP (Sleep) should be enabled."
#endif // !defined ENABLE_OP_KEY_SLEEP || (ENABLE_OP_KEY_SLEEP != YES && ENABLE_OP_KEY_SLEEP != NO)
#if ENABLE_OP_KEY_SLEEP == YES
#	define OP_KEY_SLEEP_ENABLED 1
#endif // ENABLE_OP_KEY_SLEEP == YES
#undef ENABLE_OP_KEY_SLEEP
#if !defined ENABLE_OP_KEY_NUMPAD0 || (ENABLE_OP_KEY_NUMPAD0 != YES && ENABLE_OP_KEY_NUMPAD0 != NO)
#	error "You need to decide if OP_KEY_NUMPAD0 (NumPad0) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUMPAD0 || (ENABLE_OP_KEY_NUMPAD0 != YES && ENABLE_OP_KEY_NUMPAD0 != NO)
#if !defined ENABLE_OP_KEY_NUMPAD0 || (ENABLE_OP_KEY_NUMPAD0 != YES && ENABLE_OP_KEY_NUMPAD0 != NO)
#	error "You need to decide if OP_KEY_NUMPAD0 (NumPad0) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUMPAD0 || (ENABLE_OP_KEY_NUMPAD0 != YES && ENABLE_OP_KEY_NUMPAD0 != NO)
#if ENABLE_OP_KEY_NUMPAD0 == YES
#	define OP_KEY_NUMPAD0_ENABLED 1
#endif // ENABLE_OP_KEY_NUMPAD0 == YES
#undef ENABLE_OP_KEY_NUMPAD0
#if !defined ENABLE_OP_KEY_NUMPAD1 || (ENABLE_OP_KEY_NUMPAD1 != YES && ENABLE_OP_KEY_NUMPAD1 != NO)
#	error "You need to decide if OP_KEY_NUMPAD1 (NumPad1) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUMPAD1 || (ENABLE_OP_KEY_NUMPAD1 != YES && ENABLE_OP_KEY_NUMPAD1 != NO)
#if !defined ENABLE_OP_KEY_NUMPAD1 || (ENABLE_OP_KEY_NUMPAD1 != YES && ENABLE_OP_KEY_NUMPAD1 != NO)
#	error "You need to decide if OP_KEY_NUMPAD1 (NumPad1) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUMPAD1 || (ENABLE_OP_KEY_NUMPAD1 != YES && ENABLE_OP_KEY_NUMPAD1 != NO)
#if ENABLE_OP_KEY_NUMPAD1 == YES
#	define OP_KEY_NUMPAD1_ENABLED 1
#endif // ENABLE_OP_KEY_NUMPAD1 == YES
#undef ENABLE_OP_KEY_NUMPAD1
#if !defined ENABLE_OP_KEY_NUMPAD2 || (ENABLE_OP_KEY_NUMPAD2 != YES && ENABLE_OP_KEY_NUMPAD2 != NO)
#	error "You need to decide if OP_KEY_NUMPAD2 (NumPad2) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUMPAD2 || (ENABLE_OP_KEY_NUMPAD2 != YES && ENABLE_OP_KEY_NUMPAD2 != NO)
#if !defined ENABLE_OP_KEY_NUMPAD2 || (ENABLE_OP_KEY_NUMPAD2 != YES && ENABLE_OP_KEY_NUMPAD2 != NO)
#	error "You need to decide if OP_KEY_NUMPAD2 (NumPad2) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUMPAD2 || (ENABLE_OP_KEY_NUMPAD2 != YES && ENABLE_OP_KEY_NUMPAD2 != NO)
#if ENABLE_OP_KEY_NUMPAD2 == YES
#	define OP_KEY_NUMPAD2_ENABLED 1
#endif // ENABLE_OP_KEY_NUMPAD2 == YES
#undef ENABLE_OP_KEY_NUMPAD2
#if !defined ENABLE_OP_KEY_NUMPAD3 || (ENABLE_OP_KEY_NUMPAD3 != YES && ENABLE_OP_KEY_NUMPAD3 != NO)
#	error "You need to decide if OP_KEY_NUMPAD3 (NumPad3) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUMPAD3 || (ENABLE_OP_KEY_NUMPAD3 != YES && ENABLE_OP_KEY_NUMPAD3 != NO)
#if !defined ENABLE_OP_KEY_NUMPAD3 || (ENABLE_OP_KEY_NUMPAD3 != YES && ENABLE_OP_KEY_NUMPAD3 != NO)
#	error "You need to decide if OP_KEY_NUMPAD3 (NumPad3) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUMPAD3 || (ENABLE_OP_KEY_NUMPAD3 != YES && ENABLE_OP_KEY_NUMPAD3 != NO)
#if ENABLE_OP_KEY_NUMPAD3 == YES
#	define OP_KEY_NUMPAD3_ENABLED 1
#endif // ENABLE_OP_KEY_NUMPAD3 == YES
#undef ENABLE_OP_KEY_NUMPAD3
#if !defined ENABLE_OP_KEY_NUMPAD4 || (ENABLE_OP_KEY_NUMPAD4 != YES && ENABLE_OP_KEY_NUMPAD4 != NO)
#	error "You need to decide if OP_KEY_NUMPAD4 (NumPad4) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUMPAD4 || (ENABLE_OP_KEY_NUMPAD4 != YES && ENABLE_OP_KEY_NUMPAD4 != NO)
#if !defined ENABLE_OP_KEY_NUMPAD4 || (ENABLE_OP_KEY_NUMPAD4 != YES && ENABLE_OP_KEY_NUMPAD4 != NO)
#	error "You need to decide if OP_KEY_NUMPAD4 (NumPad4) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUMPAD4 || (ENABLE_OP_KEY_NUMPAD4 != YES && ENABLE_OP_KEY_NUMPAD4 != NO)
#if ENABLE_OP_KEY_NUMPAD4 == YES
#	define OP_KEY_NUMPAD4_ENABLED 1
#endif // ENABLE_OP_KEY_NUMPAD4 == YES
#undef ENABLE_OP_KEY_NUMPAD4
#if !defined ENABLE_OP_KEY_NUMPAD5 || (ENABLE_OP_KEY_NUMPAD5 != YES && ENABLE_OP_KEY_NUMPAD5 != NO)
#	error "You need to decide if OP_KEY_NUMPAD5 (NumPad5) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUMPAD5 || (ENABLE_OP_KEY_NUMPAD5 != YES && ENABLE_OP_KEY_NUMPAD5 != NO)
#if !defined ENABLE_OP_KEY_NUMPAD5 || (ENABLE_OP_KEY_NUMPAD5 != YES && ENABLE_OP_KEY_NUMPAD5 != NO)
#	error "You need to decide if OP_KEY_NUMPAD5 (NumPad5) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUMPAD5 || (ENABLE_OP_KEY_NUMPAD5 != YES && ENABLE_OP_KEY_NUMPAD5 != NO)
#if ENABLE_OP_KEY_NUMPAD5 == YES
#	define OP_KEY_NUMPAD5_ENABLED 1
#endif // ENABLE_OP_KEY_NUMPAD5 == YES
#undef ENABLE_OP_KEY_NUMPAD5
#if !defined ENABLE_OP_KEY_NUMPAD6 || (ENABLE_OP_KEY_NUMPAD6 != YES && ENABLE_OP_KEY_NUMPAD6 != NO)
#	error "You need to decide if OP_KEY_NUMPAD6 (NumPad6) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUMPAD6 || (ENABLE_OP_KEY_NUMPAD6 != YES && ENABLE_OP_KEY_NUMPAD6 != NO)
#if !defined ENABLE_OP_KEY_NUMPAD6 || (ENABLE_OP_KEY_NUMPAD6 != YES && ENABLE_OP_KEY_NUMPAD6 != NO)
#	error "You need to decide if OP_KEY_NUMPAD6 (NumPad6) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUMPAD6 || (ENABLE_OP_KEY_NUMPAD6 != YES && ENABLE_OP_KEY_NUMPAD6 != NO)
#if ENABLE_OP_KEY_NUMPAD6 == YES
#	define OP_KEY_NUMPAD6_ENABLED 1
#endif // ENABLE_OP_KEY_NUMPAD6 == YES
#undef ENABLE_OP_KEY_NUMPAD6
#if !defined ENABLE_OP_KEY_NUMPAD7 || (ENABLE_OP_KEY_NUMPAD7 != YES && ENABLE_OP_KEY_NUMPAD7 != NO)
#	error "You need to decide if OP_KEY_NUMPAD7 (NumPad7) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUMPAD7 || (ENABLE_OP_KEY_NUMPAD7 != YES && ENABLE_OP_KEY_NUMPAD7 != NO)
#if !defined ENABLE_OP_KEY_NUMPAD7 || (ENABLE_OP_KEY_NUMPAD7 != YES && ENABLE_OP_KEY_NUMPAD7 != NO)
#	error "You need to decide if OP_KEY_NUMPAD7 (NumPad7) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUMPAD7 || (ENABLE_OP_KEY_NUMPAD7 != YES && ENABLE_OP_KEY_NUMPAD7 != NO)
#if ENABLE_OP_KEY_NUMPAD7 == YES
#	define OP_KEY_NUMPAD7_ENABLED 1
#endif // ENABLE_OP_KEY_NUMPAD7 == YES
#undef ENABLE_OP_KEY_NUMPAD7
#if !defined ENABLE_OP_KEY_NUMPAD8 || (ENABLE_OP_KEY_NUMPAD8 != YES && ENABLE_OP_KEY_NUMPAD8 != NO)
#	error "You need to decide if OP_KEY_NUMPAD8 (NumPad8) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUMPAD8 || (ENABLE_OP_KEY_NUMPAD8 != YES && ENABLE_OP_KEY_NUMPAD8 != NO)
#if !defined ENABLE_OP_KEY_NUMPAD8 || (ENABLE_OP_KEY_NUMPAD8 != YES && ENABLE_OP_KEY_NUMPAD8 != NO)
#	error "You need to decide if OP_KEY_NUMPAD8 (NumPad8) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUMPAD8 || (ENABLE_OP_KEY_NUMPAD8 != YES && ENABLE_OP_KEY_NUMPAD8 != NO)
#if ENABLE_OP_KEY_NUMPAD8 == YES
#	define OP_KEY_NUMPAD8_ENABLED 1
#endif // ENABLE_OP_KEY_NUMPAD8 == YES
#undef ENABLE_OP_KEY_NUMPAD8
#if !defined ENABLE_OP_KEY_NUMPAD9 || (ENABLE_OP_KEY_NUMPAD9 != YES && ENABLE_OP_KEY_NUMPAD9 != NO)
#	error "You need to decide if OP_KEY_NUMPAD9 (NumPad9) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUMPAD9 || (ENABLE_OP_KEY_NUMPAD9 != YES && ENABLE_OP_KEY_NUMPAD9 != NO)
#if !defined ENABLE_OP_KEY_NUMPAD9 || (ENABLE_OP_KEY_NUMPAD9 != YES && ENABLE_OP_KEY_NUMPAD9 != NO)
#	error "You need to decide if OP_KEY_NUMPAD9 (NumPad9) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUMPAD9 || (ENABLE_OP_KEY_NUMPAD9 != YES && ENABLE_OP_KEY_NUMPAD9 != NO)
#if ENABLE_OP_KEY_NUMPAD9 == YES
#	define OP_KEY_NUMPAD9_ENABLED 1
#endif // ENABLE_OP_KEY_NUMPAD9 == YES
#undef ENABLE_OP_KEY_NUMPAD9
#if !defined ENABLE_OP_KEY_MULTIPLY || (ENABLE_OP_KEY_MULTIPLY != YES && ENABLE_OP_KEY_MULTIPLY != NO)
#	error "You need to decide if OP_KEY_MULTIPLY (Mul) should be enabled."
#endif // !defined ENABLE_OP_KEY_MULTIPLY || (ENABLE_OP_KEY_MULTIPLY != YES && ENABLE_OP_KEY_MULTIPLY != NO)
#if !defined ENABLE_OP_KEY_MULTIPLY || (ENABLE_OP_KEY_MULTIPLY != YES && ENABLE_OP_KEY_MULTIPLY != NO)
#	error "You need to decide if OP_KEY_MULTIPLY (Mul) should be enabled."
#endif // !defined ENABLE_OP_KEY_MULTIPLY || (ENABLE_OP_KEY_MULTIPLY != YES && ENABLE_OP_KEY_MULTIPLY != NO)
#if ENABLE_OP_KEY_MULTIPLY == YES
#	define OP_KEY_MULTIPLY_ENABLED 1
#endif // ENABLE_OP_KEY_MULTIPLY == YES
#undef ENABLE_OP_KEY_MULTIPLY
#if !defined ENABLE_OP_KEY_ADD || (ENABLE_OP_KEY_ADD != YES && ENABLE_OP_KEY_ADD != NO)
#	error "You need to decide if OP_KEY_ADD (Add) should be enabled."
#endif // !defined ENABLE_OP_KEY_ADD || (ENABLE_OP_KEY_ADD != YES && ENABLE_OP_KEY_ADD != NO)
#if !defined ENABLE_OP_KEY_ADD || (ENABLE_OP_KEY_ADD != YES && ENABLE_OP_KEY_ADD != NO)
#	error "You need to decide if OP_KEY_ADD (Add) should be enabled."
#endif // !defined ENABLE_OP_KEY_ADD || (ENABLE_OP_KEY_ADD != YES && ENABLE_OP_KEY_ADD != NO)
#if ENABLE_OP_KEY_ADD == YES
#	define OP_KEY_ADD_ENABLED 1
#endif // ENABLE_OP_KEY_ADD == YES
#undef ENABLE_OP_KEY_ADD
#if !defined ENABLE_OP_KEY_SEPARATOR || (ENABLE_OP_KEY_SEPARATOR != YES && ENABLE_OP_KEY_SEPARATOR != NO)
#	error "You need to decide if OP_KEY_SEPARATOR (Separator) should be enabled."
#endif // !defined ENABLE_OP_KEY_SEPARATOR || (ENABLE_OP_KEY_SEPARATOR != YES && ENABLE_OP_KEY_SEPARATOR != NO)
#if !defined ENABLE_OP_KEY_SEPARATOR || (ENABLE_OP_KEY_SEPARATOR != YES && ENABLE_OP_KEY_SEPARATOR != NO)
#	error "You need to decide if OP_KEY_SEPARATOR (Separator) should be enabled."
#endif // !defined ENABLE_OP_KEY_SEPARATOR || (ENABLE_OP_KEY_SEPARATOR != YES && ENABLE_OP_KEY_SEPARATOR != NO)
#if ENABLE_OP_KEY_SEPARATOR == YES
#	define OP_KEY_SEPARATOR_ENABLED 1
#endif // ENABLE_OP_KEY_SEPARATOR == YES
#undef ENABLE_OP_KEY_SEPARATOR
#if !defined ENABLE_OP_KEY_SUBTRACT || (ENABLE_OP_KEY_SUBTRACT != YES && ENABLE_OP_KEY_SUBTRACT != NO)
#	error "You need to decide if OP_KEY_SUBTRACT (Subtract) should be enabled."
#endif // !defined ENABLE_OP_KEY_SUBTRACT || (ENABLE_OP_KEY_SUBTRACT != YES && ENABLE_OP_KEY_SUBTRACT != NO)
#if !defined ENABLE_OP_KEY_SUBTRACT || (ENABLE_OP_KEY_SUBTRACT != YES && ENABLE_OP_KEY_SUBTRACT != NO)
#	error "You need to decide if OP_KEY_SUBTRACT (Subtract) should be enabled."
#endif // !defined ENABLE_OP_KEY_SUBTRACT || (ENABLE_OP_KEY_SUBTRACT != YES && ENABLE_OP_KEY_SUBTRACT != NO)
#if ENABLE_OP_KEY_SUBTRACT == YES
#	define OP_KEY_SUBTRACT_ENABLED 1
#endif // ENABLE_OP_KEY_SUBTRACT == YES
#undef ENABLE_OP_KEY_SUBTRACT
#if !defined ENABLE_OP_KEY_DECIMAL || (ENABLE_OP_KEY_DECIMAL != YES && ENABLE_OP_KEY_DECIMAL != NO)
#	error "You need to decide if OP_KEY_DECIMAL (Decimal) should be enabled."
#endif // !defined ENABLE_OP_KEY_DECIMAL || (ENABLE_OP_KEY_DECIMAL != YES && ENABLE_OP_KEY_DECIMAL != NO)
#if !defined ENABLE_OP_KEY_DECIMAL || (ENABLE_OP_KEY_DECIMAL != YES && ENABLE_OP_KEY_DECIMAL != NO)
#	error "You need to decide if OP_KEY_DECIMAL (Decimal) should be enabled."
#endif // !defined ENABLE_OP_KEY_DECIMAL || (ENABLE_OP_KEY_DECIMAL != YES && ENABLE_OP_KEY_DECIMAL != NO)
#if ENABLE_OP_KEY_DECIMAL == YES
#	define OP_KEY_DECIMAL_ENABLED 1
#endif // ENABLE_OP_KEY_DECIMAL == YES
#undef ENABLE_OP_KEY_DECIMAL
#if !defined ENABLE_OP_KEY_DIVIDE || (ENABLE_OP_KEY_DIVIDE != YES && ENABLE_OP_KEY_DIVIDE != NO)
#	error "You need to decide if OP_KEY_DIVIDE (Divide) should be enabled."
#endif // !defined ENABLE_OP_KEY_DIVIDE || (ENABLE_OP_KEY_DIVIDE != YES && ENABLE_OP_KEY_DIVIDE != NO)
#if !defined ENABLE_OP_KEY_DIVIDE || (ENABLE_OP_KEY_DIVIDE != YES && ENABLE_OP_KEY_DIVIDE != NO)
#	error "You need to decide if OP_KEY_DIVIDE (Divide) should be enabled."
#endif // !defined ENABLE_OP_KEY_DIVIDE || (ENABLE_OP_KEY_DIVIDE != YES && ENABLE_OP_KEY_DIVIDE != NO)
#if ENABLE_OP_KEY_DIVIDE == YES
#	define OP_KEY_DIVIDE_ENABLED 1
#endif // ENABLE_OP_KEY_DIVIDE == YES
#undef ENABLE_OP_KEY_DIVIDE
#if !defined ENABLE_OP_KEY_F1 || (ENABLE_OP_KEY_F1 != YES && ENABLE_OP_KEY_F1 != NO)
#	error "You need to decide if OP_KEY_F1 (F1) should be enabled."
#endif // !defined ENABLE_OP_KEY_F1 || (ENABLE_OP_KEY_F1 != YES && ENABLE_OP_KEY_F1 != NO)
#if !defined ENABLE_OP_KEY_F1 || (ENABLE_OP_KEY_F1 != YES && ENABLE_OP_KEY_F1 != NO)
#	error "You need to decide if OP_KEY_F1 (F1) should be enabled."
#endif // !defined ENABLE_OP_KEY_F1 || (ENABLE_OP_KEY_F1 != YES && ENABLE_OP_KEY_F1 != NO)
#if ENABLE_OP_KEY_F1 == YES
#	define OP_KEY_F1_ENABLED 1
#endif // ENABLE_OP_KEY_F1 == YES
#undef ENABLE_OP_KEY_F1
#if !defined ENABLE_OP_KEY_F2 || (ENABLE_OP_KEY_F2 != YES && ENABLE_OP_KEY_F2 != NO)
#	error "You need to decide if OP_KEY_F2 (F2) should be enabled."
#endif // !defined ENABLE_OP_KEY_F2 || (ENABLE_OP_KEY_F2 != YES && ENABLE_OP_KEY_F2 != NO)
#if !defined ENABLE_OP_KEY_F2 || (ENABLE_OP_KEY_F2 != YES && ENABLE_OP_KEY_F2 != NO)
#	error "You need to decide if OP_KEY_F2 (F2) should be enabled."
#endif // !defined ENABLE_OP_KEY_F2 || (ENABLE_OP_KEY_F2 != YES && ENABLE_OP_KEY_F2 != NO)
#if ENABLE_OP_KEY_F2 == YES
#	define OP_KEY_F2_ENABLED 1
#endif // ENABLE_OP_KEY_F2 == YES
#undef ENABLE_OP_KEY_F2
#if !defined ENABLE_OP_KEY_F3 || (ENABLE_OP_KEY_F3 != YES && ENABLE_OP_KEY_F3 != NO)
#	error "You need to decide if OP_KEY_F3 (F3) should be enabled."
#endif // !defined ENABLE_OP_KEY_F3 || (ENABLE_OP_KEY_F3 != YES && ENABLE_OP_KEY_F3 != NO)
#if !defined ENABLE_OP_KEY_F3 || (ENABLE_OP_KEY_F3 != YES && ENABLE_OP_KEY_F3 != NO)
#	error "You need to decide if OP_KEY_F3 (F3) should be enabled."
#endif // !defined ENABLE_OP_KEY_F3 || (ENABLE_OP_KEY_F3 != YES && ENABLE_OP_KEY_F3 != NO)
#if ENABLE_OP_KEY_F3 == YES
#	define OP_KEY_F3_ENABLED 1
#endif // ENABLE_OP_KEY_F3 == YES
#undef ENABLE_OP_KEY_F3
#if !defined ENABLE_OP_KEY_F4 || (ENABLE_OP_KEY_F4 != YES && ENABLE_OP_KEY_F4 != NO)
#	error "You need to decide if OP_KEY_F4 (F4) should be enabled."
#endif // !defined ENABLE_OP_KEY_F4 || (ENABLE_OP_KEY_F4 != YES && ENABLE_OP_KEY_F4 != NO)
#if !defined ENABLE_OP_KEY_F4 || (ENABLE_OP_KEY_F4 != YES && ENABLE_OP_KEY_F4 != NO)
#	error "You need to decide if OP_KEY_F4 (F4) should be enabled."
#endif // !defined ENABLE_OP_KEY_F4 || (ENABLE_OP_KEY_F4 != YES && ENABLE_OP_KEY_F4 != NO)
#if ENABLE_OP_KEY_F4 == YES
#	define OP_KEY_F4_ENABLED 1
#endif // ENABLE_OP_KEY_F4 == YES
#undef ENABLE_OP_KEY_F4
#if !defined ENABLE_OP_KEY_F5 || (ENABLE_OP_KEY_F5 != YES && ENABLE_OP_KEY_F5 != NO)
#	error "You need to decide if OP_KEY_F5 (F5) should be enabled."
#endif // !defined ENABLE_OP_KEY_F5 || (ENABLE_OP_KEY_F5 != YES && ENABLE_OP_KEY_F5 != NO)
#if !defined ENABLE_OP_KEY_F5 || (ENABLE_OP_KEY_F5 != YES && ENABLE_OP_KEY_F5 != NO)
#	error "You need to decide if OP_KEY_F5 (F5) should be enabled."
#endif // !defined ENABLE_OP_KEY_F5 || (ENABLE_OP_KEY_F5 != YES && ENABLE_OP_KEY_F5 != NO)
#if ENABLE_OP_KEY_F5 == YES
#	define OP_KEY_F5_ENABLED 1
#endif // ENABLE_OP_KEY_F5 == YES
#undef ENABLE_OP_KEY_F5
#if !defined ENABLE_OP_KEY_F6 || (ENABLE_OP_KEY_F6 != YES && ENABLE_OP_KEY_F6 != NO)
#	error "You need to decide if OP_KEY_F6 (F6) should be enabled."
#endif // !defined ENABLE_OP_KEY_F6 || (ENABLE_OP_KEY_F6 != YES && ENABLE_OP_KEY_F6 != NO)
#if !defined ENABLE_OP_KEY_F6 || (ENABLE_OP_KEY_F6 != YES && ENABLE_OP_KEY_F6 != NO)
#	error "You need to decide if OP_KEY_F6 (F6) should be enabled."
#endif // !defined ENABLE_OP_KEY_F6 || (ENABLE_OP_KEY_F6 != YES && ENABLE_OP_KEY_F6 != NO)
#if ENABLE_OP_KEY_F6 == YES
#	define OP_KEY_F6_ENABLED 1
#endif // ENABLE_OP_KEY_F6 == YES
#undef ENABLE_OP_KEY_F6
#if !defined ENABLE_OP_KEY_F7 || (ENABLE_OP_KEY_F7 != YES && ENABLE_OP_KEY_F7 != NO)
#	error "You need to decide if OP_KEY_F7 (F7) should be enabled."
#endif // !defined ENABLE_OP_KEY_F7 || (ENABLE_OP_KEY_F7 != YES && ENABLE_OP_KEY_F7 != NO)
#if !defined ENABLE_OP_KEY_F7 || (ENABLE_OP_KEY_F7 != YES && ENABLE_OP_KEY_F7 != NO)
#	error "You need to decide if OP_KEY_F7 (F7) should be enabled."
#endif // !defined ENABLE_OP_KEY_F7 || (ENABLE_OP_KEY_F7 != YES && ENABLE_OP_KEY_F7 != NO)
#if ENABLE_OP_KEY_F7 == YES
#	define OP_KEY_F7_ENABLED 1
#endif // ENABLE_OP_KEY_F7 == YES
#undef ENABLE_OP_KEY_F7
#if !defined ENABLE_OP_KEY_F8 || (ENABLE_OP_KEY_F8 != YES && ENABLE_OP_KEY_F8 != NO)
#	error "You need to decide if OP_KEY_F8 (F8) should be enabled."
#endif // !defined ENABLE_OP_KEY_F8 || (ENABLE_OP_KEY_F8 != YES && ENABLE_OP_KEY_F8 != NO)
#if !defined ENABLE_OP_KEY_F8 || (ENABLE_OP_KEY_F8 != YES && ENABLE_OP_KEY_F8 != NO)
#	error "You need to decide if OP_KEY_F8 (F8) should be enabled."
#endif // !defined ENABLE_OP_KEY_F8 || (ENABLE_OP_KEY_F8 != YES && ENABLE_OP_KEY_F8 != NO)
#if ENABLE_OP_KEY_F8 == YES
#	define OP_KEY_F8_ENABLED 1
#endif // ENABLE_OP_KEY_F8 == YES
#undef ENABLE_OP_KEY_F8
#if !defined ENABLE_OP_KEY_F9 || (ENABLE_OP_KEY_F9 != YES && ENABLE_OP_KEY_F9 != NO)
#	error "You need to decide if OP_KEY_F9 (F9) should be enabled."
#endif // !defined ENABLE_OP_KEY_F9 || (ENABLE_OP_KEY_F9 != YES && ENABLE_OP_KEY_F9 != NO)
#if !defined ENABLE_OP_KEY_F9 || (ENABLE_OP_KEY_F9 != YES && ENABLE_OP_KEY_F9 != NO)
#	error "You need to decide if OP_KEY_F9 (F9) should be enabled."
#endif // !defined ENABLE_OP_KEY_F9 || (ENABLE_OP_KEY_F9 != YES && ENABLE_OP_KEY_F9 != NO)
#if ENABLE_OP_KEY_F9 == YES
#	define OP_KEY_F9_ENABLED 1
#endif // ENABLE_OP_KEY_F9 == YES
#undef ENABLE_OP_KEY_F9
#if !defined ENABLE_OP_KEY_F10 || (ENABLE_OP_KEY_F10 != YES && ENABLE_OP_KEY_F10 != NO)
#	error "You need to decide if OP_KEY_F10 (F10) should be enabled."
#endif // !defined ENABLE_OP_KEY_F10 || (ENABLE_OP_KEY_F10 != YES && ENABLE_OP_KEY_F10 != NO)
#if !defined ENABLE_OP_KEY_F10 || (ENABLE_OP_KEY_F10 != YES && ENABLE_OP_KEY_F10 != NO)
#	error "You need to decide if OP_KEY_F10 (F10) should be enabled."
#endif // !defined ENABLE_OP_KEY_F10 || (ENABLE_OP_KEY_F10 != YES && ENABLE_OP_KEY_F10 != NO)
#if ENABLE_OP_KEY_F10 == YES
#	define OP_KEY_F10_ENABLED 1
#endif // ENABLE_OP_KEY_F10 == YES
#undef ENABLE_OP_KEY_F10
#if !defined ENABLE_OP_KEY_F11 || (ENABLE_OP_KEY_F11 != YES && ENABLE_OP_KEY_F11 != NO)
#	error "You need to decide if OP_KEY_F11 (F11) should be enabled."
#endif // !defined ENABLE_OP_KEY_F11 || (ENABLE_OP_KEY_F11 != YES && ENABLE_OP_KEY_F11 != NO)
#if !defined ENABLE_OP_KEY_F11 || (ENABLE_OP_KEY_F11 != YES && ENABLE_OP_KEY_F11 != NO)
#	error "You need to decide if OP_KEY_F11 (F11) should be enabled."
#endif // !defined ENABLE_OP_KEY_F11 || (ENABLE_OP_KEY_F11 != YES && ENABLE_OP_KEY_F11 != NO)
#if ENABLE_OP_KEY_F11 == YES
#	define OP_KEY_F11_ENABLED 1
#endif // ENABLE_OP_KEY_F11 == YES
#undef ENABLE_OP_KEY_F11
#if !defined ENABLE_OP_KEY_F12 || (ENABLE_OP_KEY_F12 != YES && ENABLE_OP_KEY_F12 != NO)
#	error "You need to decide if OP_KEY_F12 (F12) should be enabled."
#endif // !defined ENABLE_OP_KEY_F12 || (ENABLE_OP_KEY_F12 != YES && ENABLE_OP_KEY_F12 != NO)
#if !defined ENABLE_OP_KEY_F12 || (ENABLE_OP_KEY_F12 != YES && ENABLE_OP_KEY_F12 != NO)
#	error "You need to decide if OP_KEY_F12 (F12) should be enabled."
#endif // !defined ENABLE_OP_KEY_F12 || (ENABLE_OP_KEY_F12 != YES && ENABLE_OP_KEY_F12 != NO)
#if ENABLE_OP_KEY_F12 == YES
#	define OP_KEY_F12_ENABLED 1
#endif // ENABLE_OP_KEY_F12 == YES
#undef ENABLE_OP_KEY_F12
#if !defined ENABLE_OP_KEY_F13 || (ENABLE_OP_KEY_F13 != YES && ENABLE_OP_KEY_F13 != NO)
#	error "You need to decide if OP_KEY_F13 (F13) should be enabled."
#endif // !defined ENABLE_OP_KEY_F13 || (ENABLE_OP_KEY_F13 != YES && ENABLE_OP_KEY_F13 != NO)
#if !defined ENABLE_OP_KEY_F13 || (ENABLE_OP_KEY_F13 != YES && ENABLE_OP_KEY_F13 != NO)
#	error "You need to decide if OP_KEY_F13 (F13) should be enabled."
#endif // !defined ENABLE_OP_KEY_F13 || (ENABLE_OP_KEY_F13 != YES && ENABLE_OP_KEY_F13 != NO)
#if ENABLE_OP_KEY_F13 == YES
#	define OP_KEY_F13_ENABLED 1
#endif // ENABLE_OP_KEY_F13 == YES
#undef ENABLE_OP_KEY_F13
#if !defined ENABLE_OP_KEY_F14 || (ENABLE_OP_KEY_F14 != YES && ENABLE_OP_KEY_F14 != NO)
#	error "You need to decide if OP_KEY_F14 (F14) should be enabled."
#endif // !defined ENABLE_OP_KEY_F14 || (ENABLE_OP_KEY_F14 != YES && ENABLE_OP_KEY_F14 != NO)
#if !defined ENABLE_OP_KEY_F14 || (ENABLE_OP_KEY_F14 != YES && ENABLE_OP_KEY_F14 != NO)
#	error "You need to decide if OP_KEY_F14 (F14) should be enabled."
#endif // !defined ENABLE_OP_KEY_F14 || (ENABLE_OP_KEY_F14 != YES && ENABLE_OP_KEY_F14 != NO)
#if ENABLE_OP_KEY_F14 == YES
#	define OP_KEY_F14_ENABLED 1
#endif // ENABLE_OP_KEY_F14 == YES
#undef ENABLE_OP_KEY_F14
#if !defined ENABLE_OP_KEY_F15 || (ENABLE_OP_KEY_F15 != YES && ENABLE_OP_KEY_F15 != NO)
#	error "You need to decide if OP_KEY_F15 (F15) should be enabled."
#endif // !defined ENABLE_OP_KEY_F15 || (ENABLE_OP_KEY_F15 != YES && ENABLE_OP_KEY_F15 != NO)
#if !defined ENABLE_OP_KEY_F15 || (ENABLE_OP_KEY_F15 != YES && ENABLE_OP_KEY_F15 != NO)
#	error "You need to decide if OP_KEY_F15 (F15) should be enabled."
#endif // !defined ENABLE_OP_KEY_F15 || (ENABLE_OP_KEY_F15 != YES && ENABLE_OP_KEY_F15 != NO)
#if ENABLE_OP_KEY_F15 == YES
#	define OP_KEY_F15_ENABLED 1
#endif // ENABLE_OP_KEY_F15 == YES
#undef ENABLE_OP_KEY_F15
#if !defined ENABLE_OP_KEY_F16 || (ENABLE_OP_KEY_F16 != YES && ENABLE_OP_KEY_F16 != NO)
#	error "You need to decide if OP_KEY_F16 (F16) should be enabled."
#endif // !defined ENABLE_OP_KEY_F16 || (ENABLE_OP_KEY_F16 != YES && ENABLE_OP_KEY_F16 != NO)
#if !defined ENABLE_OP_KEY_F16 || (ENABLE_OP_KEY_F16 != YES && ENABLE_OP_KEY_F16 != NO)
#	error "You need to decide if OP_KEY_F16 (F16) should be enabled."
#endif // !defined ENABLE_OP_KEY_F16 || (ENABLE_OP_KEY_F16 != YES && ENABLE_OP_KEY_F16 != NO)
#if ENABLE_OP_KEY_F16 == YES
#	define OP_KEY_F16_ENABLED 1
#endif // ENABLE_OP_KEY_F16 == YES
#undef ENABLE_OP_KEY_F16
#if !defined ENABLE_OP_KEY_F17 || (ENABLE_OP_KEY_F17 != YES && ENABLE_OP_KEY_F17 != NO)
#	error "You need to decide if OP_KEY_F17 (F17) should be enabled."
#endif // !defined ENABLE_OP_KEY_F17 || (ENABLE_OP_KEY_F17 != YES && ENABLE_OP_KEY_F17 != NO)
#if !defined ENABLE_OP_KEY_F17 || (ENABLE_OP_KEY_F17 != YES && ENABLE_OP_KEY_F17 != NO)
#	error "You need to decide if OP_KEY_F17 (F17) should be enabled."
#endif // !defined ENABLE_OP_KEY_F17 || (ENABLE_OP_KEY_F17 != YES && ENABLE_OP_KEY_F17 != NO)
#if ENABLE_OP_KEY_F17 == YES
#	define OP_KEY_F17_ENABLED 1
#endif // ENABLE_OP_KEY_F17 == YES
#undef ENABLE_OP_KEY_F17
#if !defined ENABLE_OP_KEY_F18 || (ENABLE_OP_KEY_F18 != YES && ENABLE_OP_KEY_F18 != NO)
#	error "You need to decide if OP_KEY_F18 (F18) should be enabled."
#endif // !defined ENABLE_OP_KEY_F18 || (ENABLE_OP_KEY_F18 != YES && ENABLE_OP_KEY_F18 != NO)
#if !defined ENABLE_OP_KEY_F18 || (ENABLE_OP_KEY_F18 != YES && ENABLE_OP_KEY_F18 != NO)
#	error "You need to decide if OP_KEY_F18 (F18) should be enabled."
#endif // !defined ENABLE_OP_KEY_F18 || (ENABLE_OP_KEY_F18 != YES && ENABLE_OP_KEY_F18 != NO)
#if ENABLE_OP_KEY_F18 == YES
#	define OP_KEY_F18_ENABLED 1
#endif // ENABLE_OP_KEY_F18 == YES
#undef ENABLE_OP_KEY_F18
#if !defined ENABLE_OP_KEY_F19 || (ENABLE_OP_KEY_F19 != YES && ENABLE_OP_KEY_F19 != NO)
#	error "You need to decide if OP_KEY_F19 (F19) should be enabled."
#endif // !defined ENABLE_OP_KEY_F19 || (ENABLE_OP_KEY_F19 != YES && ENABLE_OP_KEY_F19 != NO)
#if !defined ENABLE_OP_KEY_F19 || (ENABLE_OP_KEY_F19 != YES && ENABLE_OP_KEY_F19 != NO)
#	error "You need to decide if OP_KEY_F19 (F19) should be enabled."
#endif // !defined ENABLE_OP_KEY_F19 || (ENABLE_OP_KEY_F19 != YES && ENABLE_OP_KEY_F19 != NO)
#if ENABLE_OP_KEY_F19 == YES
#	define OP_KEY_F19_ENABLED 1
#endif // ENABLE_OP_KEY_F19 == YES
#undef ENABLE_OP_KEY_F19
#if !defined ENABLE_OP_KEY_F20 || (ENABLE_OP_KEY_F20 != YES && ENABLE_OP_KEY_F20 != NO)
#	error "You need to decide if OP_KEY_F20 (F20) should be enabled."
#endif // !defined ENABLE_OP_KEY_F20 || (ENABLE_OP_KEY_F20 != YES && ENABLE_OP_KEY_F20 != NO)
#if !defined ENABLE_OP_KEY_F20 || (ENABLE_OP_KEY_F20 != YES && ENABLE_OP_KEY_F20 != NO)
#	error "You need to decide if OP_KEY_F20 (F20) should be enabled."
#endif // !defined ENABLE_OP_KEY_F20 || (ENABLE_OP_KEY_F20 != YES && ENABLE_OP_KEY_F20 != NO)
#if ENABLE_OP_KEY_F20 == YES
#	define OP_KEY_F20_ENABLED 1
#endif // ENABLE_OP_KEY_F20 == YES
#undef ENABLE_OP_KEY_F20
#if !defined ENABLE_OP_KEY_F21 || (ENABLE_OP_KEY_F21 != YES && ENABLE_OP_KEY_F21 != NO)
#	error "You need to decide if OP_KEY_F21 (F21) should be enabled."
#endif // !defined ENABLE_OP_KEY_F21 || (ENABLE_OP_KEY_F21 != YES && ENABLE_OP_KEY_F21 != NO)
#if !defined ENABLE_OP_KEY_F21 || (ENABLE_OP_KEY_F21 != YES && ENABLE_OP_KEY_F21 != NO)
#	error "You need to decide if OP_KEY_F21 (F21) should be enabled."
#endif // !defined ENABLE_OP_KEY_F21 || (ENABLE_OP_KEY_F21 != YES && ENABLE_OP_KEY_F21 != NO)
#if ENABLE_OP_KEY_F21 == YES
#	define OP_KEY_F21_ENABLED 1
#endif // ENABLE_OP_KEY_F21 == YES
#undef ENABLE_OP_KEY_F21
#if !defined ENABLE_OP_KEY_F22 || (ENABLE_OP_KEY_F22 != YES && ENABLE_OP_KEY_F22 != NO)
#	error "You need to decide if OP_KEY_F22 (F22) should be enabled."
#endif // !defined ENABLE_OP_KEY_F22 || (ENABLE_OP_KEY_F22 != YES && ENABLE_OP_KEY_F22 != NO)
#if !defined ENABLE_OP_KEY_F22 || (ENABLE_OP_KEY_F22 != YES && ENABLE_OP_KEY_F22 != NO)
#	error "You need to decide if OP_KEY_F22 (F22) should be enabled."
#endif // !defined ENABLE_OP_KEY_F22 || (ENABLE_OP_KEY_F22 != YES && ENABLE_OP_KEY_F22 != NO)
#if ENABLE_OP_KEY_F22 == YES
#	define OP_KEY_F22_ENABLED 1
#endif // ENABLE_OP_KEY_F22 == YES
#undef ENABLE_OP_KEY_F22
#if !defined ENABLE_OP_KEY_F23 || (ENABLE_OP_KEY_F23 != YES && ENABLE_OP_KEY_F23 != NO)
#	error "You need to decide if OP_KEY_F23 (F23) should be enabled."
#endif // !defined ENABLE_OP_KEY_F23 || (ENABLE_OP_KEY_F23 != YES && ENABLE_OP_KEY_F23 != NO)
#if !defined ENABLE_OP_KEY_F23 || (ENABLE_OP_KEY_F23 != YES && ENABLE_OP_KEY_F23 != NO)
#	error "You need to decide if OP_KEY_F23 (F23) should be enabled."
#endif // !defined ENABLE_OP_KEY_F23 || (ENABLE_OP_KEY_F23 != YES && ENABLE_OP_KEY_F23 != NO)
#if ENABLE_OP_KEY_F23 == YES
#	define OP_KEY_F23_ENABLED 1
#endif // ENABLE_OP_KEY_F23 == YES
#undef ENABLE_OP_KEY_F23
#if !defined ENABLE_OP_KEY_F24 || (ENABLE_OP_KEY_F24 != YES && ENABLE_OP_KEY_F24 != NO)
#	error "You need to decide if OP_KEY_F24 (F24) should be enabled."
#endif // !defined ENABLE_OP_KEY_F24 || (ENABLE_OP_KEY_F24 != YES && ENABLE_OP_KEY_F24 != NO)
#if !defined ENABLE_OP_KEY_F24 || (ENABLE_OP_KEY_F24 != YES && ENABLE_OP_KEY_F24 != NO)
#	error "You need to decide if OP_KEY_F24 (F24) should be enabled."
#endif // !defined ENABLE_OP_KEY_F24 || (ENABLE_OP_KEY_F24 != YES && ENABLE_OP_KEY_F24 != NO)
#if ENABLE_OP_KEY_F24 == YES
#	define OP_KEY_F24_ENABLED 1
#endif // ENABLE_OP_KEY_F24 == YES
#undef ENABLE_OP_KEY_F24
#if !defined ENABLE_OP_KEY_NUM_LOCK || (ENABLE_OP_KEY_NUM_LOCK != YES && ENABLE_OP_KEY_NUM_LOCK != NO)
#	error "You need to decide if OP_KEY_NUM_LOCK (NumLock) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUM_LOCK || (ENABLE_OP_KEY_NUM_LOCK != YES && ENABLE_OP_KEY_NUM_LOCK != NO)
#if !defined ENABLE_OP_KEY_NUM_LOCK || (ENABLE_OP_KEY_NUM_LOCK != YES && ENABLE_OP_KEY_NUM_LOCK != NO)
#	error "You need to decide if OP_KEY_NUM_LOCK (NumLock) should be enabled."
#endif // !defined ENABLE_OP_KEY_NUM_LOCK || (ENABLE_OP_KEY_NUM_LOCK != YES && ENABLE_OP_KEY_NUM_LOCK != NO)
#if ENABLE_OP_KEY_NUM_LOCK == YES
#	define OP_KEY_NUM_LOCK_ENABLED 1
#endif // ENABLE_OP_KEY_NUM_LOCK == YES
#undef ENABLE_OP_KEY_NUM_LOCK
#if !defined ENABLE_OP_KEY_SCROLL_LOCK || (ENABLE_OP_KEY_SCROLL_LOCK != YES && ENABLE_OP_KEY_SCROLL_LOCK != NO)
#	error "You need to decide if OP_KEY_SCROLL_LOCK (ScrollLock) should be enabled."
#endif // !defined ENABLE_OP_KEY_SCROLL_LOCK || (ENABLE_OP_KEY_SCROLL_LOCK != YES && ENABLE_OP_KEY_SCROLL_LOCK != NO)
#if !defined ENABLE_OP_KEY_SCROLL_LOCK || (ENABLE_OP_KEY_SCROLL_LOCK != YES && ENABLE_OP_KEY_SCROLL_LOCK != NO)
#	error "You need to decide if OP_KEY_SCROLL_LOCK (ScrollLock) should be enabled."
#endif // !defined ENABLE_OP_KEY_SCROLL_LOCK || (ENABLE_OP_KEY_SCROLL_LOCK != YES && ENABLE_OP_KEY_SCROLL_LOCK != NO)
#if ENABLE_OP_KEY_SCROLL_LOCK == YES
#	define OP_KEY_SCROLL_LOCK_ENABLED 1
#endif // ENABLE_OP_KEY_SCROLL_LOCK == YES
#undef ENABLE_OP_KEY_SCROLL_LOCK
#if !defined ENABLE_OP_KEY_META || (ENABLE_OP_KEY_META != YES && ENABLE_OP_KEY_META != NO)
#	error "You need to decide if OP_KEY_META (Meta) should be enabled."
#endif // !defined ENABLE_OP_KEY_META || (ENABLE_OP_KEY_META != YES && ENABLE_OP_KEY_META != NO)
#if !defined ENABLE_OP_KEY_META || (ENABLE_OP_KEY_META != YES && ENABLE_OP_KEY_META != NO)
#	error "You need to decide if OP_KEY_META (Meta) should be enabled."
#endif // !defined ENABLE_OP_KEY_META || (ENABLE_OP_KEY_META != YES && ENABLE_OP_KEY_META != NO)
#if ENABLE_OP_KEY_META == YES
#	define OP_KEY_META_ENABLED 1
#endif // ENABLE_OP_KEY_META == YES
#undef ENABLE_OP_KEY_META
#if !defined ENABLE_OP_KEY_OEM_1 || (ENABLE_OP_KEY_OEM_1 != YES && ENABLE_OP_KEY_OEM_1 != NO)
#	error "You need to decide if OP_KEY_OEM_1 (Oem1) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_1 || (ENABLE_OP_KEY_OEM_1 != YES && ENABLE_OP_KEY_OEM_1 != NO)
#if !defined ENABLE_OP_KEY_OEM_1 || (ENABLE_OP_KEY_OEM_1 != YES && ENABLE_OP_KEY_OEM_1 != NO)
#	error "You need to decide if OP_KEY_OEM_1 (Oem1) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_1 || (ENABLE_OP_KEY_OEM_1 != YES && ENABLE_OP_KEY_OEM_1 != NO)
#if ENABLE_OP_KEY_OEM_1 == YES
#	define OP_KEY_OEM_1_ENABLED 1
#endif // ENABLE_OP_KEY_OEM_1 == YES
#undef ENABLE_OP_KEY_OEM_1
#if !defined ENABLE_OP_KEY_OEM_PLUS || (ENABLE_OP_KEY_OEM_PLUS != YES && ENABLE_OP_KEY_OEM_PLUS != NO)
#	error "You need to decide if OP_KEY_OEM_PLUS (OemPlus) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_PLUS || (ENABLE_OP_KEY_OEM_PLUS != YES && ENABLE_OP_KEY_OEM_PLUS != NO)
#if !defined ENABLE_OP_KEY_OEM_PLUS || (ENABLE_OP_KEY_OEM_PLUS != YES && ENABLE_OP_KEY_OEM_PLUS != NO)
#	error "You need to decide if OP_KEY_OEM_PLUS (OemPlus) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_PLUS || (ENABLE_OP_KEY_OEM_PLUS != YES && ENABLE_OP_KEY_OEM_PLUS != NO)
#if ENABLE_OP_KEY_OEM_PLUS == YES
#	define OP_KEY_OEM_PLUS_ENABLED 1
#endif // ENABLE_OP_KEY_OEM_PLUS == YES
#undef ENABLE_OP_KEY_OEM_PLUS
#if !defined ENABLE_OP_KEY_OEM_COMMA || (ENABLE_OP_KEY_OEM_COMMA != YES && ENABLE_OP_KEY_OEM_COMMA != NO)
#	error "You need to decide if OP_KEY_OEM_COMMA (OemComma) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_COMMA || (ENABLE_OP_KEY_OEM_COMMA != YES && ENABLE_OP_KEY_OEM_COMMA != NO)
#if !defined ENABLE_OP_KEY_OEM_COMMA || (ENABLE_OP_KEY_OEM_COMMA != YES && ENABLE_OP_KEY_OEM_COMMA != NO)
#	error "You need to decide if OP_KEY_OEM_COMMA (OemComma) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_COMMA || (ENABLE_OP_KEY_OEM_COMMA != YES && ENABLE_OP_KEY_OEM_COMMA != NO)
#if ENABLE_OP_KEY_OEM_COMMA == YES
#	define OP_KEY_OEM_COMMA_ENABLED 1
#endif // ENABLE_OP_KEY_OEM_COMMA == YES
#undef ENABLE_OP_KEY_OEM_COMMA
#if !defined ENABLE_OP_KEY_OEM_MINUS || (ENABLE_OP_KEY_OEM_MINUS != YES && ENABLE_OP_KEY_OEM_MINUS != NO)
#	error "You need to decide if OP_KEY_OEM_MINUS (OemMinus) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_MINUS || (ENABLE_OP_KEY_OEM_MINUS != YES && ENABLE_OP_KEY_OEM_MINUS != NO)
#if !defined ENABLE_OP_KEY_OEM_MINUS || (ENABLE_OP_KEY_OEM_MINUS != YES && ENABLE_OP_KEY_OEM_MINUS != NO)
#	error "You need to decide if OP_KEY_OEM_MINUS (OemMinus) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_MINUS || (ENABLE_OP_KEY_OEM_MINUS != YES && ENABLE_OP_KEY_OEM_MINUS != NO)
#if ENABLE_OP_KEY_OEM_MINUS == YES
#	define OP_KEY_OEM_MINUS_ENABLED 1
#endif // ENABLE_OP_KEY_OEM_MINUS == YES
#undef ENABLE_OP_KEY_OEM_MINUS
#if !defined ENABLE_OP_KEY_OEM_PERIOD || (ENABLE_OP_KEY_OEM_PERIOD != YES && ENABLE_OP_KEY_OEM_PERIOD != NO)
#	error "You need to decide if OP_KEY_OEM_PERIOD (OemPeriod) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_PERIOD || (ENABLE_OP_KEY_OEM_PERIOD != YES && ENABLE_OP_KEY_OEM_PERIOD != NO)
#if !defined ENABLE_OP_KEY_OEM_PERIOD || (ENABLE_OP_KEY_OEM_PERIOD != YES && ENABLE_OP_KEY_OEM_PERIOD != NO)
#	error "You need to decide if OP_KEY_OEM_PERIOD (OemPeriod) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_PERIOD || (ENABLE_OP_KEY_OEM_PERIOD != YES && ENABLE_OP_KEY_OEM_PERIOD != NO)
#if ENABLE_OP_KEY_OEM_PERIOD == YES
#	define OP_KEY_OEM_PERIOD_ENABLED 1
#endif // ENABLE_OP_KEY_OEM_PERIOD == YES
#undef ENABLE_OP_KEY_OEM_PERIOD
#if !defined ENABLE_OP_KEY_OEM_2 || (ENABLE_OP_KEY_OEM_2 != YES && ENABLE_OP_KEY_OEM_2 != NO)
#	error "You need to decide if OP_KEY_OEM_2 (Oem2) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_2 || (ENABLE_OP_KEY_OEM_2 != YES && ENABLE_OP_KEY_OEM_2 != NO)
#if !defined ENABLE_OP_KEY_OEM_2 || (ENABLE_OP_KEY_OEM_2 != YES && ENABLE_OP_KEY_OEM_2 != NO)
#	error "You need to decide if OP_KEY_OEM_2 (Oem2) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_2 || (ENABLE_OP_KEY_OEM_2 != YES && ENABLE_OP_KEY_OEM_2 != NO)
#if ENABLE_OP_KEY_OEM_2 == YES
#	define OP_KEY_OEM_2_ENABLED 1
#endif // ENABLE_OP_KEY_OEM_2 == YES
#undef ENABLE_OP_KEY_OEM_2
#if !defined ENABLE_OP_KEY_OEM_3 || (ENABLE_OP_KEY_OEM_3 != YES && ENABLE_OP_KEY_OEM_3 != NO)
#	error "You need to decide if OP_KEY_OEM_3 (Oem3) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_3 || (ENABLE_OP_KEY_OEM_3 != YES && ENABLE_OP_KEY_OEM_3 != NO)
#if !defined ENABLE_OP_KEY_OEM_3 || (ENABLE_OP_KEY_OEM_3 != YES && ENABLE_OP_KEY_OEM_3 != NO)
#	error "You need to decide if OP_KEY_OEM_3 (Oem3) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_3 || (ENABLE_OP_KEY_OEM_3 != YES && ENABLE_OP_KEY_OEM_3 != NO)
#if ENABLE_OP_KEY_OEM_3 == YES
#	define OP_KEY_OEM_3_ENABLED 1
#endif // ENABLE_OP_KEY_OEM_3 == YES
#undef ENABLE_OP_KEY_OEM_3
#if !defined ENABLE_OP_KEY_OEM_4 || (ENABLE_OP_KEY_OEM_4 != YES && ENABLE_OP_KEY_OEM_4 != NO)
#	error "You need to decide if OP_KEY_OEM_4 (Oem4) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_4 || (ENABLE_OP_KEY_OEM_4 != YES && ENABLE_OP_KEY_OEM_4 != NO)
#if !defined ENABLE_OP_KEY_OEM_4 || (ENABLE_OP_KEY_OEM_4 != YES && ENABLE_OP_KEY_OEM_4 != NO)
#	error "You need to decide if OP_KEY_OEM_4 (Oem4) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_4 || (ENABLE_OP_KEY_OEM_4 != YES && ENABLE_OP_KEY_OEM_4 != NO)
#if ENABLE_OP_KEY_OEM_4 == YES
#	define OP_KEY_OEM_4_ENABLED 1
#endif // ENABLE_OP_KEY_OEM_4 == YES
#undef ENABLE_OP_KEY_OEM_4
#if !defined ENABLE_OP_KEY_OEM_5 || (ENABLE_OP_KEY_OEM_5 != YES && ENABLE_OP_KEY_OEM_5 != NO)
#	error "You need to decide if OP_KEY_OEM_5 (Oem5) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_5 || (ENABLE_OP_KEY_OEM_5 != YES && ENABLE_OP_KEY_OEM_5 != NO)
#if !defined ENABLE_OP_KEY_OEM_5 || (ENABLE_OP_KEY_OEM_5 != YES && ENABLE_OP_KEY_OEM_5 != NO)
#	error "You need to decide if OP_KEY_OEM_5 (Oem5) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_5 || (ENABLE_OP_KEY_OEM_5 != YES && ENABLE_OP_KEY_OEM_5 != NO)
#if ENABLE_OP_KEY_OEM_5 == YES
#	define OP_KEY_OEM_5_ENABLED 1
#endif // ENABLE_OP_KEY_OEM_5 == YES
#undef ENABLE_OP_KEY_OEM_5
#if !defined ENABLE_OP_KEY_OEM_6 || (ENABLE_OP_KEY_OEM_6 != YES && ENABLE_OP_KEY_OEM_6 != NO)
#	error "You need to decide if OP_KEY_OEM_6 (Oem6) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_6 || (ENABLE_OP_KEY_OEM_6 != YES && ENABLE_OP_KEY_OEM_6 != NO)
#if !defined ENABLE_OP_KEY_OEM_6 || (ENABLE_OP_KEY_OEM_6 != YES && ENABLE_OP_KEY_OEM_6 != NO)
#	error "You need to decide if OP_KEY_OEM_6 (Oem6) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_6 || (ENABLE_OP_KEY_OEM_6 != YES && ENABLE_OP_KEY_OEM_6 != NO)
#if ENABLE_OP_KEY_OEM_6 == YES
#	define OP_KEY_OEM_6_ENABLED 1
#endif // ENABLE_OP_KEY_OEM_6 == YES
#undef ENABLE_OP_KEY_OEM_6
#if !defined ENABLE_OP_KEY_OEM_7 || (ENABLE_OP_KEY_OEM_7 != YES && ENABLE_OP_KEY_OEM_7 != NO)
#	error "You need to decide if OP_KEY_OEM_7 (Oem7) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_7 || (ENABLE_OP_KEY_OEM_7 != YES && ENABLE_OP_KEY_OEM_7 != NO)
#if !defined ENABLE_OP_KEY_OEM_7 || (ENABLE_OP_KEY_OEM_7 != YES && ENABLE_OP_KEY_OEM_7 != NO)
#	error "You need to decide if OP_KEY_OEM_7 (Oem7) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_7 || (ENABLE_OP_KEY_OEM_7 != YES && ENABLE_OP_KEY_OEM_7 != NO)
#if ENABLE_OP_KEY_OEM_7 == YES
#	define OP_KEY_OEM_7_ENABLED 1
#endif // ENABLE_OP_KEY_OEM_7 == YES
#undef ENABLE_OP_KEY_OEM_7
#if !defined ENABLE_OP_KEY_OEM_8 || (ENABLE_OP_KEY_OEM_8 != YES && ENABLE_OP_KEY_OEM_8 != NO)
#	error "You need to decide if OP_KEY_OEM_8 (Oem8) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_8 || (ENABLE_OP_KEY_OEM_8 != YES && ENABLE_OP_KEY_OEM_8 != NO)
#if !defined ENABLE_OP_KEY_OEM_8 || (ENABLE_OP_KEY_OEM_8 != YES && ENABLE_OP_KEY_OEM_8 != NO)
#	error "You need to decide if OP_KEY_OEM_8 (Oem8) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_8 || (ENABLE_OP_KEY_OEM_8 != YES && ENABLE_OP_KEY_OEM_8 != NO)
#if ENABLE_OP_KEY_OEM_8 == YES
#	define OP_KEY_OEM_8_ENABLED 1
#endif // ENABLE_OP_KEY_OEM_8 == YES
#undef ENABLE_OP_KEY_OEM_8
#if !defined ENABLE_OP_KEY_OEM_102 || (ENABLE_OP_KEY_OEM_102 != YES && ENABLE_OP_KEY_OEM_102 != NO)
#	error "You need to decide if OP_KEY_OEM_102 (Oem102) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_102 || (ENABLE_OP_KEY_OEM_102 != YES && ENABLE_OP_KEY_OEM_102 != NO)
#if !defined ENABLE_OP_KEY_OEM_102 || (ENABLE_OP_KEY_OEM_102 != YES && ENABLE_OP_KEY_OEM_102 != NO)
#	error "You need to decide if OP_KEY_OEM_102 (Oem102) should be enabled."
#endif // !defined ENABLE_OP_KEY_OEM_102 || (ENABLE_OP_KEY_OEM_102 != YES && ENABLE_OP_KEY_OEM_102 != NO)
#if ENABLE_OP_KEY_OEM_102 == YES
#	define OP_KEY_OEM_102_ENABLED 1
#endif // ENABLE_OP_KEY_OEM_102 == YES
#undef ENABLE_OP_KEY_OEM_102
#if !defined ENABLE_OP_KEY_PROCESSKEY || (ENABLE_OP_KEY_PROCESSKEY != YES && ENABLE_OP_KEY_PROCESSKEY != NO)
#	error "You need to decide if OP_KEY_PROCESSKEY (IMEProcess) should be enabled."
#endif // !defined ENABLE_OP_KEY_PROCESSKEY || (ENABLE_OP_KEY_PROCESSKEY != YES && ENABLE_OP_KEY_PROCESSKEY != NO)
#if !defined ENABLE_OP_KEY_PROCESSKEY || (ENABLE_OP_KEY_PROCESSKEY != YES && ENABLE_OP_KEY_PROCESSKEY != NO)
#	error "You need to decide if OP_KEY_PROCESSKEY (IMEProcess) should be enabled."
#endif // !defined ENABLE_OP_KEY_PROCESSKEY || (ENABLE_OP_KEY_PROCESSKEY != YES && ENABLE_OP_KEY_PROCESSKEY != NO)
#if ENABLE_OP_KEY_PROCESSKEY == YES
#	define OP_KEY_PROCESSKEY_ENABLED 1
#endif // ENABLE_OP_KEY_PROCESSKEY == YES
#undef ENABLE_OP_KEY_PROCESSKEY
#if !defined ENABLE_OP_KEY_UNICODE || (ENABLE_OP_KEY_UNICODE != YES && ENABLE_OP_KEY_UNICODE != NO)
#	error "You need to decide if OP_KEY_UNICODE (KeyInput) should be enabled."
#endif // !defined ENABLE_OP_KEY_UNICODE || (ENABLE_OP_KEY_UNICODE != YES && ENABLE_OP_KEY_UNICODE != NO)
#if !defined ENABLE_OP_KEY_UNICODE || (ENABLE_OP_KEY_UNICODE != YES && ENABLE_OP_KEY_UNICODE != NO)
#	error "You need to decide if OP_KEY_UNICODE (KeyInput) should be enabled."
#endif // !defined ENABLE_OP_KEY_UNICODE || (ENABLE_OP_KEY_UNICODE != YES && ENABLE_OP_KEY_UNICODE != NO)
#if ENABLE_OP_KEY_UNICODE == YES
#	define OP_KEY_UNICODE_ENABLED 1
#endif // ENABLE_OP_KEY_UNICODE == YES
#undef ENABLE_OP_KEY_UNICODE
#if defined ENABLE_OP_KEY_FIRST_EXTENDED && ENABLE_OP_KEY_FIRST_EXTENDED != YES
#	error "You cannot disable the always-enabled OP_KEY_FIRST_EXTENDED (ExtensionStart)."
#	else
#undef ENABLE_OP_KEY_FIRST_EXTENDED
#	define ENABLE_OP_KEY_FIRST_EXTENDED YES
#endif // !defined ENABLE_OP_KEY_FIRST_EXTENDED && ENABLE_OP_KEY_FIRST_EXTENDED != YES
#if defined ENABLE_OP_KEY_FIRST_EXTENDED && ENABLE_OP_KEY_FIRST_EXTENDED != YES
#	error "You cannot disable the always-enabled OP_KEY_FIRST_EXTENDED (ExtensionStart)."
#	else
#undef ENABLE_OP_KEY_FIRST_EXTENDED
#	define ENABLE_OP_KEY_FIRST_EXTENDED YES
#endif // !defined ENABLE_OP_KEY_FIRST_EXTENDED && ENABLE_OP_KEY_FIRST_EXTENDED != YES
#if ENABLE_OP_KEY_FIRST_EXTENDED == YES
#	define OP_KEY_FIRST_EXTENDED_ENABLED 1
#endif // ENABLE_OP_KEY_FIRST_EXTENDED == YES
#undef ENABLE_OP_KEY_FIRST_EXTENDED
#if defined ENABLE_OP_KEY_FIRST_INTERNAL && ENABLE_OP_KEY_FIRST_INTERNAL != YES
#	error "You cannot disable the always-enabled OP_KEY_FIRST_INTERNAL (InternalStart)."
#	else
#undef ENABLE_OP_KEY_FIRST_INTERNAL
#	define ENABLE_OP_KEY_FIRST_INTERNAL YES
#endif // !defined ENABLE_OP_KEY_FIRST_INTERNAL && ENABLE_OP_KEY_FIRST_INTERNAL != YES
#if defined ENABLE_OP_KEY_FIRST_INTERNAL && ENABLE_OP_KEY_FIRST_INTERNAL != YES
#	error "You cannot disable the always-enabled OP_KEY_FIRST_INTERNAL (InternalStart)."
#	else
#undef ENABLE_OP_KEY_FIRST_INTERNAL
#	define ENABLE_OP_KEY_FIRST_INTERNAL YES
#endif // !defined ENABLE_OP_KEY_FIRST_INTERNAL && ENABLE_OP_KEY_FIRST_INTERNAL != YES
#if ENABLE_OP_KEY_FIRST_INTERNAL == YES
#	define OP_KEY_FIRST_INTERNAL_ENABLED 1
#endif // ENABLE_OP_KEY_FIRST_INTERNAL == YES
#undef ENABLE_OP_KEY_FIRST_INTERNAL
#if !defined ENABLE_OP_KEY_MOUSE_BUTTON_1 || (ENABLE_OP_KEY_MOUSE_BUTTON_1 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_1 != NO)
#	error "You need to decide if OP_KEY_MOUSE_BUTTON_1 (Button1) should be enabled."
#endif // !defined ENABLE_OP_KEY_MOUSE_BUTTON_1 || (ENABLE_OP_KEY_MOUSE_BUTTON_1 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_1 != NO)
#if !defined ENABLE_OP_KEY_MOUSE_BUTTON_1 || (ENABLE_OP_KEY_MOUSE_BUTTON_1 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_1 != NO)
#	error "You need to decide if OP_KEY_MOUSE_BUTTON_1 (Button1) should be enabled."
#endif // !defined ENABLE_OP_KEY_MOUSE_BUTTON_1 || (ENABLE_OP_KEY_MOUSE_BUTTON_1 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_1 != NO)
#if ENABLE_OP_KEY_MOUSE_BUTTON_1 == YES
#	define OP_KEY_MOUSE_BUTTON_1_ENABLED 1
#endif // ENABLE_OP_KEY_MOUSE_BUTTON_1 == YES
#undef ENABLE_OP_KEY_MOUSE_BUTTON_1
#if !defined ENABLE_OP_KEY_MOUSE_BUTTON_2 || (ENABLE_OP_KEY_MOUSE_BUTTON_2 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_2 != NO)
#	error "You need to decide if OP_KEY_MOUSE_BUTTON_2 (Button2) should be enabled."
#endif // !defined ENABLE_OP_KEY_MOUSE_BUTTON_2 || (ENABLE_OP_KEY_MOUSE_BUTTON_2 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_2 != NO)
#if !defined ENABLE_OP_KEY_MOUSE_BUTTON_2 || (ENABLE_OP_KEY_MOUSE_BUTTON_2 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_2 != NO)
#	error "You need to decide if OP_KEY_MOUSE_BUTTON_2 (Button2) should be enabled."
#endif // !defined ENABLE_OP_KEY_MOUSE_BUTTON_2 || (ENABLE_OP_KEY_MOUSE_BUTTON_2 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_2 != NO)
#if ENABLE_OP_KEY_MOUSE_BUTTON_2 == YES
#	define OP_KEY_MOUSE_BUTTON_2_ENABLED 1
#endif // ENABLE_OP_KEY_MOUSE_BUTTON_2 == YES
#undef ENABLE_OP_KEY_MOUSE_BUTTON_2
#if !defined ENABLE_OP_KEY_MOUSE_BUTTON_3 || (ENABLE_OP_KEY_MOUSE_BUTTON_3 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_3 != NO)
#	error "You need to decide if OP_KEY_MOUSE_BUTTON_3 (Button3) should be enabled."
#endif // !defined ENABLE_OP_KEY_MOUSE_BUTTON_3 || (ENABLE_OP_KEY_MOUSE_BUTTON_3 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_3 != NO)
#if !defined ENABLE_OP_KEY_MOUSE_BUTTON_3 || (ENABLE_OP_KEY_MOUSE_BUTTON_3 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_3 != NO)
#	error "You need to decide if OP_KEY_MOUSE_BUTTON_3 (Button3) should be enabled."
#endif // !defined ENABLE_OP_KEY_MOUSE_BUTTON_3 || (ENABLE_OP_KEY_MOUSE_BUTTON_3 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_3 != NO)
#if ENABLE_OP_KEY_MOUSE_BUTTON_3 == YES
#	define OP_KEY_MOUSE_BUTTON_3_ENABLED 1
#endif // ENABLE_OP_KEY_MOUSE_BUTTON_3 == YES
#undef ENABLE_OP_KEY_MOUSE_BUTTON_3
#if !defined ENABLE_OP_KEY_MOUSE_BUTTON_4 || (ENABLE_OP_KEY_MOUSE_BUTTON_4 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_4 != NO)
#	error "You need to decide if OP_KEY_MOUSE_BUTTON_4 (Button4) should be enabled."
#endif // !defined ENABLE_OP_KEY_MOUSE_BUTTON_4 || (ENABLE_OP_KEY_MOUSE_BUTTON_4 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_4 != NO)
#if !defined ENABLE_OP_KEY_MOUSE_BUTTON_4 || (ENABLE_OP_KEY_MOUSE_BUTTON_4 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_4 != NO)
#	error "You need to decide if OP_KEY_MOUSE_BUTTON_4 (Button4) should be enabled."
#endif // !defined ENABLE_OP_KEY_MOUSE_BUTTON_4 || (ENABLE_OP_KEY_MOUSE_BUTTON_4 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_4 != NO)
#if ENABLE_OP_KEY_MOUSE_BUTTON_4 == YES
#	define OP_KEY_MOUSE_BUTTON_4_ENABLED 1
#endif // ENABLE_OP_KEY_MOUSE_BUTTON_4 == YES
#undef ENABLE_OP_KEY_MOUSE_BUTTON_4
#if !defined ENABLE_OP_KEY_MOUSE_BUTTON_5 || (ENABLE_OP_KEY_MOUSE_BUTTON_5 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_5 != NO)
#	error "You need to decide if OP_KEY_MOUSE_BUTTON_5 (Button5) should be enabled."
#endif // !defined ENABLE_OP_KEY_MOUSE_BUTTON_5 || (ENABLE_OP_KEY_MOUSE_BUTTON_5 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_5 != NO)
#if !defined ENABLE_OP_KEY_MOUSE_BUTTON_5 || (ENABLE_OP_KEY_MOUSE_BUTTON_5 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_5 != NO)
#	error "You need to decide if OP_KEY_MOUSE_BUTTON_5 (Button5) should be enabled."
#endif // !defined ENABLE_OP_KEY_MOUSE_BUTTON_5 || (ENABLE_OP_KEY_MOUSE_BUTTON_5 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_5 != NO)
#if ENABLE_OP_KEY_MOUSE_BUTTON_5 == YES
#	define OP_KEY_MOUSE_BUTTON_5_ENABLED 1
#endif // ENABLE_OP_KEY_MOUSE_BUTTON_5 == YES
#undef ENABLE_OP_KEY_MOUSE_BUTTON_5
#if !defined ENABLE_OP_KEY_MOUSE_BUTTON_6 || (ENABLE_OP_KEY_MOUSE_BUTTON_6 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_6 != NO)
#	error "You need to decide if OP_KEY_MOUSE_BUTTON_6 (Button6) should be enabled."
#endif // !defined ENABLE_OP_KEY_MOUSE_BUTTON_6 || (ENABLE_OP_KEY_MOUSE_BUTTON_6 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_6 != NO)
#if !defined ENABLE_OP_KEY_MOUSE_BUTTON_6 || (ENABLE_OP_KEY_MOUSE_BUTTON_6 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_6 != NO)
#	error "You need to decide if OP_KEY_MOUSE_BUTTON_6 (Button6) should be enabled."
#endif // !defined ENABLE_OP_KEY_MOUSE_BUTTON_6 || (ENABLE_OP_KEY_MOUSE_BUTTON_6 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_6 != NO)
#if ENABLE_OP_KEY_MOUSE_BUTTON_6 == YES
#	define OP_KEY_MOUSE_BUTTON_6_ENABLED 1
#endif // ENABLE_OP_KEY_MOUSE_BUTTON_6 == YES
#undef ENABLE_OP_KEY_MOUSE_BUTTON_6
#if !defined ENABLE_OP_KEY_MOUSE_BUTTON_7 || (ENABLE_OP_KEY_MOUSE_BUTTON_7 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_7 != NO)
#	error "You need to decide if OP_KEY_MOUSE_BUTTON_7 (Button7) should be enabled."
#endif // !defined ENABLE_OP_KEY_MOUSE_BUTTON_7 || (ENABLE_OP_KEY_MOUSE_BUTTON_7 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_7 != NO)
#if !defined ENABLE_OP_KEY_MOUSE_BUTTON_7 || (ENABLE_OP_KEY_MOUSE_BUTTON_7 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_7 != NO)
#	error "You need to decide if OP_KEY_MOUSE_BUTTON_7 (Button7) should be enabled."
#endif // !defined ENABLE_OP_KEY_MOUSE_BUTTON_7 || (ENABLE_OP_KEY_MOUSE_BUTTON_7 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_7 != NO)
#if ENABLE_OP_KEY_MOUSE_BUTTON_7 == YES
#	define OP_KEY_MOUSE_BUTTON_7_ENABLED 1
#endif // ENABLE_OP_KEY_MOUSE_BUTTON_7 == YES
#undef ENABLE_OP_KEY_MOUSE_BUTTON_7
#if !defined ENABLE_OP_KEY_MOUSE_BUTTON_8 || (ENABLE_OP_KEY_MOUSE_BUTTON_8 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_8 != NO)
#	error "You need to decide if OP_KEY_MOUSE_BUTTON_8 (Button8) should be enabled."
#endif // !defined ENABLE_OP_KEY_MOUSE_BUTTON_8 || (ENABLE_OP_KEY_MOUSE_BUTTON_8 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_8 != NO)
#if !defined ENABLE_OP_KEY_MOUSE_BUTTON_8 || (ENABLE_OP_KEY_MOUSE_BUTTON_8 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_8 != NO)
#	error "You need to decide if OP_KEY_MOUSE_BUTTON_8 (Button8) should be enabled."
#endif // !defined ENABLE_OP_KEY_MOUSE_BUTTON_8 || (ENABLE_OP_KEY_MOUSE_BUTTON_8 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_8 != NO)
#if ENABLE_OP_KEY_MOUSE_BUTTON_8 == YES
#	define OP_KEY_MOUSE_BUTTON_8_ENABLED 1
#endif // ENABLE_OP_KEY_MOUSE_BUTTON_8 == YES
#undef ENABLE_OP_KEY_MOUSE_BUTTON_8
#if !defined ENABLE_OP_KEY_MOUSE_BUTTON_9 || (ENABLE_OP_KEY_MOUSE_BUTTON_9 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_9 != NO)
#	error "You need to decide if OP_KEY_MOUSE_BUTTON_9 (Button9) should be enabled."
#endif // !defined ENABLE_OP_KEY_MOUSE_BUTTON_9 || (ENABLE_OP_KEY_MOUSE_BUTTON_9 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_9 != NO)
#if !defined ENABLE_OP_KEY_MOUSE_BUTTON_9 || (ENABLE_OP_KEY_MOUSE_BUTTON_9 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_9 != NO)
#	error "You need to decide if OP_KEY_MOUSE_BUTTON_9 (Button9) should be enabled."
#endif // !defined ENABLE_OP_KEY_MOUSE_BUTTON_9 || (ENABLE_OP_KEY_MOUSE_BUTTON_9 != YES && ENABLE_OP_KEY_MOUSE_BUTTON_9 != NO)
#if ENABLE_OP_KEY_MOUSE_BUTTON_9 == YES
#	define OP_KEY_MOUSE_BUTTON_9_ENABLED 1
#endif // ENABLE_OP_KEY_MOUSE_BUTTON_9 == YES
#undef ENABLE_OP_KEY_MOUSE_BUTTON_9
#if !defined ENABLE_OP_KEY_GESTURE_UP || (ENABLE_OP_KEY_GESTURE_UP != YES && ENABLE_OP_KEY_GESTURE_UP != NO)
#	error "You need to decide if OP_KEY_GESTURE_UP (GestureUp) should be enabled."
#endif // !defined ENABLE_OP_KEY_GESTURE_UP || (ENABLE_OP_KEY_GESTURE_UP != YES && ENABLE_OP_KEY_GESTURE_UP != NO)
#if !defined ENABLE_OP_KEY_GESTURE_UP || (ENABLE_OP_KEY_GESTURE_UP != YES && ENABLE_OP_KEY_GESTURE_UP != NO)
#	error "You need to decide if OP_KEY_GESTURE_UP (GestureUp) should be enabled."
#endif // !defined ENABLE_OP_KEY_GESTURE_UP || (ENABLE_OP_KEY_GESTURE_UP != YES && ENABLE_OP_KEY_GESTURE_UP != NO)
#if ENABLE_OP_KEY_GESTURE_UP == YES
#	define OP_KEY_GESTURE_UP_ENABLED 1
#endif // ENABLE_OP_KEY_GESTURE_UP == YES
#undef ENABLE_OP_KEY_GESTURE_UP
#if !defined ENABLE_OP_KEY_GESTURE_RIGHT || (ENABLE_OP_KEY_GESTURE_RIGHT != YES && ENABLE_OP_KEY_GESTURE_RIGHT != NO)
#	error "You need to decide if OP_KEY_GESTURE_RIGHT (GestureRight) should be enabled."
#endif // !defined ENABLE_OP_KEY_GESTURE_RIGHT || (ENABLE_OP_KEY_GESTURE_RIGHT != YES && ENABLE_OP_KEY_GESTURE_RIGHT != NO)
#if !defined ENABLE_OP_KEY_GESTURE_RIGHT || (ENABLE_OP_KEY_GESTURE_RIGHT != YES && ENABLE_OP_KEY_GESTURE_RIGHT != NO)
#	error "You need to decide if OP_KEY_GESTURE_RIGHT (GestureRight) should be enabled."
#endif // !defined ENABLE_OP_KEY_GESTURE_RIGHT || (ENABLE_OP_KEY_GESTURE_RIGHT != YES && ENABLE_OP_KEY_GESTURE_RIGHT != NO)
#if ENABLE_OP_KEY_GESTURE_RIGHT == YES
#	define OP_KEY_GESTURE_RIGHT_ENABLED 1
#endif // ENABLE_OP_KEY_GESTURE_RIGHT == YES
#undef ENABLE_OP_KEY_GESTURE_RIGHT
#if !defined ENABLE_OP_KEY_GESTURE_DOWN || (ENABLE_OP_KEY_GESTURE_DOWN != YES && ENABLE_OP_KEY_GESTURE_DOWN != NO)
#	error "You need to decide if OP_KEY_GESTURE_DOWN (GestureDown) should be enabled."
#endif // !defined ENABLE_OP_KEY_GESTURE_DOWN || (ENABLE_OP_KEY_GESTURE_DOWN != YES && ENABLE_OP_KEY_GESTURE_DOWN != NO)
#if !defined ENABLE_OP_KEY_GESTURE_DOWN || (ENABLE_OP_KEY_GESTURE_DOWN != YES && ENABLE_OP_KEY_GESTURE_DOWN != NO)
#	error "You need to decide if OP_KEY_GESTURE_DOWN (GestureDown) should be enabled."
#endif // !defined ENABLE_OP_KEY_GESTURE_DOWN || (ENABLE_OP_KEY_GESTURE_DOWN != YES && ENABLE_OP_KEY_GESTURE_DOWN != NO)
#if ENABLE_OP_KEY_GESTURE_DOWN == YES
#	define OP_KEY_GESTURE_DOWN_ENABLED 1
#endif // ENABLE_OP_KEY_GESTURE_DOWN == YES
#undef ENABLE_OP_KEY_GESTURE_DOWN
#if !defined ENABLE_OP_KEY_GESTURE_LEFT || (ENABLE_OP_KEY_GESTURE_LEFT != YES && ENABLE_OP_KEY_GESTURE_LEFT != NO)
#	error "You need to decide if OP_KEY_GESTURE_LEFT (GestureLeft) should be enabled."
#endif // !defined ENABLE_OP_KEY_GESTURE_LEFT || (ENABLE_OP_KEY_GESTURE_LEFT != YES && ENABLE_OP_KEY_GESTURE_LEFT != NO)
#if !defined ENABLE_OP_KEY_GESTURE_LEFT || (ENABLE_OP_KEY_GESTURE_LEFT != YES && ENABLE_OP_KEY_GESTURE_LEFT != NO)
#	error "You need to decide if OP_KEY_GESTURE_LEFT (GestureLeft) should be enabled."
#endif // !defined ENABLE_OP_KEY_GESTURE_LEFT || (ENABLE_OP_KEY_GESTURE_LEFT != YES && ENABLE_OP_KEY_GESTURE_LEFT != NO)
#if ENABLE_OP_KEY_GESTURE_LEFT == YES
#	define OP_KEY_GESTURE_LEFT_ENABLED 1
#endif // ENABLE_OP_KEY_GESTURE_LEFT == YES
#undef ENABLE_OP_KEY_GESTURE_LEFT
#if !defined ENABLE_OP_KEY_GESTURE_UP_LEFT || (ENABLE_OP_KEY_GESTURE_UP_LEFT != YES && ENABLE_OP_KEY_GESTURE_UP_LEFT != NO)
#	error "You need to decide if OP_KEY_GESTURE_UP_LEFT (GestureUpLeft) should be enabled."
#endif // !defined ENABLE_OP_KEY_GESTURE_UP_LEFT || (ENABLE_OP_KEY_GESTURE_UP_LEFT != YES && ENABLE_OP_KEY_GESTURE_UP_LEFT != NO)
#if !defined ENABLE_OP_KEY_GESTURE_UP_LEFT || (ENABLE_OP_KEY_GESTURE_UP_LEFT != YES && ENABLE_OP_KEY_GESTURE_UP_LEFT != NO)
#	error "You need to decide if OP_KEY_GESTURE_UP_LEFT (GestureUpLeft) should be enabled."
#endif // !defined ENABLE_OP_KEY_GESTURE_UP_LEFT || (ENABLE_OP_KEY_GESTURE_UP_LEFT != YES && ENABLE_OP_KEY_GESTURE_UP_LEFT != NO)
#if ENABLE_OP_KEY_GESTURE_UP_LEFT == YES
#	define OP_KEY_GESTURE_UP_LEFT_ENABLED 1
#endif // ENABLE_OP_KEY_GESTURE_UP_LEFT == YES
#undef ENABLE_OP_KEY_GESTURE_UP_LEFT
#if !defined ENABLE_OP_KEY_GESTURE_UP_RIGHT || (ENABLE_OP_KEY_GESTURE_UP_RIGHT != YES && ENABLE_OP_KEY_GESTURE_UP_RIGHT != NO)
#	error "You need to decide if OP_KEY_GESTURE_UP_RIGHT (GestureUpRight) should be enabled."
#endif // !defined ENABLE_OP_KEY_GESTURE_UP_RIGHT || (ENABLE_OP_KEY_GESTURE_UP_RIGHT != YES && ENABLE_OP_KEY_GESTURE_UP_RIGHT != NO)
#if !defined ENABLE_OP_KEY_GESTURE_UP_RIGHT || (ENABLE_OP_KEY_GESTURE_UP_RIGHT != YES && ENABLE_OP_KEY_GESTURE_UP_RIGHT != NO)
#	error "You need to decide if OP_KEY_GESTURE_UP_RIGHT (GestureUpRight) should be enabled."
#endif // !defined ENABLE_OP_KEY_GESTURE_UP_RIGHT || (ENABLE_OP_KEY_GESTURE_UP_RIGHT != YES && ENABLE_OP_KEY_GESTURE_UP_RIGHT != NO)
#if ENABLE_OP_KEY_GESTURE_UP_RIGHT == YES
#	define OP_KEY_GESTURE_UP_RIGHT_ENABLED 1
#endif // ENABLE_OP_KEY_GESTURE_UP_RIGHT == YES
#undef ENABLE_OP_KEY_GESTURE_UP_RIGHT
#if !defined ENABLE_OP_KEY_GESTURE_DOWN_LEFT || (ENABLE_OP_KEY_GESTURE_DOWN_LEFT != YES && ENABLE_OP_KEY_GESTURE_DOWN_LEFT != NO)
#	error "You need to decide if OP_KEY_GESTURE_DOWN_LEFT (GestureDownLeft) should be enabled."
#endif // !defined ENABLE_OP_KEY_GESTURE_DOWN_LEFT || (ENABLE_OP_KEY_GESTURE_DOWN_LEFT != YES && ENABLE_OP_KEY_GESTURE_DOWN_LEFT != NO)
#if !defined ENABLE_OP_KEY_GESTURE_DOWN_LEFT || (ENABLE_OP_KEY_GESTURE_DOWN_LEFT != YES && ENABLE_OP_KEY_GESTURE_DOWN_LEFT != NO)
#	error "You need to decide if OP_KEY_GESTURE_DOWN_LEFT (GestureDownLeft) should be enabled."
#endif // !defined ENABLE_OP_KEY_GESTURE_DOWN_LEFT || (ENABLE_OP_KEY_GESTURE_DOWN_LEFT != YES && ENABLE_OP_KEY_GESTURE_DOWN_LEFT != NO)
#if ENABLE_OP_KEY_GESTURE_DOWN_LEFT == YES
#	define OP_KEY_GESTURE_DOWN_LEFT_ENABLED 1
#endif // ENABLE_OP_KEY_GESTURE_DOWN_LEFT == YES
#undef ENABLE_OP_KEY_GESTURE_DOWN_LEFT
#if !defined ENABLE_OP_KEY_GESTURE_DOWN_RIGHT || (ENABLE_OP_KEY_GESTURE_DOWN_RIGHT != YES && ENABLE_OP_KEY_GESTURE_DOWN_RIGHT != NO)
#	error "You need to decide if OP_KEY_GESTURE_DOWN_RIGHT (GestureDownRight) should be enabled."
#endif // !defined ENABLE_OP_KEY_GESTURE_DOWN_RIGHT || (ENABLE_OP_KEY_GESTURE_DOWN_RIGHT != YES && ENABLE_OP_KEY_GESTURE_DOWN_RIGHT != NO)
#if !defined ENABLE_OP_KEY_GESTURE_DOWN_RIGHT || (ENABLE_OP_KEY_GESTURE_DOWN_RIGHT != YES && ENABLE_OP_KEY_GESTURE_DOWN_RIGHT != NO)
#	error "You need to decide if OP_KEY_GESTURE_DOWN_RIGHT (GestureDownRight) should be enabled."
#endif // !defined ENABLE_OP_KEY_GESTURE_DOWN_RIGHT || (ENABLE_OP_KEY_GESTURE_DOWN_RIGHT != YES && ENABLE_OP_KEY_GESTURE_DOWN_RIGHT != NO)
#if ENABLE_OP_KEY_GESTURE_DOWN_RIGHT == YES
#	define OP_KEY_GESTURE_DOWN_RIGHT_ENABLED 1
#endif // ENABLE_OP_KEY_GESTURE_DOWN_RIGHT == YES
#undef ENABLE_OP_KEY_GESTURE_DOWN_RIGHT
#if !defined ENABLE_OP_KEY_FLIP_BACK || (ENABLE_OP_KEY_FLIP_BACK != YES && ENABLE_OP_KEY_FLIP_BACK != NO)
#	error "You need to decide if OP_KEY_FLIP_BACK (FlipBack) should be enabled."
#endif // !defined ENABLE_OP_KEY_FLIP_BACK || (ENABLE_OP_KEY_FLIP_BACK != YES && ENABLE_OP_KEY_FLIP_BACK != NO)
#if !defined ENABLE_OP_KEY_FLIP_BACK || (ENABLE_OP_KEY_FLIP_BACK != YES && ENABLE_OP_KEY_FLIP_BACK != NO)
#	error "You need to decide if OP_KEY_FLIP_BACK (FlipBack) should be enabled."
#endif // !defined ENABLE_OP_KEY_FLIP_BACK || (ENABLE_OP_KEY_FLIP_BACK != YES && ENABLE_OP_KEY_FLIP_BACK != NO)
#if ENABLE_OP_KEY_FLIP_BACK == YES
#	define OP_KEY_FLIP_BACK_ENABLED 1
#endif // ENABLE_OP_KEY_FLIP_BACK == YES
#undef ENABLE_OP_KEY_FLIP_BACK
#if !defined ENABLE_OP_KEY_FLIP_FORWARD || (ENABLE_OP_KEY_FLIP_FORWARD != YES && ENABLE_OP_KEY_FLIP_FORWARD != NO)
#	error "You need to decide if OP_KEY_FLIP_FORWARD (FlipForward) should be enabled."
#endif // !defined ENABLE_OP_KEY_FLIP_FORWARD || (ENABLE_OP_KEY_FLIP_FORWARD != YES && ENABLE_OP_KEY_FLIP_FORWARD != NO)
#if !defined ENABLE_OP_KEY_FLIP_FORWARD || (ENABLE_OP_KEY_FLIP_FORWARD != YES && ENABLE_OP_KEY_FLIP_FORWARD != NO)
#	error "You need to decide if OP_KEY_FLIP_FORWARD (FlipForward) should be enabled."
#endif // !defined ENABLE_OP_KEY_FLIP_FORWARD || (ENABLE_OP_KEY_FLIP_FORWARD != YES && ENABLE_OP_KEY_FLIP_FORWARD != NO)
#if ENABLE_OP_KEY_FLIP_FORWARD == YES
#	define OP_KEY_FLIP_FORWARD_ENABLED 1
#endif // ENABLE_OP_KEY_FLIP_FORWARD == YES
#undef ENABLE_OP_KEY_FLIP_FORWARD
#if defined ENABLE_OP_KEY_LAST_INTERNAL && ENABLE_OP_KEY_LAST_INTERNAL != YES
#	error "You cannot disable the always-enabled OP_KEY_LAST_INTERNAL (InternalEnd)."
#	else
#undef ENABLE_OP_KEY_LAST_INTERNAL
#	define ENABLE_OP_KEY_LAST_INTERNAL YES
#endif // !defined ENABLE_OP_KEY_LAST_INTERNAL && ENABLE_OP_KEY_LAST_INTERNAL != YES
#if defined ENABLE_OP_KEY_LAST_INTERNAL && ENABLE_OP_KEY_LAST_INTERNAL != YES
#	error "You cannot disable the always-enabled OP_KEY_LAST_INTERNAL (InternalEnd)."
#	else
#undef ENABLE_OP_KEY_LAST_INTERNAL
#	define ENABLE_OP_KEY_LAST_INTERNAL YES
#endif // !defined ENABLE_OP_KEY_LAST_INTERNAL && ENABLE_OP_KEY_LAST_INTERNAL != YES
#if ENABLE_OP_KEY_LAST_INTERNAL == YES
#	define OP_KEY_LAST_INTERNAL_ENABLED 1
#endif // ENABLE_OP_KEY_LAST_INTERNAL == YES
#undef ENABLE_OP_KEY_LAST_INTERNAL
#if !defined ENABLE_OP_KEY_F25 || (ENABLE_OP_KEY_F25 != YES && ENABLE_OP_KEY_F25 != NO)
#	error "You need to decide if OP_KEY_F25 (F25) should be enabled."
#endif // !defined ENABLE_OP_KEY_F25 || (ENABLE_OP_KEY_F25 != YES && ENABLE_OP_KEY_F25 != NO)
#if !defined ENABLE_OP_KEY_F25 || (ENABLE_OP_KEY_F25 != YES && ENABLE_OP_KEY_F25 != NO)
#	error "You need to decide if OP_KEY_F25 (F25) should be enabled."
#endif // !defined ENABLE_OP_KEY_F25 || (ENABLE_OP_KEY_F25 != YES && ENABLE_OP_KEY_F25 != NO)
#if ENABLE_OP_KEY_F25 == YES
#	define OP_KEY_F25_ENABLED 1
#endif // ENABLE_OP_KEY_F25 == YES
#undef ENABLE_OP_KEY_F25
#if !defined ENABLE_OP_KEY_F26 || (ENABLE_OP_KEY_F26 != YES && ENABLE_OP_KEY_F26 != NO)
#	error "You need to decide if OP_KEY_F26 (F26) should be enabled."
#endif // !defined ENABLE_OP_KEY_F26 || (ENABLE_OP_KEY_F26 != YES && ENABLE_OP_KEY_F26 != NO)
#if !defined ENABLE_OP_KEY_F26 || (ENABLE_OP_KEY_F26 != YES && ENABLE_OP_KEY_F26 != NO)
#	error "You need to decide if OP_KEY_F26 (F26) should be enabled."
#endif // !defined ENABLE_OP_KEY_F26 || (ENABLE_OP_KEY_F26 != YES && ENABLE_OP_KEY_F26 != NO)
#if ENABLE_OP_KEY_F26 == YES
#	define OP_KEY_F26_ENABLED 1
#endif // ENABLE_OP_KEY_F26 == YES
#undef ENABLE_OP_KEY_F26
#if !defined ENABLE_OP_KEY_F27 || (ENABLE_OP_KEY_F27 != YES && ENABLE_OP_KEY_F27 != NO)
#	error "You need to decide if OP_KEY_F27 (F27) should be enabled."
#endif // !defined ENABLE_OP_KEY_F27 || (ENABLE_OP_KEY_F27 != YES && ENABLE_OP_KEY_F27 != NO)
#if !defined ENABLE_OP_KEY_F27 || (ENABLE_OP_KEY_F27 != YES && ENABLE_OP_KEY_F27 != NO)
#	error "You need to decide if OP_KEY_F27 (F27) should be enabled."
#endif // !defined ENABLE_OP_KEY_F27 || (ENABLE_OP_KEY_F27 != YES && ENABLE_OP_KEY_F27 != NO)
#if ENABLE_OP_KEY_F27 == YES
#	define OP_KEY_F27_ENABLED 1
#endif // ENABLE_OP_KEY_F27 == YES
#undef ENABLE_OP_KEY_F27
#if !defined ENABLE_OP_KEY_F28 || (ENABLE_OP_KEY_F28 != YES && ENABLE_OP_KEY_F28 != NO)
#	error "You need to decide if OP_KEY_F28 (F28) should be enabled."
#endif // !defined ENABLE_OP_KEY_F28 || (ENABLE_OP_KEY_F28 != YES && ENABLE_OP_KEY_F28 != NO)
#if !defined ENABLE_OP_KEY_F28 || (ENABLE_OP_KEY_F28 != YES && ENABLE_OP_KEY_F28 != NO)
#	error "You need to decide if OP_KEY_F28 (F28) should be enabled."
#endif // !defined ENABLE_OP_KEY_F28 || (ENABLE_OP_KEY_F28 != YES && ENABLE_OP_KEY_F28 != NO)
#if ENABLE_OP_KEY_F28 == YES
#	define OP_KEY_F28_ENABLED 1
#endif // ENABLE_OP_KEY_F28 == YES
#undef ENABLE_OP_KEY_F28
#if !defined ENABLE_OP_KEY_F29 || (ENABLE_OP_KEY_F29 != YES && ENABLE_OP_KEY_F29 != NO)
#	error "You need to decide if OP_KEY_F29 (F29) should be enabled."
#endif // !defined ENABLE_OP_KEY_F29 || (ENABLE_OP_KEY_F29 != YES && ENABLE_OP_KEY_F29 != NO)
#if !defined ENABLE_OP_KEY_F29 || (ENABLE_OP_KEY_F29 != YES && ENABLE_OP_KEY_F29 != NO)
#	error "You need to decide if OP_KEY_F29 (F29) should be enabled."
#endif // !defined ENABLE_OP_KEY_F29 || (ENABLE_OP_KEY_F29 != YES && ENABLE_OP_KEY_F29 != NO)
#if ENABLE_OP_KEY_F29 == YES
#	define OP_KEY_F29_ENABLED 1
#endif // ENABLE_OP_KEY_F29 == YES
#undef ENABLE_OP_KEY_F29
#if !defined ENABLE_OP_KEY_F30 || (ENABLE_OP_KEY_F30 != YES && ENABLE_OP_KEY_F30 != NO)
#	error "You need to decide if OP_KEY_F30 (F30) should be enabled."
#endif // !defined ENABLE_OP_KEY_F30 || (ENABLE_OP_KEY_F30 != YES && ENABLE_OP_KEY_F30 != NO)
#if !defined ENABLE_OP_KEY_F30 || (ENABLE_OP_KEY_F30 != YES && ENABLE_OP_KEY_F30 != NO)
#	error "You need to decide if OP_KEY_F30 (F30) should be enabled."
#endif // !defined ENABLE_OP_KEY_F30 || (ENABLE_OP_KEY_F30 != YES && ENABLE_OP_KEY_F30 != NO)
#if ENABLE_OP_KEY_F30 == YES
#	define OP_KEY_F30_ENABLED 1
#endif // ENABLE_OP_KEY_F30 == YES
#undef ENABLE_OP_KEY_F30
#if !defined ENABLE_OP_KEY_F31 || (ENABLE_OP_KEY_F31 != YES && ENABLE_OP_KEY_F31 != NO)
#	error "You need to decide if OP_KEY_F31 (F31) should be enabled."
#endif // !defined ENABLE_OP_KEY_F31 || (ENABLE_OP_KEY_F31 != YES && ENABLE_OP_KEY_F31 != NO)
#if !defined ENABLE_OP_KEY_F31 || (ENABLE_OP_KEY_F31 != YES && ENABLE_OP_KEY_F31 != NO)
#	error "You need to decide if OP_KEY_F31 (F31) should be enabled."
#endif // !defined ENABLE_OP_KEY_F31 || (ENABLE_OP_KEY_F31 != YES && ENABLE_OP_KEY_F31 != NO)
#if ENABLE_OP_KEY_F31 == YES
#	define OP_KEY_F31_ENABLED 1
#endif // ENABLE_OP_KEY_F31 == YES
#undef ENABLE_OP_KEY_F31
#if !defined ENABLE_OP_KEY_F32 || (ENABLE_OP_KEY_F32 != YES && ENABLE_OP_KEY_F32 != NO)
#	error "You need to decide if OP_KEY_F32 (F32) should be enabled."
#endif // !defined ENABLE_OP_KEY_F32 || (ENABLE_OP_KEY_F32 != YES && ENABLE_OP_KEY_F32 != NO)
#if !defined ENABLE_OP_KEY_F32 || (ENABLE_OP_KEY_F32 != YES && ENABLE_OP_KEY_F32 != NO)
#	error "You need to decide if OP_KEY_F32 (F32) should be enabled."
#endif // !defined ENABLE_OP_KEY_F32 || (ENABLE_OP_KEY_F32 != YES && ENABLE_OP_KEY_F32 != NO)
#if ENABLE_OP_KEY_F32 == YES
#	define OP_KEY_F32_ENABLED 1
#endif // ENABLE_OP_KEY_F32 == YES
#undef ENABLE_OP_KEY_F32
#if !defined ENABLE_OP_KEY_F33 || (ENABLE_OP_KEY_F33 != YES && ENABLE_OP_KEY_F33 != NO)
#	error "You need to decide if OP_KEY_F33 (F33) should be enabled."
#endif // !defined ENABLE_OP_KEY_F33 || (ENABLE_OP_KEY_F33 != YES && ENABLE_OP_KEY_F33 != NO)
#if !defined ENABLE_OP_KEY_F33 || (ENABLE_OP_KEY_F33 != YES && ENABLE_OP_KEY_F33 != NO)
#	error "You need to decide if OP_KEY_F33 (F33) should be enabled."
#endif // !defined ENABLE_OP_KEY_F33 || (ENABLE_OP_KEY_F33 != YES && ENABLE_OP_KEY_F33 != NO)
#if ENABLE_OP_KEY_F33 == YES
#	define OP_KEY_F33_ENABLED 1
#endif // ENABLE_OP_KEY_F33 == YES
#undef ENABLE_OP_KEY_F33
#if !defined ENABLE_OP_KEY_F34 || (ENABLE_OP_KEY_F34 != YES && ENABLE_OP_KEY_F34 != NO)
#	error "You need to decide if OP_KEY_F34 (F34) should be enabled."
#endif // !defined ENABLE_OP_KEY_F34 || (ENABLE_OP_KEY_F34 != YES && ENABLE_OP_KEY_F34 != NO)
#if !defined ENABLE_OP_KEY_F34 || (ENABLE_OP_KEY_F34 != YES && ENABLE_OP_KEY_F34 != NO)
#	error "You need to decide if OP_KEY_F34 (F34) should be enabled."
#endif // !defined ENABLE_OP_KEY_F34 || (ENABLE_OP_KEY_F34 != YES && ENABLE_OP_KEY_F34 != NO)
#if ENABLE_OP_KEY_F34 == YES
#	define OP_KEY_F34_ENABLED 1
#endif // ENABLE_OP_KEY_F34 == YES
#undef ENABLE_OP_KEY_F34
#if !defined ENABLE_OP_KEY_F35 || (ENABLE_OP_KEY_F35 != YES && ENABLE_OP_KEY_F35 != NO)
#	error "You need to decide if OP_KEY_F35 (F35) should be enabled."
#endif // !defined ENABLE_OP_KEY_F35 || (ENABLE_OP_KEY_F35 != YES && ENABLE_OP_KEY_F35 != NO)
#if !defined ENABLE_OP_KEY_F35 || (ENABLE_OP_KEY_F35 != YES && ENABLE_OP_KEY_F35 != NO)
#	error "You need to decide if OP_KEY_F35 (F35) should be enabled."
#endif // !defined ENABLE_OP_KEY_F35 || (ENABLE_OP_KEY_F35 != YES && ENABLE_OP_KEY_F35 != NO)
#if ENABLE_OP_KEY_F35 == YES
#	define OP_KEY_F35_ENABLED 1
#endif // ENABLE_OP_KEY_F35 == YES
#undef ENABLE_OP_KEY_F35
#if !defined ENABLE_OP_KEY_F36 || (ENABLE_OP_KEY_F36 != YES && ENABLE_OP_KEY_F36 != NO)
#	error "You need to decide if OP_KEY_F36 (F36) should be enabled."
#endif // !defined ENABLE_OP_KEY_F36 || (ENABLE_OP_KEY_F36 != YES && ENABLE_OP_KEY_F36 != NO)
#if !defined ENABLE_OP_KEY_F36 || (ENABLE_OP_KEY_F36 != YES && ENABLE_OP_KEY_F36 != NO)
#	error "You need to decide if OP_KEY_F36 (F36) should be enabled."
#endif // !defined ENABLE_OP_KEY_F36 || (ENABLE_OP_KEY_F36 != YES && ENABLE_OP_KEY_F36 != NO)
#if ENABLE_OP_KEY_F36 == YES
#	define OP_KEY_F36_ENABLED 1
#endif // ENABLE_OP_KEY_F36 == YES
#undef ENABLE_OP_KEY_F36
#if !defined ENABLE_OP_KEY_VOLUMEUP || (ENABLE_OP_KEY_VOLUMEUP != YES && ENABLE_OP_KEY_VOLUMEUP != NO)
#	error "You need to decide if OP_KEY_VOLUMEUP (RC_VOLUMEUP) should be enabled."
#endif // !defined ENABLE_OP_KEY_VOLUMEUP || (ENABLE_OP_KEY_VOLUMEUP != YES && ENABLE_OP_KEY_VOLUMEUP != NO)
#if !defined ENABLE_OP_KEY_VOLUMEUP || (ENABLE_OP_KEY_VOLUMEUP != YES && ENABLE_OP_KEY_VOLUMEUP != NO)
#	error "You need to decide if OP_KEY_VOLUMEUP (RC_VOLUMEUP) should be enabled."
#endif // !defined ENABLE_OP_KEY_VOLUMEUP || (ENABLE_OP_KEY_VOLUMEUP != YES && ENABLE_OP_KEY_VOLUMEUP != NO)
#if ENABLE_OP_KEY_VOLUMEUP == YES
#	define OP_KEY_VOLUMEUP_ENABLED 1
#endif // ENABLE_OP_KEY_VOLUMEUP == YES
#undef ENABLE_OP_KEY_VOLUMEUP
#if !defined ENABLE_OP_KEY_VOLUMEDOWN || (ENABLE_OP_KEY_VOLUMEDOWN != YES && ENABLE_OP_KEY_VOLUMEDOWN != NO)
#	error "You need to decide if OP_KEY_VOLUMEDOWN (RC_VOLUMEDOWN) should be enabled."
#endif // !defined ENABLE_OP_KEY_VOLUMEDOWN || (ENABLE_OP_KEY_VOLUMEDOWN != YES && ENABLE_OP_KEY_VOLUMEDOWN != NO)
#if !defined ENABLE_OP_KEY_VOLUMEDOWN || (ENABLE_OP_KEY_VOLUMEDOWN != YES && ENABLE_OP_KEY_VOLUMEDOWN != NO)
#	error "You need to decide if OP_KEY_VOLUMEDOWN (RC_VOLUMEDOWN) should be enabled."
#endif // !defined ENABLE_OP_KEY_VOLUMEDOWN || (ENABLE_OP_KEY_VOLUMEDOWN != YES && ENABLE_OP_KEY_VOLUMEDOWN != NO)
#if ENABLE_OP_KEY_VOLUMEDOWN == YES
#	define OP_KEY_VOLUMEDOWN_ENABLED 1
#endif // ENABLE_OP_KEY_VOLUMEDOWN == YES
#undef ENABLE_OP_KEY_VOLUMEDOWN
#if !defined ENABLE_OP_KEY_MENU || (ENABLE_OP_KEY_MENU != YES && ENABLE_OP_KEY_MENU != NO)
#	error "You need to decide if OP_KEY_MENU (RC_MENU) should be enabled."
#endif // !defined ENABLE_OP_KEY_MENU || (ENABLE_OP_KEY_MENU != YES && ENABLE_OP_KEY_MENU != NO)
#if !defined ENABLE_OP_KEY_MENU || (ENABLE_OP_KEY_MENU != YES && ENABLE_OP_KEY_MENU != NO)
#	error "You need to decide if OP_KEY_MENU (RC_MENU) should be enabled."
#endif // !defined ENABLE_OP_KEY_MENU || (ENABLE_OP_KEY_MENU != YES && ENABLE_OP_KEY_MENU != NO)
#if ENABLE_OP_KEY_MENU == YES
#	define OP_KEY_MENU_ENABLED 1
#endif // ENABLE_OP_KEY_MENU == YES
#undef ENABLE_OP_KEY_MENU
#if !defined ENABLE_OP_KEY_PLAY || (ENABLE_OP_KEY_PLAY != YES && ENABLE_OP_KEY_PLAY != NO)
#	error "You need to decide if OP_KEY_PLAY (RC_PLAY) should be enabled."
#endif // !defined ENABLE_OP_KEY_PLAY || (ENABLE_OP_KEY_PLAY != YES && ENABLE_OP_KEY_PLAY != NO)
#if !defined ENABLE_OP_KEY_PLAY || (ENABLE_OP_KEY_PLAY != YES && ENABLE_OP_KEY_PLAY != NO)
#	error "You need to decide if OP_KEY_PLAY (RC_PLAY) should be enabled."
#endif // !defined ENABLE_OP_KEY_PLAY || (ENABLE_OP_KEY_PLAY != YES && ENABLE_OP_KEY_PLAY != NO)
#if ENABLE_OP_KEY_PLAY == YES
#	define OP_KEY_PLAY_ENABLED 1
#endif // ENABLE_OP_KEY_PLAY == YES
#undef ENABLE_OP_KEY_PLAY
#if !defined ENABLE_OP_KEY_NEXT || (ENABLE_OP_KEY_NEXT != YES && ENABLE_OP_KEY_NEXT != NO)
#	error "You need to decide if OP_KEY_NEXT (RC_NEXT) should be enabled."
#endif // !defined ENABLE_OP_KEY_NEXT || (ENABLE_OP_KEY_NEXT != YES && ENABLE_OP_KEY_NEXT != NO)
#if !defined ENABLE_OP_KEY_NEXT || (ENABLE_OP_KEY_NEXT != YES && ENABLE_OP_KEY_NEXT != NO)
#	error "You need to decide if OP_KEY_NEXT (RC_NEXT) should be enabled."
#endif // !defined ENABLE_OP_KEY_NEXT || (ENABLE_OP_KEY_NEXT != YES && ENABLE_OP_KEY_NEXT != NO)
#if ENABLE_OP_KEY_NEXT == YES
#	define OP_KEY_NEXT_ENABLED 1
#endif // ENABLE_OP_KEY_NEXT == YES
#undef ENABLE_OP_KEY_NEXT
#if !defined ENABLE_OP_KEY_PREVIOUS || (ENABLE_OP_KEY_PREVIOUS != YES && ENABLE_OP_KEY_PREVIOUS != NO)
#	error "You need to decide if OP_KEY_PREVIOUS (RC_PREVIOUS) should be enabled."
#endif // !defined ENABLE_OP_KEY_PREVIOUS || (ENABLE_OP_KEY_PREVIOUS != YES && ENABLE_OP_KEY_PREVIOUS != NO)
#if !defined ENABLE_OP_KEY_PREVIOUS || (ENABLE_OP_KEY_PREVIOUS != YES && ENABLE_OP_KEY_PREVIOUS != NO)
#	error "You need to decide if OP_KEY_PREVIOUS (RC_PREVIOUS) should be enabled."
#endif // !defined ENABLE_OP_KEY_PREVIOUS || (ENABLE_OP_KEY_PREVIOUS != YES && ENABLE_OP_KEY_PREVIOUS != NO)
#if ENABLE_OP_KEY_PREVIOUS == YES
#	define OP_KEY_PREVIOUS_ENABLED 1
#endif // ENABLE_OP_KEY_PREVIOUS == YES
#undef ENABLE_OP_KEY_PREVIOUS
#if !defined ENABLE_OP_KEY_FASTFORWARD || (ENABLE_OP_KEY_FASTFORWARD != YES && ENABLE_OP_KEY_FASTFORWARD != NO)
#	error "You need to decide if OP_KEY_FASTFORWARD (RC_FASTFORWARD) should be enabled."
#endif // !defined ENABLE_OP_KEY_FASTFORWARD || (ENABLE_OP_KEY_FASTFORWARD != YES && ENABLE_OP_KEY_FASTFORWARD != NO)
#if !defined ENABLE_OP_KEY_FASTFORWARD || (ENABLE_OP_KEY_FASTFORWARD != YES && ENABLE_OP_KEY_FASTFORWARD != NO)
#	error "You need to decide if OP_KEY_FASTFORWARD (RC_FASTFORWARD) should be enabled."
#endif // !defined ENABLE_OP_KEY_FASTFORWARD || (ENABLE_OP_KEY_FASTFORWARD != YES && ENABLE_OP_KEY_FASTFORWARD != NO)
#if ENABLE_OP_KEY_FASTFORWARD == YES
#	define OP_KEY_FASTFORWARD_ENABLED 1
#endif // ENABLE_OP_KEY_FASTFORWARD == YES
#undef ENABLE_OP_KEY_FASTFORWARD
#if !defined ENABLE_OP_KEY_REWIND || (ENABLE_OP_KEY_REWIND != YES && ENABLE_OP_KEY_REWIND != NO)
#	error "You need to decide if OP_KEY_REWIND (RC_REWIND) should be enabled."
#endif // !defined ENABLE_OP_KEY_REWIND || (ENABLE_OP_KEY_REWIND != YES && ENABLE_OP_KEY_REWIND != NO)
#if !defined ENABLE_OP_KEY_REWIND || (ENABLE_OP_KEY_REWIND != YES && ENABLE_OP_KEY_REWIND != NO)
#	error "You need to decide if OP_KEY_REWIND (RC_REWIND) should be enabled."
#endif // !defined ENABLE_OP_KEY_REWIND || (ENABLE_OP_KEY_REWIND != YES && ENABLE_OP_KEY_REWIND != NO)
#if ENABLE_OP_KEY_REWIND == YES
#	define OP_KEY_REWIND_ENABLED 1
#endif // ENABLE_OP_KEY_REWIND == YES
#undef ENABLE_OP_KEY_REWIND
#if !defined ENABLE_OP_KEY_STOP || (ENABLE_OP_KEY_STOP != YES && ENABLE_OP_KEY_STOP != NO)
#	error "You need to decide if OP_KEY_STOP (RC_STOP) should be enabled."
#endif // !defined ENABLE_OP_KEY_STOP || (ENABLE_OP_KEY_STOP != YES && ENABLE_OP_KEY_STOP != NO)
#if !defined ENABLE_OP_KEY_STOP || (ENABLE_OP_KEY_STOP != YES && ENABLE_OP_KEY_STOP != NO)
#	error "You need to decide if OP_KEY_STOP (RC_STOP) should be enabled."
#endif // !defined ENABLE_OP_KEY_STOP || (ENABLE_OP_KEY_STOP != YES && ENABLE_OP_KEY_STOP != NO)
#if ENABLE_OP_KEY_STOP == YES
#	define OP_KEY_STOP_ENABLED 1
#endif // ENABLE_OP_KEY_STOP == YES
#undef ENABLE_OP_KEY_STOP
#if !defined ENABLE_OP_KEY_REDO || (ENABLE_OP_KEY_REDO != YES && ENABLE_OP_KEY_REDO != NO)
#	error "You need to decide if OP_KEY_REDO (Redo) should be enabled."
#endif // !defined ENABLE_OP_KEY_REDO || (ENABLE_OP_KEY_REDO != YES && ENABLE_OP_KEY_REDO != NO)
#if !defined ENABLE_OP_KEY_REDO || (ENABLE_OP_KEY_REDO != YES && ENABLE_OP_KEY_REDO != NO)
#	error "You need to decide if OP_KEY_REDO (Redo) should be enabled."
#endif // !defined ENABLE_OP_KEY_REDO || (ENABLE_OP_KEY_REDO != YES && ENABLE_OP_KEY_REDO != NO)
#if ENABLE_OP_KEY_REDO == YES
#	define OP_KEY_REDO_ENABLED 1
#endif // ENABLE_OP_KEY_REDO == YES
#undef ENABLE_OP_KEY_REDO
#if !defined ENABLE_OP_KEY_UNDO || (ENABLE_OP_KEY_UNDO != YES && ENABLE_OP_KEY_UNDO != NO)
#	error "You need to decide if OP_KEY_UNDO (Undo) should be enabled."
#endif // !defined ENABLE_OP_KEY_UNDO || (ENABLE_OP_KEY_UNDO != YES && ENABLE_OP_KEY_UNDO != NO)
#if !defined ENABLE_OP_KEY_UNDO || (ENABLE_OP_KEY_UNDO != YES && ENABLE_OP_KEY_UNDO != NO)
#	error "You need to decide if OP_KEY_UNDO (Undo) should be enabled."
#endif // !defined ENABLE_OP_KEY_UNDO || (ENABLE_OP_KEY_UNDO != YES && ENABLE_OP_KEY_UNDO != NO)
#if ENABLE_OP_KEY_UNDO == YES
#	define OP_KEY_UNDO_ENABLED 1
#endif // ENABLE_OP_KEY_UNDO == YES
#undef ENABLE_OP_KEY_UNDO
#if !defined ENABLE_OP_KEY_PROPERITES || (ENABLE_OP_KEY_PROPERITES != YES && ENABLE_OP_KEY_PROPERITES != NO)
#	error "You need to decide if OP_KEY_PROPERITES (Properites) should be enabled."
#endif // !defined ENABLE_OP_KEY_PROPERITES || (ENABLE_OP_KEY_PROPERITES != YES && ENABLE_OP_KEY_PROPERITES != NO)
#if !defined ENABLE_OP_KEY_PROPERITES || (ENABLE_OP_KEY_PROPERITES != YES && ENABLE_OP_KEY_PROPERITES != NO)
#	error "You need to decide if OP_KEY_PROPERITES (Properites) should be enabled."
#endif // !defined ENABLE_OP_KEY_PROPERITES || (ENABLE_OP_KEY_PROPERITES != YES && ENABLE_OP_KEY_PROPERITES != NO)
#if ENABLE_OP_KEY_PROPERITES == YES
#	define OP_KEY_PROPERITES_ENABLED 1
#endif // ENABLE_OP_KEY_PROPERITES == YES
#undef ENABLE_OP_KEY_PROPERITES
#if !defined ENABLE_OP_KEY_FRONT || (ENABLE_OP_KEY_FRONT != YES && ENABLE_OP_KEY_FRONT != NO)
#	error "You need to decide if OP_KEY_FRONT (Front) should be enabled."
#endif // !defined ENABLE_OP_KEY_FRONT || (ENABLE_OP_KEY_FRONT != YES && ENABLE_OP_KEY_FRONT != NO)
#if !defined ENABLE_OP_KEY_FRONT || (ENABLE_OP_KEY_FRONT != YES && ENABLE_OP_KEY_FRONT != NO)
#	error "You need to decide if OP_KEY_FRONT (Front) should be enabled."
#endif // !defined ENABLE_OP_KEY_FRONT || (ENABLE_OP_KEY_FRONT != YES && ENABLE_OP_KEY_FRONT != NO)
#if ENABLE_OP_KEY_FRONT == YES
#	define OP_KEY_FRONT_ENABLED 1
#endif // ENABLE_OP_KEY_FRONT == YES
#undef ENABLE_OP_KEY_FRONT
#if !defined ENABLE_OP_KEY_LEFT_TAB || (ENABLE_OP_KEY_LEFT_TAB != YES && ENABLE_OP_KEY_LEFT_TAB != NO)
#	error "You need to decide if OP_KEY_LEFT_TAB (LeftTab) should be enabled."
#endif // !defined ENABLE_OP_KEY_LEFT_TAB || (ENABLE_OP_KEY_LEFT_TAB != YES && ENABLE_OP_KEY_LEFT_TAB != NO)
#if !defined ENABLE_OP_KEY_LEFT_TAB || (ENABLE_OP_KEY_LEFT_TAB != YES && ENABLE_OP_KEY_LEFT_TAB != NO)
#	error "You need to decide if OP_KEY_LEFT_TAB (LeftTab) should be enabled."
#endif // !defined ENABLE_OP_KEY_LEFT_TAB || (ENABLE_OP_KEY_LEFT_TAB != YES && ENABLE_OP_KEY_LEFT_TAB != NO)
#if ENABLE_OP_KEY_LEFT_TAB == YES
#	define OP_KEY_LEFT_TAB_ENABLED 1
#endif // ENABLE_OP_KEY_LEFT_TAB == YES
#undef ENABLE_OP_KEY_LEFT_TAB
#if !defined ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_UP || (ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_UP != YES && ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_UP != NO)
#	error "You need to decide if OP_KEY_XF86XK_MON_BRIGHTNESS_UP (MonBrightnessUp) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_UP || (ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_UP != YES && ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_UP != NO)
#if !defined ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_UP || (ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_UP != YES && ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_UP != NO)
#	error "You need to decide if OP_KEY_XF86XK_MON_BRIGHTNESS_UP (MonBrightnessUp) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_UP || (ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_UP != YES && ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_UP != NO)
#if ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_UP == YES
#	define OP_KEY_XF86XK_MON_BRIGHTNESS_UP_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_UP == YES
#undef ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_UP
#if !defined ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN || (ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN != YES && ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN != NO)
#	error "You need to decide if OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN (MonBrightnessDown) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN || (ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN != YES && ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN != NO)
#if !defined ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN || (ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN != YES && ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN != NO)
#	error "You need to decide if OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN (MonBrightnessDown) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN || (ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN != YES && ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN != NO)
#if ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN == YES
#	define OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN == YES
#undef ENABLE_OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN
#if !defined ENABLE_OP_KEY_XF86XK_KBD_LIGHT_ON_OFF || (ENABLE_OP_KEY_XF86XK_KBD_LIGHT_ON_OFF != YES && ENABLE_OP_KEY_XF86XK_KBD_LIGHT_ON_OFF != NO)
#	error "You need to decide if OP_KEY_XF86XK_KBD_LIGHT_ON_OFF (KbdLightOnOff) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_KBD_LIGHT_ON_OFF || (ENABLE_OP_KEY_XF86XK_KBD_LIGHT_ON_OFF != YES && ENABLE_OP_KEY_XF86XK_KBD_LIGHT_ON_OFF != NO)
#if !defined ENABLE_OP_KEY_XF86XK_KBD_LIGHT_ON_OFF || (ENABLE_OP_KEY_XF86XK_KBD_LIGHT_ON_OFF != YES && ENABLE_OP_KEY_XF86XK_KBD_LIGHT_ON_OFF != NO)
#	error "You need to decide if OP_KEY_XF86XK_KBD_LIGHT_ON_OFF (KbdLightOnOff) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_KBD_LIGHT_ON_OFF || (ENABLE_OP_KEY_XF86XK_KBD_LIGHT_ON_OFF != YES && ENABLE_OP_KEY_XF86XK_KBD_LIGHT_ON_OFF != NO)
#if ENABLE_OP_KEY_XF86XK_KBD_LIGHT_ON_OFF == YES
#	define OP_KEY_XF86XK_KBD_LIGHT_ON_OFF_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_KBD_LIGHT_ON_OFF == YES
#undef ENABLE_OP_KEY_XF86XK_KBD_LIGHT_ON_OFF
#if !defined ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_UP || (ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_UP != YES && ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_UP != NO)
#	error "You need to decide if OP_KEY_XF86XK_KBD_BRIGHTNESS_UP (KbdBrightnessUp) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_UP || (ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_UP != YES && ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_UP != NO)
#if !defined ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_UP || (ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_UP != YES && ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_UP != NO)
#	error "You need to decide if OP_KEY_XF86XK_KBD_BRIGHTNESS_UP (KbdBrightnessUp) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_UP || (ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_UP != YES && ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_UP != NO)
#if ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_UP == YES
#	define OP_KEY_XF86XK_KBD_BRIGHTNESS_UP_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_UP == YES
#undef ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_UP
#if !defined ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN || (ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN != YES && ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN != NO)
#	error "You need to decide if OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN (KbdBrightnessDown) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN || (ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN != YES && ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN != NO)
#if !defined ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN || (ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN != YES && ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN != NO)
#	error "You need to decide if OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN (KbdBrightnessDown) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN || (ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN != YES && ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN != NO)
#if ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN == YES
#	define OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN == YES
#undef ENABLE_OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN
#if !defined ENABLE_OP_KEY_XF86XK_STANDBY || (ENABLE_OP_KEY_XF86XK_STANDBY != YES && ENABLE_OP_KEY_XF86XK_STANDBY != NO)
#	error "You need to decide if OP_KEY_XF86XK_STANDBY (Standby) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_STANDBY || (ENABLE_OP_KEY_XF86XK_STANDBY != YES && ENABLE_OP_KEY_XF86XK_STANDBY != NO)
#if !defined ENABLE_OP_KEY_XF86XK_STANDBY || (ENABLE_OP_KEY_XF86XK_STANDBY != YES && ENABLE_OP_KEY_XF86XK_STANDBY != NO)
#	error "You need to decide if OP_KEY_XF86XK_STANDBY (Standby) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_STANDBY || (ENABLE_OP_KEY_XF86XK_STANDBY != YES && ENABLE_OP_KEY_XF86XK_STANDBY != NO)
#if ENABLE_OP_KEY_XF86XK_STANDBY == YES
#	define OP_KEY_XF86XK_STANDBY_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_STANDBY == YES
#undef ENABLE_OP_KEY_XF86XK_STANDBY
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_LOWER_VOLUME || (ENABLE_OP_KEY_XF86XK_AUDIO_LOWER_VOLUME != YES && ENABLE_OP_KEY_XF86XK_AUDIO_LOWER_VOLUME != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_LOWER_VOLUME (AudioLowerVolume) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_LOWER_VOLUME || (ENABLE_OP_KEY_XF86XK_AUDIO_LOWER_VOLUME != YES && ENABLE_OP_KEY_XF86XK_AUDIO_LOWER_VOLUME != NO)
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_LOWER_VOLUME || (ENABLE_OP_KEY_XF86XK_AUDIO_LOWER_VOLUME != YES && ENABLE_OP_KEY_XF86XK_AUDIO_LOWER_VOLUME != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_LOWER_VOLUME (AudioLowerVolume) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_LOWER_VOLUME || (ENABLE_OP_KEY_XF86XK_AUDIO_LOWER_VOLUME != YES && ENABLE_OP_KEY_XF86XK_AUDIO_LOWER_VOLUME != NO)
#if ENABLE_OP_KEY_XF86XK_AUDIO_LOWER_VOLUME == YES
#	define OP_KEY_XF86XK_AUDIO_LOWER_VOLUME_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_AUDIO_LOWER_VOLUME == YES
#undef ENABLE_OP_KEY_XF86XK_AUDIO_LOWER_VOLUME
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_MUTE || (ENABLE_OP_KEY_XF86XK_AUDIO_MUTE != YES && ENABLE_OP_KEY_XF86XK_AUDIO_MUTE != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_MUTE (AudioMute) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_MUTE || (ENABLE_OP_KEY_XF86XK_AUDIO_MUTE != YES && ENABLE_OP_KEY_XF86XK_AUDIO_MUTE != NO)
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_MUTE || (ENABLE_OP_KEY_XF86XK_AUDIO_MUTE != YES && ENABLE_OP_KEY_XF86XK_AUDIO_MUTE != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_MUTE (AudioMute) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_MUTE || (ENABLE_OP_KEY_XF86XK_AUDIO_MUTE != YES && ENABLE_OP_KEY_XF86XK_AUDIO_MUTE != NO)
#if ENABLE_OP_KEY_XF86XK_AUDIO_MUTE == YES
#	define OP_KEY_XF86XK_AUDIO_MUTE_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_AUDIO_MUTE == YES
#undef ENABLE_OP_KEY_XF86XK_AUDIO_MUTE
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_RAISE_VOLUME || (ENABLE_OP_KEY_XF86XK_AUDIO_RAISE_VOLUME != YES && ENABLE_OP_KEY_XF86XK_AUDIO_RAISE_VOLUME != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_RAISE_VOLUME (AudioRaiseVolume) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_RAISE_VOLUME || (ENABLE_OP_KEY_XF86XK_AUDIO_RAISE_VOLUME != YES && ENABLE_OP_KEY_XF86XK_AUDIO_RAISE_VOLUME != NO)
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_RAISE_VOLUME || (ENABLE_OP_KEY_XF86XK_AUDIO_RAISE_VOLUME != YES && ENABLE_OP_KEY_XF86XK_AUDIO_RAISE_VOLUME != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_RAISE_VOLUME (AudioRaiseVolume) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_RAISE_VOLUME || (ENABLE_OP_KEY_XF86XK_AUDIO_RAISE_VOLUME != YES && ENABLE_OP_KEY_XF86XK_AUDIO_RAISE_VOLUME != NO)
#if ENABLE_OP_KEY_XF86XK_AUDIO_RAISE_VOLUME == YES
#	define OP_KEY_XF86XK_AUDIO_RAISE_VOLUME_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_AUDIO_RAISE_VOLUME == YES
#undef ENABLE_OP_KEY_XF86XK_AUDIO_RAISE_VOLUME
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_PLAY || (ENABLE_OP_KEY_XF86XK_AUDIO_PLAY != YES && ENABLE_OP_KEY_XF86XK_AUDIO_PLAY != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_PLAY (AudioPlay) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_PLAY || (ENABLE_OP_KEY_XF86XK_AUDIO_PLAY != YES && ENABLE_OP_KEY_XF86XK_AUDIO_PLAY != NO)
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_PLAY || (ENABLE_OP_KEY_XF86XK_AUDIO_PLAY != YES && ENABLE_OP_KEY_XF86XK_AUDIO_PLAY != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_PLAY (AudioPlay) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_PLAY || (ENABLE_OP_KEY_XF86XK_AUDIO_PLAY != YES && ENABLE_OP_KEY_XF86XK_AUDIO_PLAY != NO)
#if ENABLE_OP_KEY_XF86XK_AUDIO_PLAY == YES
#	define OP_KEY_XF86XK_AUDIO_PLAY_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_AUDIO_PLAY == YES
#undef ENABLE_OP_KEY_XF86XK_AUDIO_PLAY
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_STOP || (ENABLE_OP_KEY_XF86XK_AUDIO_STOP != YES && ENABLE_OP_KEY_XF86XK_AUDIO_STOP != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_STOP (AudioStop) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_STOP || (ENABLE_OP_KEY_XF86XK_AUDIO_STOP != YES && ENABLE_OP_KEY_XF86XK_AUDIO_STOP != NO)
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_STOP || (ENABLE_OP_KEY_XF86XK_AUDIO_STOP != YES && ENABLE_OP_KEY_XF86XK_AUDIO_STOP != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_STOP (AudioStop) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_STOP || (ENABLE_OP_KEY_XF86XK_AUDIO_STOP != YES && ENABLE_OP_KEY_XF86XK_AUDIO_STOP != NO)
#if ENABLE_OP_KEY_XF86XK_AUDIO_STOP == YES
#	define OP_KEY_XF86XK_AUDIO_STOP_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_AUDIO_STOP == YES
#undef ENABLE_OP_KEY_XF86XK_AUDIO_STOP
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_PREV || (ENABLE_OP_KEY_XF86XK_AUDIO_PREV != YES && ENABLE_OP_KEY_XF86XK_AUDIO_PREV != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_PREV (AudioPrev) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_PREV || (ENABLE_OP_KEY_XF86XK_AUDIO_PREV != YES && ENABLE_OP_KEY_XF86XK_AUDIO_PREV != NO)
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_PREV || (ENABLE_OP_KEY_XF86XK_AUDIO_PREV != YES && ENABLE_OP_KEY_XF86XK_AUDIO_PREV != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_PREV (AudioPrev) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_PREV || (ENABLE_OP_KEY_XF86XK_AUDIO_PREV != YES && ENABLE_OP_KEY_XF86XK_AUDIO_PREV != NO)
#if ENABLE_OP_KEY_XF86XK_AUDIO_PREV == YES
#	define OP_KEY_XF86XK_AUDIO_PREV_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_AUDIO_PREV == YES
#undef ENABLE_OP_KEY_XF86XK_AUDIO_PREV
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_NEXT || (ENABLE_OP_KEY_XF86XK_AUDIO_NEXT != YES && ENABLE_OP_KEY_XF86XK_AUDIO_NEXT != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_NEXT (AudioNext) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_NEXT || (ENABLE_OP_KEY_XF86XK_AUDIO_NEXT != YES && ENABLE_OP_KEY_XF86XK_AUDIO_NEXT != NO)
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_NEXT || (ENABLE_OP_KEY_XF86XK_AUDIO_NEXT != YES && ENABLE_OP_KEY_XF86XK_AUDIO_NEXT != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_NEXT (AudioNext) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_NEXT || (ENABLE_OP_KEY_XF86XK_AUDIO_NEXT != YES && ENABLE_OP_KEY_XF86XK_AUDIO_NEXT != NO)
#if ENABLE_OP_KEY_XF86XK_AUDIO_NEXT == YES
#	define OP_KEY_XF86XK_AUDIO_NEXT_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_AUDIO_NEXT == YES
#undef ENABLE_OP_KEY_XF86XK_AUDIO_NEXT
#if !defined ENABLE_OP_KEY_XF86XK_HOME_PAGE || (ENABLE_OP_KEY_XF86XK_HOME_PAGE != YES && ENABLE_OP_KEY_XF86XK_HOME_PAGE != NO)
#	error "You need to decide if OP_KEY_XF86XK_HOME_PAGE (HomePage) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_HOME_PAGE || (ENABLE_OP_KEY_XF86XK_HOME_PAGE != YES && ENABLE_OP_KEY_XF86XK_HOME_PAGE != NO)
#if !defined ENABLE_OP_KEY_XF86XK_HOME_PAGE || (ENABLE_OP_KEY_XF86XK_HOME_PAGE != YES && ENABLE_OP_KEY_XF86XK_HOME_PAGE != NO)
#	error "You need to decide if OP_KEY_XF86XK_HOME_PAGE (HomePage) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_HOME_PAGE || (ENABLE_OP_KEY_XF86XK_HOME_PAGE != YES && ENABLE_OP_KEY_XF86XK_HOME_PAGE != NO)
#if ENABLE_OP_KEY_XF86XK_HOME_PAGE == YES
#	define OP_KEY_XF86XK_HOME_PAGE_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_HOME_PAGE == YES
#undef ENABLE_OP_KEY_XF86XK_HOME_PAGE
#if !defined ENABLE_OP_KEY_XF86XK_MAIL || (ENABLE_OP_KEY_XF86XK_MAIL != YES && ENABLE_OP_KEY_XF86XK_MAIL != NO)
#	error "You need to decide if OP_KEY_XF86XK_MAIL (Mail) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MAIL || (ENABLE_OP_KEY_XF86XK_MAIL != YES && ENABLE_OP_KEY_XF86XK_MAIL != NO)
#if !defined ENABLE_OP_KEY_XF86XK_MAIL || (ENABLE_OP_KEY_XF86XK_MAIL != YES && ENABLE_OP_KEY_XF86XK_MAIL != NO)
#	error "You need to decide if OP_KEY_XF86XK_MAIL (Mail) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MAIL || (ENABLE_OP_KEY_XF86XK_MAIL != YES && ENABLE_OP_KEY_XF86XK_MAIL != NO)
#if ENABLE_OP_KEY_XF86XK_MAIL == YES
#	define OP_KEY_XF86XK_MAIL_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_MAIL == YES
#undef ENABLE_OP_KEY_XF86XK_MAIL
#if !defined ENABLE_OP_KEY_XF86XK_START || (ENABLE_OP_KEY_XF86XK_START != YES && ENABLE_OP_KEY_XF86XK_START != NO)
#	error "You need to decide if OP_KEY_XF86XK_START (Start) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_START || (ENABLE_OP_KEY_XF86XK_START != YES && ENABLE_OP_KEY_XF86XK_START != NO)
#if !defined ENABLE_OP_KEY_XF86XK_START || (ENABLE_OP_KEY_XF86XK_START != YES && ENABLE_OP_KEY_XF86XK_START != NO)
#	error "You need to decide if OP_KEY_XF86XK_START (Start) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_START || (ENABLE_OP_KEY_XF86XK_START != YES && ENABLE_OP_KEY_XF86XK_START != NO)
#if ENABLE_OP_KEY_XF86XK_START == YES
#	define OP_KEY_XF86XK_START_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_START == YES
#undef ENABLE_OP_KEY_XF86XK_START
#if !defined ENABLE_OP_KEY_XF86XK_SEARCH || (ENABLE_OP_KEY_XF86XK_SEARCH != YES && ENABLE_OP_KEY_XF86XK_SEARCH != NO)
#	error "You need to decide if OP_KEY_XF86XK_SEARCH (Search) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SEARCH || (ENABLE_OP_KEY_XF86XK_SEARCH != YES && ENABLE_OP_KEY_XF86XK_SEARCH != NO)
#if !defined ENABLE_OP_KEY_XF86XK_SEARCH || (ENABLE_OP_KEY_XF86XK_SEARCH != YES && ENABLE_OP_KEY_XF86XK_SEARCH != NO)
#	error "You need to decide if OP_KEY_XF86XK_SEARCH (Search) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SEARCH || (ENABLE_OP_KEY_XF86XK_SEARCH != YES && ENABLE_OP_KEY_XF86XK_SEARCH != NO)
#if ENABLE_OP_KEY_XF86XK_SEARCH == YES
#	define OP_KEY_XF86XK_SEARCH_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_SEARCH == YES
#undef ENABLE_OP_KEY_XF86XK_SEARCH
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_RECORD || (ENABLE_OP_KEY_XF86XK_AUDIO_RECORD != YES && ENABLE_OP_KEY_XF86XK_AUDIO_RECORD != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_RECORD (AudioRecord) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_RECORD || (ENABLE_OP_KEY_XF86XK_AUDIO_RECORD != YES && ENABLE_OP_KEY_XF86XK_AUDIO_RECORD != NO)
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_RECORD || (ENABLE_OP_KEY_XF86XK_AUDIO_RECORD != YES && ENABLE_OP_KEY_XF86XK_AUDIO_RECORD != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_RECORD (AudioRecord) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_RECORD || (ENABLE_OP_KEY_XF86XK_AUDIO_RECORD != YES && ENABLE_OP_KEY_XF86XK_AUDIO_RECORD != NO)
#if ENABLE_OP_KEY_XF86XK_AUDIO_RECORD == YES
#	define OP_KEY_XF86XK_AUDIO_RECORD_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_AUDIO_RECORD == YES
#undef ENABLE_OP_KEY_XF86XK_AUDIO_RECORD
#if !defined ENABLE_OP_KEY_XF86XK_CALCULATOR || (ENABLE_OP_KEY_XF86XK_CALCULATOR != YES && ENABLE_OP_KEY_XF86XK_CALCULATOR != NO)
#	error "You need to decide if OP_KEY_XF86XK_CALCULATOR (Calculator) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_CALCULATOR || (ENABLE_OP_KEY_XF86XK_CALCULATOR != YES && ENABLE_OP_KEY_XF86XK_CALCULATOR != NO)
#if !defined ENABLE_OP_KEY_XF86XK_CALCULATOR || (ENABLE_OP_KEY_XF86XK_CALCULATOR != YES && ENABLE_OP_KEY_XF86XK_CALCULATOR != NO)
#	error "You need to decide if OP_KEY_XF86XK_CALCULATOR (Calculator) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_CALCULATOR || (ENABLE_OP_KEY_XF86XK_CALCULATOR != YES && ENABLE_OP_KEY_XF86XK_CALCULATOR != NO)
#if ENABLE_OP_KEY_XF86XK_CALCULATOR == YES
#	define OP_KEY_XF86XK_CALCULATOR_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_CALCULATOR == YES
#undef ENABLE_OP_KEY_XF86XK_CALCULATOR
#if !defined ENABLE_OP_KEY_XF86XK_MEMO || (ENABLE_OP_KEY_XF86XK_MEMO != YES && ENABLE_OP_KEY_XF86XK_MEMO != NO)
#	error "You need to decide if OP_KEY_XF86XK_MEMO (Memo) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MEMO || (ENABLE_OP_KEY_XF86XK_MEMO != YES && ENABLE_OP_KEY_XF86XK_MEMO != NO)
#if !defined ENABLE_OP_KEY_XF86XK_MEMO || (ENABLE_OP_KEY_XF86XK_MEMO != YES && ENABLE_OP_KEY_XF86XK_MEMO != NO)
#	error "You need to decide if OP_KEY_XF86XK_MEMO (Memo) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MEMO || (ENABLE_OP_KEY_XF86XK_MEMO != YES && ENABLE_OP_KEY_XF86XK_MEMO != NO)
#if ENABLE_OP_KEY_XF86XK_MEMO == YES
#	define OP_KEY_XF86XK_MEMO_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_MEMO == YES
#undef ENABLE_OP_KEY_XF86XK_MEMO
#if !defined ENABLE_OP_KEY_XF86XK_TO_DO_LIST || (ENABLE_OP_KEY_XF86XK_TO_DO_LIST != YES && ENABLE_OP_KEY_XF86XK_TO_DO_LIST != NO)
#	error "You need to decide if OP_KEY_XF86XK_TO_DO_LIST (ToDoList) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_TO_DO_LIST || (ENABLE_OP_KEY_XF86XK_TO_DO_LIST != YES && ENABLE_OP_KEY_XF86XK_TO_DO_LIST != NO)
#if !defined ENABLE_OP_KEY_XF86XK_TO_DO_LIST || (ENABLE_OP_KEY_XF86XK_TO_DO_LIST != YES && ENABLE_OP_KEY_XF86XK_TO_DO_LIST != NO)
#	error "You need to decide if OP_KEY_XF86XK_TO_DO_LIST (ToDoList) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_TO_DO_LIST || (ENABLE_OP_KEY_XF86XK_TO_DO_LIST != YES && ENABLE_OP_KEY_XF86XK_TO_DO_LIST != NO)
#if ENABLE_OP_KEY_XF86XK_TO_DO_LIST == YES
#	define OP_KEY_XF86XK_TO_DO_LIST_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_TO_DO_LIST == YES
#undef ENABLE_OP_KEY_XF86XK_TO_DO_LIST
#if !defined ENABLE_OP_KEY_XF86XK_CALENDAR || (ENABLE_OP_KEY_XF86XK_CALENDAR != YES && ENABLE_OP_KEY_XF86XK_CALENDAR != NO)
#	error "You need to decide if OP_KEY_XF86XK_CALENDAR (Calendar) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_CALENDAR || (ENABLE_OP_KEY_XF86XK_CALENDAR != YES && ENABLE_OP_KEY_XF86XK_CALENDAR != NO)
#if !defined ENABLE_OP_KEY_XF86XK_CALENDAR || (ENABLE_OP_KEY_XF86XK_CALENDAR != YES && ENABLE_OP_KEY_XF86XK_CALENDAR != NO)
#	error "You need to decide if OP_KEY_XF86XK_CALENDAR (Calendar) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_CALENDAR || (ENABLE_OP_KEY_XF86XK_CALENDAR != YES && ENABLE_OP_KEY_XF86XK_CALENDAR != NO)
#if ENABLE_OP_KEY_XF86XK_CALENDAR == YES
#	define OP_KEY_XF86XK_CALENDAR_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_CALENDAR == YES
#undef ENABLE_OP_KEY_XF86XK_CALENDAR
#if !defined ENABLE_OP_KEY_XF86XK_POWER_DOWN || (ENABLE_OP_KEY_XF86XK_POWER_DOWN != YES && ENABLE_OP_KEY_XF86XK_POWER_DOWN != NO)
#	error "You need to decide if OP_KEY_XF86XK_POWER_DOWN (PowerDown) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_POWER_DOWN || (ENABLE_OP_KEY_XF86XK_POWER_DOWN != YES && ENABLE_OP_KEY_XF86XK_POWER_DOWN != NO)
#if !defined ENABLE_OP_KEY_XF86XK_POWER_DOWN || (ENABLE_OP_KEY_XF86XK_POWER_DOWN != YES && ENABLE_OP_KEY_XF86XK_POWER_DOWN != NO)
#	error "You need to decide if OP_KEY_XF86XK_POWER_DOWN (PowerDown) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_POWER_DOWN || (ENABLE_OP_KEY_XF86XK_POWER_DOWN != YES && ENABLE_OP_KEY_XF86XK_POWER_DOWN != NO)
#if ENABLE_OP_KEY_XF86XK_POWER_DOWN == YES
#	define OP_KEY_XF86XK_POWER_DOWN_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_POWER_DOWN == YES
#undef ENABLE_OP_KEY_XF86XK_POWER_DOWN
#if !defined ENABLE_OP_KEY_XF86XK_CONTRAST_ADJUST || (ENABLE_OP_KEY_XF86XK_CONTRAST_ADJUST != YES && ENABLE_OP_KEY_XF86XK_CONTRAST_ADJUST != NO)
#	error "You need to decide if OP_KEY_XF86XK_CONTRAST_ADJUST (ContrastAdjust) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_CONTRAST_ADJUST || (ENABLE_OP_KEY_XF86XK_CONTRAST_ADJUST != YES && ENABLE_OP_KEY_XF86XK_CONTRAST_ADJUST != NO)
#if !defined ENABLE_OP_KEY_XF86XK_CONTRAST_ADJUST || (ENABLE_OP_KEY_XF86XK_CONTRAST_ADJUST != YES && ENABLE_OP_KEY_XF86XK_CONTRAST_ADJUST != NO)
#	error "You need to decide if OP_KEY_XF86XK_CONTRAST_ADJUST (ContrastAdjust) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_CONTRAST_ADJUST || (ENABLE_OP_KEY_XF86XK_CONTRAST_ADJUST != YES && ENABLE_OP_KEY_XF86XK_CONTRAST_ADJUST != NO)
#if ENABLE_OP_KEY_XF86XK_CONTRAST_ADJUST == YES
#	define OP_KEY_XF86XK_CONTRAST_ADJUST_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_CONTRAST_ADJUST == YES
#undef ENABLE_OP_KEY_XF86XK_CONTRAST_ADJUST
#if !defined ENABLE_OP_KEY_XF86XK_ROCKER_UP || (ENABLE_OP_KEY_XF86XK_ROCKER_UP != YES && ENABLE_OP_KEY_XF86XK_ROCKER_UP != NO)
#	error "You need to decide if OP_KEY_XF86XK_ROCKER_UP (RockerUp) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_ROCKER_UP || (ENABLE_OP_KEY_XF86XK_ROCKER_UP != YES && ENABLE_OP_KEY_XF86XK_ROCKER_UP != NO)
#if !defined ENABLE_OP_KEY_XF86XK_ROCKER_UP || (ENABLE_OP_KEY_XF86XK_ROCKER_UP != YES && ENABLE_OP_KEY_XF86XK_ROCKER_UP != NO)
#	error "You need to decide if OP_KEY_XF86XK_ROCKER_UP (RockerUp) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_ROCKER_UP || (ENABLE_OP_KEY_XF86XK_ROCKER_UP != YES && ENABLE_OP_KEY_XF86XK_ROCKER_UP != NO)
#if ENABLE_OP_KEY_XF86XK_ROCKER_UP == YES
#	define OP_KEY_XF86XK_ROCKER_UP_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_ROCKER_UP == YES
#undef ENABLE_OP_KEY_XF86XK_ROCKER_UP
#if !defined ENABLE_OP_KEY_XF86XK_ROCKER_DOWN || (ENABLE_OP_KEY_XF86XK_ROCKER_DOWN != YES && ENABLE_OP_KEY_XF86XK_ROCKER_DOWN != NO)
#	error "You need to decide if OP_KEY_XF86XK_ROCKER_DOWN (RockerDown) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_ROCKER_DOWN || (ENABLE_OP_KEY_XF86XK_ROCKER_DOWN != YES && ENABLE_OP_KEY_XF86XK_ROCKER_DOWN != NO)
#if !defined ENABLE_OP_KEY_XF86XK_ROCKER_DOWN || (ENABLE_OP_KEY_XF86XK_ROCKER_DOWN != YES && ENABLE_OP_KEY_XF86XK_ROCKER_DOWN != NO)
#	error "You need to decide if OP_KEY_XF86XK_ROCKER_DOWN (RockerDown) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_ROCKER_DOWN || (ENABLE_OP_KEY_XF86XK_ROCKER_DOWN != YES && ENABLE_OP_KEY_XF86XK_ROCKER_DOWN != NO)
#if ENABLE_OP_KEY_XF86XK_ROCKER_DOWN == YES
#	define OP_KEY_XF86XK_ROCKER_DOWN_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_ROCKER_DOWN == YES
#undef ENABLE_OP_KEY_XF86XK_ROCKER_DOWN
#if !defined ENABLE_OP_KEY_XF86XK_ROCKER_ENTER || (ENABLE_OP_KEY_XF86XK_ROCKER_ENTER != YES && ENABLE_OP_KEY_XF86XK_ROCKER_ENTER != NO)
#	error "You need to decide if OP_KEY_XF86XK_ROCKER_ENTER (RockerEnter) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_ROCKER_ENTER || (ENABLE_OP_KEY_XF86XK_ROCKER_ENTER != YES && ENABLE_OP_KEY_XF86XK_ROCKER_ENTER != NO)
#if !defined ENABLE_OP_KEY_XF86XK_ROCKER_ENTER || (ENABLE_OP_KEY_XF86XK_ROCKER_ENTER != YES && ENABLE_OP_KEY_XF86XK_ROCKER_ENTER != NO)
#	error "You need to decide if OP_KEY_XF86XK_ROCKER_ENTER (RockerEnter) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_ROCKER_ENTER || (ENABLE_OP_KEY_XF86XK_ROCKER_ENTER != YES && ENABLE_OP_KEY_XF86XK_ROCKER_ENTER != NO)
#if ENABLE_OP_KEY_XF86XK_ROCKER_ENTER == YES
#	define OP_KEY_XF86XK_ROCKER_ENTER_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_ROCKER_ENTER == YES
#undef ENABLE_OP_KEY_XF86XK_ROCKER_ENTER
#if !defined ENABLE_OP_KEY_XF86XK_BACK || (ENABLE_OP_KEY_XF86XK_BACK != YES && ENABLE_OP_KEY_XF86XK_BACK != NO)
#	error "You need to decide if OP_KEY_XF86XK_BACK (Back) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_BACK || (ENABLE_OP_KEY_XF86XK_BACK != YES && ENABLE_OP_KEY_XF86XK_BACK != NO)
#if !defined ENABLE_OP_KEY_XF86XK_BACK || (ENABLE_OP_KEY_XF86XK_BACK != YES && ENABLE_OP_KEY_XF86XK_BACK != NO)
#	error "You need to decide if OP_KEY_XF86XK_BACK (Back) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_BACK || (ENABLE_OP_KEY_XF86XK_BACK != YES && ENABLE_OP_KEY_XF86XK_BACK != NO)
#if ENABLE_OP_KEY_XF86XK_BACK == YES
#	define OP_KEY_XF86XK_BACK_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_BACK == YES
#undef ENABLE_OP_KEY_XF86XK_BACK
#if !defined ENABLE_OP_KEY_XF86XK_FORWARD || (ENABLE_OP_KEY_XF86XK_FORWARD != YES && ENABLE_OP_KEY_XF86XK_FORWARD != NO)
#	error "You need to decide if OP_KEY_XF86XK_FORWARD (Forward) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_FORWARD || (ENABLE_OP_KEY_XF86XK_FORWARD != YES && ENABLE_OP_KEY_XF86XK_FORWARD != NO)
#if !defined ENABLE_OP_KEY_XF86XK_FORWARD || (ENABLE_OP_KEY_XF86XK_FORWARD != YES && ENABLE_OP_KEY_XF86XK_FORWARD != NO)
#	error "You need to decide if OP_KEY_XF86XK_FORWARD (Forward) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_FORWARD || (ENABLE_OP_KEY_XF86XK_FORWARD != YES && ENABLE_OP_KEY_XF86XK_FORWARD != NO)
#if ENABLE_OP_KEY_XF86XK_FORWARD == YES
#	define OP_KEY_XF86XK_FORWARD_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_FORWARD == YES
#undef ENABLE_OP_KEY_XF86XK_FORWARD
#if !defined ENABLE_OP_KEY_XF86XK_STOP || (ENABLE_OP_KEY_XF86XK_STOP != YES && ENABLE_OP_KEY_XF86XK_STOP != NO)
#	error "You need to decide if OP_KEY_XF86XK_STOP (Stop) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_STOP || (ENABLE_OP_KEY_XF86XK_STOP != YES && ENABLE_OP_KEY_XF86XK_STOP != NO)
#if !defined ENABLE_OP_KEY_XF86XK_STOP || (ENABLE_OP_KEY_XF86XK_STOP != YES && ENABLE_OP_KEY_XF86XK_STOP != NO)
#	error "You need to decide if OP_KEY_XF86XK_STOP (Stop) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_STOP || (ENABLE_OP_KEY_XF86XK_STOP != YES && ENABLE_OP_KEY_XF86XK_STOP != NO)
#if ENABLE_OP_KEY_XF86XK_STOP == YES
#	define OP_KEY_XF86XK_STOP_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_STOP == YES
#undef ENABLE_OP_KEY_XF86XK_STOP
#if !defined ENABLE_OP_KEY_XF86XK_REFRESH || (ENABLE_OP_KEY_XF86XK_REFRESH != YES && ENABLE_OP_KEY_XF86XK_REFRESH != NO)
#	error "You need to decide if OP_KEY_XF86XK_REFRESH (Refresh) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_REFRESH || (ENABLE_OP_KEY_XF86XK_REFRESH != YES && ENABLE_OP_KEY_XF86XK_REFRESH != NO)
#if !defined ENABLE_OP_KEY_XF86XK_REFRESH || (ENABLE_OP_KEY_XF86XK_REFRESH != YES && ENABLE_OP_KEY_XF86XK_REFRESH != NO)
#	error "You need to decide if OP_KEY_XF86XK_REFRESH (Refresh) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_REFRESH || (ENABLE_OP_KEY_XF86XK_REFRESH != YES && ENABLE_OP_KEY_XF86XK_REFRESH != NO)
#if ENABLE_OP_KEY_XF86XK_REFRESH == YES
#	define OP_KEY_XF86XK_REFRESH_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_REFRESH == YES
#undef ENABLE_OP_KEY_XF86XK_REFRESH
#if !defined ENABLE_OP_KEY_XF86XK_POWER_OFF || (ENABLE_OP_KEY_XF86XK_POWER_OFF != YES && ENABLE_OP_KEY_XF86XK_POWER_OFF != NO)
#	error "You need to decide if OP_KEY_XF86XK_POWER_OFF (PowerOff) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_POWER_OFF || (ENABLE_OP_KEY_XF86XK_POWER_OFF != YES && ENABLE_OP_KEY_XF86XK_POWER_OFF != NO)
#if !defined ENABLE_OP_KEY_XF86XK_POWER_OFF || (ENABLE_OP_KEY_XF86XK_POWER_OFF != YES && ENABLE_OP_KEY_XF86XK_POWER_OFF != NO)
#	error "You need to decide if OP_KEY_XF86XK_POWER_OFF (PowerOff) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_POWER_OFF || (ENABLE_OP_KEY_XF86XK_POWER_OFF != YES && ENABLE_OP_KEY_XF86XK_POWER_OFF != NO)
#if ENABLE_OP_KEY_XF86XK_POWER_OFF == YES
#	define OP_KEY_XF86XK_POWER_OFF_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_POWER_OFF == YES
#undef ENABLE_OP_KEY_XF86XK_POWER_OFF
#if !defined ENABLE_OP_KEY_XF86XK_WAKE_UP || (ENABLE_OP_KEY_XF86XK_WAKE_UP != YES && ENABLE_OP_KEY_XF86XK_WAKE_UP != NO)
#	error "You need to decide if OP_KEY_XF86XK_WAKE_UP (WakeUp) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_WAKE_UP || (ENABLE_OP_KEY_XF86XK_WAKE_UP != YES && ENABLE_OP_KEY_XF86XK_WAKE_UP != NO)
#if !defined ENABLE_OP_KEY_XF86XK_WAKE_UP || (ENABLE_OP_KEY_XF86XK_WAKE_UP != YES && ENABLE_OP_KEY_XF86XK_WAKE_UP != NO)
#	error "You need to decide if OP_KEY_XF86XK_WAKE_UP (WakeUp) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_WAKE_UP || (ENABLE_OP_KEY_XF86XK_WAKE_UP != YES && ENABLE_OP_KEY_XF86XK_WAKE_UP != NO)
#if ENABLE_OP_KEY_XF86XK_WAKE_UP == YES
#	define OP_KEY_XF86XK_WAKE_UP_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_WAKE_UP == YES
#undef ENABLE_OP_KEY_XF86XK_WAKE_UP
#if !defined ENABLE_OP_KEY_XF86XK_EJECT || (ENABLE_OP_KEY_XF86XK_EJECT != YES && ENABLE_OP_KEY_XF86XK_EJECT != NO)
#	error "You need to decide if OP_KEY_XF86XK_EJECT (Eject) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_EJECT || (ENABLE_OP_KEY_XF86XK_EJECT != YES && ENABLE_OP_KEY_XF86XK_EJECT != NO)
#if !defined ENABLE_OP_KEY_XF86XK_EJECT || (ENABLE_OP_KEY_XF86XK_EJECT != YES && ENABLE_OP_KEY_XF86XK_EJECT != NO)
#	error "You need to decide if OP_KEY_XF86XK_EJECT (Eject) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_EJECT || (ENABLE_OP_KEY_XF86XK_EJECT != YES && ENABLE_OP_KEY_XF86XK_EJECT != NO)
#if ENABLE_OP_KEY_XF86XK_EJECT == YES
#	define OP_KEY_XF86XK_EJECT_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_EJECT == YES
#undef ENABLE_OP_KEY_XF86XK_EJECT
#if !defined ENABLE_OP_KEY_XF86XK_SCREEN_SAVER || (ENABLE_OP_KEY_XF86XK_SCREEN_SAVER != YES && ENABLE_OP_KEY_XF86XK_SCREEN_SAVER != NO)
#	error "You need to decide if OP_KEY_XF86XK_SCREEN_SAVER (ScreenSaver) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SCREEN_SAVER || (ENABLE_OP_KEY_XF86XK_SCREEN_SAVER != YES && ENABLE_OP_KEY_XF86XK_SCREEN_SAVER != NO)
#if !defined ENABLE_OP_KEY_XF86XK_SCREEN_SAVER || (ENABLE_OP_KEY_XF86XK_SCREEN_SAVER != YES && ENABLE_OP_KEY_XF86XK_SCREEN_SAVER != NO)
#	error "You need to decide if OP_KEY_XF86XK_SCREEN_SAVER (ScreenSaver) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SCREEN_SAVER || (ENABLE_OP_KEY_XF86XK_SCREEN_SAVER != YES && ENABLE_OP_KEY_XF86XK_SCREEN_SAVER != NO)
#if ENABLE_OP_KEY_XF86XK_SCREEN_SAVER == YES
#	define OP_KEY_XF86XK_SCREEN_SAVER_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_SCREEN_SAVER == YES
#undef ENABLE_OP_KEY_XF86XK_SCREEN_SAVER
#if !defined ENABLE_OP_KEY_XF86XK_WWW || (ENABLE_OP_KEY_XF86XK_WWW != YES && ENABLE_OP_KEY_XF86XK_WWW != NO)
#	error "You need to decide if OP_KEY_XF86XK_WWW (WWW) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_WWW || (ENABLE_OP_KEY_XF86XK_WWW != YES && ENABLE_OP_KEY_XF86XK_WWW != NO)
#if !defined ENABLE_OP_KEY_XF86XK_WWW || (ENABLE_OP_KEY_XF86XK_WWW != YES && ENABLE_OP_KEY_XF86XK_WWW != NO)
#	error "You need to decide if OP_KEY_XF86XK_WWW (WWW) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_WWW || (ENABLE_OP_KEY_XF86XK_WWW != YES && ENABLE_OP_KEY_XF86XK_WWW != NO)
#if ENABLE_OP_KEY_XF86XK_WWW == YES
#	define OP_KEY_XF86XK_WWW_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_WWW == YES
#undef ENABLE_OP_KEY_XF86XK_WWW
#if !defined ENABLE_OP_KEY_XF86XK_FAVORITES || (ENABLE_OP_KEY_XF86XK_FAVORITES != YES && ENABLE_OP_KEY_XF86XK_FAVORITES != NO)
#	error "You need to decide if OP_KEY_XF86XK_FAVORITES (Favorites) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_FAVORITES || (ENABLE_OP_KEY_XF86XK_FAVORITES != YES && ENABLE_OP_KEY_XF86XK_FAVORITES != NO)
#if !defined ENABLE_OP_KEY_XF86XK_FAVORITES || (ENABLE_OP_KEY_XF86XK_FAVORITES != YES && ENABLE_OP_KEY_XF86XK_FAVORITES != NO)
#	error "You need to decide if OP_KEY_XF86XK_FAVORITES (Favorites) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_FAVORITES || (ENABLE_OP_KEY_XF86XK_FAVORITES != YES && ENABLE_OP_KEY_XF86XK_FAVORITES != NO)
#if ENABLE_OP_KEY_XF86XK_FAVORITES == YES
#	define OP_KEY_XF86XK_FAVORITES_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_FAVORITES == YES
#undef ENABLE_OP_KEY_XF86XK_FAVORITES
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_PAUSE || (ENABLE_OP_KEY_XF86XK_AUDIO_PAUSE != YES && ENABLE_OP_KEY_XF86XK_AUDIO_PAUSE != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_PAUSE (AudioPause) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_PAUSE || (ENABLE_OP_KEY_XF86XK_AUDIO_PAUSE != YES && ENABLE_OP_KEY_XF86XK_AUDIO_PAUSE != NO)
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_PAUSE || (ENABLE_OP_KEY_XF86XK_AUDIO_PAUSE != YES && ENABLE_OP_KEY_XF86XK_AUDIO_PAUSE != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_PAUSE (AudioPause) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_PAUSE || (ENABLE_OP_KEY_XF86XK_AUDIO_PAUSE != YES && ENABLE_OP_KEY_XF86XK_AUDIO_PAUSE != NO)
#if ENABLE_OP_KEY_XF86XK_AUDIO_PAUSE == YES
#	define OP_KEY_XF86XK_AUDIO_PAUSE_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_AUDIO_PAUSE == YES
#undef ENABLE_OP_KEY_XF86XK_AUDIO_PAUSE
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_MEDIA || (ENABLE_OP_KEY_XF86XK_AUDIO_MEDIA != YES && ENABLE_OP_KEY_XF86XK_AUDIO_MEDIA != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_MEDIA (AudioMedia) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_MEDIA || (ENABLE_OP_KEY_XF86XK_AUDIO_MEDIA != YES && ENABLE_OP_KEY_XF86XK_AUDIO_MEDIA != NO)
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_MEDIA || (ENABLE_OP_KEY_XF86XK_AUDIO_MEDIA != YES && ENABLE_OP_KEY_XF86XK_AUDIO_MEDIA != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_MEDIA (AudioMedia) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_MEDIA || (ENABLE_OP_KEY_XF86XK_AUDIO_MEDIA != YES && ENABLE_OP_KEY_XF86XK_AUDIO_MEDIA != NO)
#if ENABLE_OP_KEY_XF86XK_AUDIO_MEDIA == YES
#	define OP_KEY_XF86XK_AUDIO_MEDIA_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_AUDIO_MEDIA == YES
#undef ENABLE_OP_KEY_XF86XK_AUDIO_MEDIA
#if !defined ENABLE_OP_KEY_XF86XK_MY_COMPUTER || (ENABLE_OP_KEY_XF86XK_MY_COMPUTER != YES && ENABLE_OP_KEY_XF86XK_MY_COMPUTER != NO)
#	error "You need to decide if OP_KEY_XF86XK_MY_COMPUTER (MyComputer) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MY_COMPUTER || (ENABLE_OP_KEY_XF86XK_MY_COMPUTER != YES && ENABLE_OP_KEY_XF86XK_MY_COMPUTER != NO)
#if !defined ENABLE_OP_KEY_XF86XK_MY_COMPUTER || (ENABLE_OP_KEY_XF86XK_MY_COMPUTER != YES && ENABLE_OP_KEY_XF86XK_MY_COMPUTER != NO)
#	error "You need to decide if OP_KEY_XF86XK_MY_COMPUTER (MyComputer) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MY_COMPUTER || (ENABLE_OP_KEY_XF86XK_MY_COMPUTER != YES && ENABLE_OP_KEY_XF86XK_MY_COMPUTER != NO)
#if ENABLE_OP_KEY_XF86XK_MY_COMPUTER == YES
#	define OP_KEY_XF86XK_MY_COMPUTER_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_MY_COMPUTER == YES
#undef ENABLE_OP_KEY_XF86XK_MY_COMPUTER
#if !defined ENABLE_OP_KEY_XF86XK_VENDOR_HOME || (ENABLE_OP_KEY_XF86XK_VENDOR_HOME != YES && ENABLE_OP_KEY_XF86XK_VENDOR_HOME != NO)
#	error "You need to decide if OP_KEY_XF86XK_VENDOR_HOME (VendorHome) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_VENDOR_HOME || (ENABLE_OP_KEY_XF86XK_VENDOR_HOME != YES && ENABLE_OP_KEY_XF86XK_VENDOR_HOME != NO)
#if !defined ENABLE_OP_KEY_XF86XK_VENDOR_HOME || (ENABLE_OP_KEY_XF86XK_VENDOR_HOME != YES && ENABLE_OP_KEY_XF86XK_VENDOR_HOME != NO)
#	error "You need to decide if OP_KEY_XF86XK_VENDOR_HOME (VendorHome) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_VENDOR_HOME || (ENABLE_OP_KEY_XF86XK_VENDOR_HOME != YES && ENABLE_OP_KEY_XF86XK_VENDOR_HOME != NO)
#if ENABLE_OP_KEY_XF86XK_VENDOR_HOME == YES
#	define OP_KEY_XF86XK_VENDOR_HOME_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_VENDOR_HOME == YES
#undef ENABLE_OP_KEY_XF86XK_VENDOR_HOME
#if !defined ENABLE_OP_KEY_XF86XK_LIGHT_BULB || (ENABLE_OP_KEY_XF86XK_LIGHT_BULB != YES && ENABLE_OP_KEY_XF86XK_LIGHT_BULB != NO)
#	error "You need to decide if OP_KEY_XF86XK_LIGHT_BULB (LightBulb) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LIGHT_BULB || (ENABLE_OP_KEY_XF86XK_LIGHT_BULB != YES && ENABLE_OP_KEY_XF86XK_LIGHT_BULB != NO)
#if !defined ENABLE_OP_KEY_XF86XK_LIGHT_BULB || (ENABLE_OP_KEY_XF86XK_LIGHT_BULB != YES && ENABLE_OP_KEY_XF86XK_LIGHT_BULB != NO)
#	error "You need to decide if OP_KEY_XF86XK_LIGHT_BULB (LightBulb) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LIGHT_BULB || (ENABLE_OP_KEY_XF86XK_LIGHT_BULB != YES && ENABLE_OP_KEY_XF86XK_LIGHT_BULB != NO)
#if ENABLE_OP_KEY_XF86XK_LIGHT_BULB == YES
#	define OP_KEY_XF86XK_LIGHT_BULB_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_LIGHT_BULB == YES
#undef ENABLE_OP_KEY_XF86XK_LIGHT_BULB
#if !defined ENABLE_OP_KEY_XF86XK_SHOP || (ENABLE_OP_KEY_XF86XK_SHOP != YES && ENABLE_OP_KEY_XF86XK_SHOP != NO)
#	error "You need to decide if OP_KEY_XF86XK_SHOP (Shop) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SHOP || (ENABLE_OP_KEY_XF86XK_SHOP != YES && ENABLE_OP_KEY_XF86XK_SHOP != NO)
#if !defined ENABLE_OP_KEY_XF86XK_SHOP || (ENABLE_OP_KEY_XF86XK_SHOP != YES && ENABLE_OP_KEY_XF86XK_SHOP != NO)
#	error "You need to decide if OP_KEY_XF86XK_SHOP (Shop) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SHOP || (ENABLE_OP_KEY_XF86XK_SHOP != YES && ENABLE_OP_KEY_XF86XK_SHOP != NO)
#if ENABLE_OP_KEY_XF86XK_SHOP == YES
#	define OP_KEY_XF86XK_SHOP_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_SHOP == YES
#undef ENABLE_OP_KEY_XF86XK_SHOP
#if !defined ENABLE_OP_KEY_XF86XK_HISTORY || (ENABLE_OP_KEY_XF86XK_HISTORY != YES && ENABLE_OP_KEY_XF86XK_HISTORY != NO)
#	error "You need to decide if OP_KEY_XF86XK_HISTORY (History) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_HISTORY || (ENABLE_OP_KEY_XF86XK_HISTORY != YES && ENABLE_OP_KEY_XF86XK_HISTORY != NO)
#if !defined ENABLE_OP_KEY_XF86XK_HISTORY || (ENABLE_OP_KEY_XF86XK_HISTORY != YES && ENABLE_OP_KEY_XF86XK_HISTORY != NO)
#	error "You need to decide if OP_KEY_XF86XK_HISTORY (History) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_HISTORY || (ENABLE_OP_KEY_XF86XK_HISTORY != YES && ENABLE_OP_KEY_XF86XK_HISTORY != NO)
#if ENABLE_OP_KEY_XF86XK_HISTORY == YES
#	define OP_KEY_XF86XK_HISTORY_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_HISTORY == YES
#undef ENABLE_OP_KEY_XF86XK_HISTORY
#if !defined ENABLE_OP_KEY_XF86XK_OPEN_URL || (ENABLE_OP_KEY_XF86XK_OPEN_URL != YES && ENABLE_OP_KEY_XF86XK_OPEN_URL != NO)
#	error "You need to decide if OP_KEY_XF86XK_OPEN_URL (OpenURL) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_OPEN_URL || (ENABLE_OP_KEY_XF86XK_OPEN_URL != YES && ENABLE_OP_KEY_XF86XK_OPEN_URL != NO)
#if !defined ENABLE_OP_KEY_XF86XK_OPEN_URL || (ENABLE_OP_KEY_XF86XK_OPEN_URL != YES && ENABLE_OP_KEY_XF86XK_OPEN_URL != NO)
#	error "You need to decide if OP_KEY_XF86XK_OPEN_URL (OpenURL) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_OPEN_URL || (ENABLE_OP_KEY_XF86XK_OPEN_URL != YES && ENABLE_OP_KEY_XF86XK_OPEN_URL != NO)
#if ENABLE_OP_KEY_XF86XK_OPEN_URL == YES
#	define OP_KEY_XF86XK_OPEN_URL_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_OPEN_URL == YES
#undef ENABLE_OP_KEY_XF86XK_OPEN_URL
#if !defined ENABLE_OP_KEY_XF86XK_ADD_FAVORITE || (ENABLE_OP_KEY_XF86XK_ADD_FAVORITE != YES && ENABLE_OP_KEY_XF86XK_ADD_FAVORITE != NO)
#	error "You need to decide if OP_KEY_XF86XK_ADD_FAVORITE (AddFavorite) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_ADD_FAVORITE || (ENABLE_OP_KEY_XF86XK_ADD_FAVORITE != YES && ENABLE_OP_KEY_XF86XK_ADD_FAVORITE != NO)
#if !defined ENABLE_OP_KEY_XF86XK_ADD_FAVORITE || (ENABLE_OP_KEY_XF86XK_ADD_FAVORITE != YES && ENABLE_OP_KEY_XF86XK_ADD_FAVORITE != NO)
#	error "You need to decide if OP_KEY_XF86XK_ADD_FAVORITE (AddFavorite) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_ADD_FAVORITE || (ENABLE_OP_KEY_XF86XK_ADD_FAVORITE != YES && ENABLE_OP_KEY_XF86XK_ADD_FAVORITE != NO)
#if ENABLE_OP_KEY_XF86XK_ADD_FAVORITE == YES
#	define OP_KEY_XF86XK_ADD_FAVORITE_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_ADD_FAVORITE == YES
#undef ENABLE_OP_KEY_XF86XK_ADD_FAVORITE
#if !defined ENABLE_OP_KEY_XF86XK_HOT_LINKS || (ENABLE_OP_KEY_XF86XK_HOT_LINKS != YES && ENABLE_OP_KEY_XF86XK_HOT_LINKS != NO)
#	error "You need to decide if OP_KEY_XF86XK_HOT_LINKS (HotLinks) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_HOT_LINKS || (ENABLE_OP_KEY_XF86XK_HOT_LINKS != YES && ENABLE_OP_KEY_XF86XK_HOT_LINKS != NO)
#if !defined ENABLE_OP_KEY_XF86XK_HOT_LINKS || (ENABLE_OP_KEY_XF86XK_HOT_LINKS != YES && ENABLE_OP_KEY_XF86XK_HOT_LINKS != NO)
#	error "You need to decide if OP_KEY_XF86XK_HOT_LINKS (HotLinks) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_HOT_LINKS || (ENABLE_OP_KEY_XF86XK_HOT_LINKS != YES && ENABLE_OP_KEY_XF86XK_HOT_LINKS != NO)
#if ENABLE_OP_KEY_XF86XK_HOT_LINKS == YES
#	define OP_KEY_XF86XK_HOT_LINKS_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_HOT_LINKS == YES
#undef ENABLE_OP_KEY_XF86XK_HOT_LINKS
#if !defined ENABLE_OP_KEY_XF86XK_BRIGHTNESS_ADJUST || (ENABLE_OP_KEY_XF86XK_BRIGHTNESS_ADJUST != YES && ENABLE_OP_KEY_XF86XK_BRIGHTNESS_ADJUST != NO)
#	error "You need to decide if OP_KEY_XF86XK_BRIGHTNESS_ADJUST (BrightnessAdjust) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_BRIGHTNESS_ADJUST || (ENABLE_OP_KEY_XF86XK_BRIGHTNESS_ADJUST != YES && ENABLE_OP_KEY_XF86XK_BRIGHTNESS_ADJUST != NO)
#if !defined ENABLE_OP_KEY_XF86XK_BRIGHTNESS_ADJUST || (ENABLE_OP_KEY_XF86XK_BRIGHTNESS_ADJUST != YES && ENABLE_OP_KEY_XF86XK_BRIGHTNESS_ADJUST != NO)
#	error "You need to decide if OP_KEY_XF86XK_BRIGHTNESS_ADJUST (BrightnessAdjust) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_BRIGHTNESS_ADJUST || (ENABLE_OP_KEY_XF86XK_BRIGHTNESS_ADJUST != YES && ENABLE_OP_KEY_XF86XK_BRIGHTNESS_ADJUST != NO)
#if ENABLE_OP_KEY_XF86XK_BRIGHTNESS_ADJUST == YES
#	define OP_KEY_XF86XK_BRIGHTNESS_ADJUST_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_BRIGHTNESS_ADJUST == YES
#undef ENABLE_OP_KEY_XF86XK_BRIGHTNESS_ADJUST
#if !defined ENABLE_OP_KEY_XF86XK_FINANCE || (ENABLE_OP_KEY_XF86XK_FINANCE != YES && ENABLE_OP_KEY_XF86XK_FINANCE != NO)
#	error "You need to decide if OP_KEY_XF86XK_FINANCE (Finance) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_FINANCE || (ENABLE_OP_KEY_XF86XK_FINANCE != YES && ENABLE_OP_KEY_XF86XK_FINANCE != NO)
#if !defined ENABLE_OP_KEY_XF86XK_FINANCE || (ENABLE_OP_KEY_XF86XK_FINANCE != YES && ENABLE_OP_KEY_XF86XK_FINANCE != NO)
#	error "You need to decide if OP_KEY_XF86XK_FINANCE (Finance) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_FINANCE || (ENABLE_OP_KEY_XF86XK_FINANCE != YES && ENABLE_OP_KEY_XF86XK_FINANCE != NO)
#if ENABLE_OP_KEY_XF86XK_FINANCE == YES
#	define OP_KEY_XF86XK_FINANCE_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_FINANCE == YES
#undef ENABLE_OP_KEY_XF86XK_FINANCE
#if !defined ENABLE_OP_KEY_XF86XK_COMMUNITY || (ENABLE_OP_KEY_XF86XK_COMMUNITY != YES && ENABLE_OP_KEY_XF86XK_COMMUNITY != NO)
#	error "You need to decide if OP_KEY_XF86XK_COMMUNITY (Community) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_COMMUNITY || (ENABLE_OP_KEY_XF86XK_COMMUNITY != YES && ENABLE_OP_KEY_XF86XK_COMMUNITY != NO)
#if !defined ENABLE_OP_KEY_XF86XK_COMMUNITY || (ENABLE_OP_KEY_XF86XK_COMMUNITY != YES && ENABLE_OP_KEY_XF86XK_COMMUNITY != NO)
#	error "You need to decide if OP_KEY_XF86XK_COMMUNITY (Community) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_COMMUNITY || (ENABLE_OP_KEY_XF86XK_COMMUNITY != YES && ENABLE_OP_KEY_XF86XK_COMMUNITY != NO)
#if ENABLE_OP_KEY_XF86XK_COMMUNITY == YES
#	define OP_KEY_XF86XK_COMMUNITY_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_COMMUNITY == YES
#undef ENABLE_OP_KEY_XF86XK_COMMUNITY
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_REWIND || (ENABLE_OP_KEY_XF86XK_AUDIO_REWIND != YES && ENABLE_OP_KEY_XF86XK_AUDIO_REWIND != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_REWIND (AudioRewind) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_REWIND || (ENABLE_OP_KEY_XF86XK_AUDIO_REWIND != YES && ENABLE_OP_KEY_XF86XK_AUDIO_REWIND != NO)
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_REWIND || (ENABLE_OP_KEY_XF86XK_AUDIO_REWIND != YES && ENABLE_OP_KEY_XF86XK_AUDIO_REWIND != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_REWIND (AudioRewind) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_REWIND || (ENABLE_OP_KEY_XF86XK_AUDIO_REWIND != YES && ENABLE_OP_KEY_XF86XK_AUDIO_REWIND != NO)
#if ENABLE_OP_KEY_XF86XK_AUDIO_REWIND == YES
#	define OP_KEY_XF86XK_AUDIO_REWIND_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_AUDIO_REWIND == YES
#undef ENABLE_OP_KEY_XF86XK_AUDIO_REWIND
#if !defined ENABLE_OP_KEY_XF86XK_BACK_FORWARD || (ENABLE_OP_KEY_XF86XK_BACK_FORWARD != YES && ENABLE_OP_KEY_XF86XK_BACK_FORWARD != NO)
#	error "You need to decide if OP_KEY_XF86XK_BACK_FORWARD (BackForward) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_BACK_FORWARD || (ENABLE_OP_KEY_XF86XK_BACK_FORWARD != YES && ENABLE_OP_KEY_XF86XK_BACK_FORWARD != NO)
#if !defined ENABLE_OP_KEY_XF86XK_BACK_FORWARD || (ENABLE_OP_KEY_XF86XK_BACK_FORWARD != YES && ENABLE_OP_KEY_XF86XK_BACK_FORWARD != NO)
#	error "You need to decide if OP_KEY_XF86XK_BACK_FORWARD (BackForward) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_BACK_FORWARD || (ENABLE_OP_KEY_XF86XK_BACK_FORWARD != YES && ENABLE_OP_KEY_XF86XK_BACK_FORWARD != NO)
#if ENABLE_OP_KEY_XF86XK_BACK_FORWARD == YES
#	define OP_KEY_XF86XK_BACK_FORWARD_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_BACK_FORWARD == YES
#undef ENABLE_OP_KEY_XF86XK_BACK_FORWARD
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH0 || (ENABLE_OP_KEY_XF86XK_LAUNCH0 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH0 != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH0 (Launch0) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH0 || (ENABLE_OP_KEY_XF86XK_LAUNCH0 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH0 != NO)
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH0 || (ENABLE_OP_KEY_XF86XK_LAUNCH0 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH0 != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH0 (Launch0) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH0 || (ENABLE_OP_KEY_XF86XK_LAUNCH0 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH0 != NO)
#if ENABLE_OP_KEY_XF86XK_LAUNCH0 == YES
#	define OP_KEY_XF86XK_LAUNCH0_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_LAUNCH0 == YES
#undef ENABLE_OP_KEY_XF86XK_LAUNCH0
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH1 || (ENABLE_OP_KEY_XF86XK_LAUNCH1 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH1 != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH1 (Launch1) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH1 || (ENABLE_OP_KEY_XF86XK_LAUNCH1 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH1 != NO)
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH1 || (ENABLE_OP_KEY_XF86XK_LAUNCH1 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH1 != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH1 (Launch1) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH1 || (ENABLE_OP_KEY_XF86XK_LAUNCH1 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH1 != NO)
#if ENABLE_OP_KEY_XF86XK_LAUNCH1 == YES
#	define OP_KEY_XF86XK_LAUNCH1_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_LAUNCH1 == YES
#undef ENABLE_OP_KEY_XF86XK_LAUNCH1
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH2 || (ENABLE_OP_KEY_XF86XK_LAUNCH2 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH2 != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH2 (Launch2) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH2 || (ENABLE_OP_KEY_XF86XK_LAUNCH2 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH2 != NO)
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH2 || (ENABLE_OP_KEY_XF86XK_LAUNCH2 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH2 != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH2 (Launch2) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH2 || (ENABLE_OP_KEY_XF86XK_LAUNCH2 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH2 != NO)
#if ENABLE_OP_KEY_XF86XK_LAUNCH2 == YES
#	define OP_KEY_XF86XK_LAUNCH2_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_LAUNCH2 == YES
#undef ENABLE_OP_KEY_XF86XK_LAUNCH2
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH3 || (ENABLE_OP_KEY_XF86XK_LAUNCH3 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH3 != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH3 (Launch3) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH3 || (ENABLE_OP_KEY_XF86XK_LAUNCH3 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH3 != NO)
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH3 || (ENABLE_OP_KEY_XF86XK_LAUNCH3 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH3 != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH3 (Launch3) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH3 || (ENABLE_OP_KEY_XF86XK_LAUNCH3 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH3 != NO)
#if ENABLE_OP_KEY_XF86XK_LAUNCH3 == YES
#	define OP_KEY_XF86XK_LAUNCH3_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_LAUNCH3 == YES
#undef ENABLE_OP_KEY_XF86XK_LAUNCH3
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH4 || (ENABLE_OP_KEY_XF86XK_LAUNCH4 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH4 != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH4 (Launch4) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH4 || (ENABLE_OP_KEY_XF86XK_LAUNCH4 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH4 != NO)
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH4 || (ENABLE_OP_KEY_XF86XK_LAUNCH4 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH4 != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH4 (Launch4) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH4 || (ENABLE_OP_KEY_XF86XK_LAUNCH4 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH4 != NO)
#if ENABLE_OP_KEY_XF86XK_LAUNCH4 == YES
#	define OP_KEY_XF86XK_LAUNCH4_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_LAUNCH4 == YES
#undef ENABLE_OP_KEY_XF86XK_LAUNCH4
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH5 || (ENABLE_OP_KEY_XF86XK_LAUNCH5 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH5 != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH5 (Launch5) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH5 || (ENABLE_OP_KEY_XF86XK_LAUNCH5 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH5 != NO)
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH5 || (ENABLE_OP_KEY_XF86XK_LAUNCH5 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH5 != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH5 (Launch5) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH5 || (ENABLE_OP_KEY_XF86XK_LAUNCH5 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH5 != NO)
#if ENABLE_OP_KEY_XF86XK_LAUNCH5 == YES
#	define OP_KEY_XF86XK_LAUNCH5_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_LAUNCH5 == YES
#undef ENABLE_OP_KEY_XF86XK_LAUNCH5
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH6 || (ENABLE_OP_KEY_XF86XK_LAUNCH6 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH6 != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH6 (Launch6) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH6 || (ENABLE_OP_KEY_XF86XK_LAUNCH6 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH6 != NO)
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH6 || (ENABLE_OP_KEY_XF86XK_LAUNCH6 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH6 != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH6 (Launch6) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH6 || (ENABLE_OP_KEY_XF86XK_LAUNCH6 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH6 != NO)
#if ENABLE_OP_KEY_XF86XK_LAUNCH6 == YES
#	define OP_KEY_XF86XK_LAUNCH6_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_LAUNCH6 == YES
#undef ENABLE_OP_KEY_XF86XK_LAUNCH6
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH7 || (ENABLE_OP_KEY_XF86XK_LAUNCH7 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH7 != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH7 (Launch7) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH7 || (ENABLE_OP_KEY_XF86XK_LAUNCH7 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH7 != NO)
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH7 || (ENABLE_OP_KEY_XF86XK_LAUNCH7 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH7 != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH7 (Launch7) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH7 || (ENABLE_OP_KEY_XF86XK_LAUNCH7 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH7 != NO)
#if ENABLE_OP_KEY_XF86XK_LAUNCH7 == YES
#	define OP_KEY_XF86XK_LAUNCH7_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_LAUNCH7 == YES
#undef ENABLE_OP_KEY_XF86XK_LAUNCH7
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH8 || (ENABLE_OP_KEY_XF86XK_LAUNCH8 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH8 != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH8 (Launch8) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH8 || (ENABLE_OP_KEY_XF86XK_LAUNCH8 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH8 != NO)
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH8 || (ENABLE_OP_KEY_XF86XK_LAUNCH8 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH8 != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH8 (Launch8) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH8 || (ENABLE_OP_KEY_XF86XK_LAUNCH8 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH8 != NO)
#if ENABLE_OP_KEY_XF86XK_LAUNCH8 == YES
#	define OP_KEY_XF86XK_LAUNCH8_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_LAUNCH8 == YES
#undef ENABLE_OP_KEY_XF86XK_LAUNCH8
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH9 || (ENABLE_OP_KEY_XF86XK_LAUNCH9 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH9 != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH9 (Launch9) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH9 || (ENABLE_OP_KEY_XF86XK_LAUNCH9 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH9 != NO)
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH9 || (ENABLE_OP_KEY_XF86XK_LAUNCH9 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH9 != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH9 (Launch9) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH9 || (ENABLE_OP_KEY_XF86XK_LAUNCH9 != YES && ENABLE_OP_KEY_XF86XK_LAUNCH9 != NO)
#if ENABLE_OP_KEY_XF86XK_LAUNCH9 == YES
#	define OP_KEY_XF86XK_LAUNCH9_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_LAUNCH9 == YES
#undef ENABLE_OP_KEY_XF86XK_LAUNCH9
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH_A || (ENABLE_OP_KEY_XF86XK_LAUNCH_A != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_A != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH_A (LaunchA) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH_A || (ENABLE_OP_KEY_XF86XK_LAUNCH_A != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_A != NO)
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH_A || (ENABLE_OP_KEY_XF86XK_LAUNCH_A != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_A != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH_A (LaunchA) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH_A || (ENABLE_OP_KEY_XF86XK_LAUNCH_A != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_A != NO)
#if ENABLE_OP_KEY_XF86XK_LAUNCH_A == YES
#	define OP_KEY_XF86XK_LAUNCH_A_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_LAUNCH_A == YES
#undef ENABLE_OP_KEY_XF86XK_LAUNCH_A
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH_B || (ENABLE_OP_KEY_XF86XK_LAUNCH_B != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_B != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH_B (LaunchB) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH_B || (ENABLE_OP_KEY_XF86XK_LAUNCH_B != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_B != NO)
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH_B || (ENABLE_OP_KEY_XF86XK_LAUNCH_B != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_B != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH_B (LaunchB) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH_B || (ENABLE_OP_KEY_XF86XK_LAUNCH_B != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_B != NO)
#if ENABLE_OP_KEY_XF86XK_LAUNCH_B == YES
#	define OP_KEY_XF86XK_LAUNCH_B_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_LAUNCH_B == YES
#undef ENABLE_OP_KEY_XF86XK_LAUNCH_B
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH_C || (ENABLE_OP_KEY_XF86XK_LAUNCH_C != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_C != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH_C (LaunchC) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH_C || (ENABLE_OP_KEY_XF86XK_LAUNCH_C != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_C != NO)
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH_C || (ENABLE_OP_KEY_XF86XK_LAUNCH_C != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_C != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH_C (LaunchC) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH_C || (ENABLE_OP_KEY_XF86XK_LAUNCH_C != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_C != NO)
#if ENABLE_OP_KEY_XF86XK_LAUNCH_C == YES
#	define OP_KEY_XF86XK_LAUNCH_C_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_LAUNCH_C == YES
#undef ENABLE_OP_KEY_XF86XK_LAUNCH_C
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH_D || (ENABLE_OP_KEY_XF86XK_LAUNCH_D != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_D != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH_D (LaunchD) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH_D || (ENABLE_OP_KEY_XF86XK_LAUNCH_D != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_D != NO)
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH_D || (ENABLE_OP_KEY_XF86XK_LAUNCH_D != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_D != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH_D (LaunchD) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH_D || (ENABLE_OP_KEY_XF86XK_LAUNCH_D != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_D != NO)
#if ENABLE_OP_KEY_XF86XK_LAUNCH_D == YES
#	define OP_KEY_XF86XK_LAUNCH_D_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_LAUNCH_D == YES
#undef ENABLE_OP_KEY_XF86XK_LAUNCH_D
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH_E || (ENABLE_OP_KEY_XF86XK_LAUNCH_E != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_E != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH_E (LaunchE) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH_E || (ENABLE_OP_KEY_XF86XK_LAUNCH_E != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_E != NO)
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH_E || (ENABLE_OP_KEY_XF86XK_LAUNCH_E != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_E != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH_E (LaunchE) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH_E || (ENABLE_OP_KEY_XF86XK_LAUNCH_E != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_E != NO)
#if ENABLE_OP_KEY_XF86XK_LAUNCH_E == YES
#	define OP_KEY_XF86XK_LAUNCH_E_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_LAUNCH_E == YES
#undef ENABLE_OP_KEY_XF86XK_LAUNCH_E
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH_F || (ENABLE_OP_KEY_XF86XK_LAUNCH_F != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_F != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH_F (LaunchF) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH_F || (ENABLE_OP_KEY_XF86XK_LAUNCH_F != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_F != NO)
#if !defined ENABLE_OP_KEY_XF86XK_LAUNCH_F || (ENABLE_OP_KEY_XF86XK_LAUNCH_F != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_F != NO)
#	error "You need to decide if OP_KEY_XF86XK_LAUNCH_F (LaunchF) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LAUNCH_F || (ENABLE_OP_KEY_XF86XK_LAUNCH_F != YES && ENABLE_OP_KEY_XF86XK_LAUNCH_F != NO)
#if ENABLE_OP_KEY_XF86XK_LAUNCH_F == YES
#	define OP_KEY_XF86XK_LAUNCH_F_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_LAUNCH_F == YES
#undef ENABLE_OP_KEY_XF86XK_LAUNCH_F
#if !defined ENABLE_OP_KEY_XF86XK_APPLICATION_LEFT || (ENABLE_OP_KEY_XF86XK_APPLICATION_LEFT != YES && ENABLE_OP_KEY_XF86XK_APPLICATION_LEFT != NO)
#	error "You need to decide if OP_KEY_XF86XK_APPLICATION_LEFT (ApplicationLeft) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_APPLICATION_LEFT || (ENABLE_OP_KEY_XF86XK_APPLICATION_LEFT != YES && ENABLE_OP_KEY_XF86XK_APPLICATION_LEFT != NO)
#if !defined ENABLE_OP_KEY_XF86XK_APPLICATION_LEFT || (ENABLE_OP_KEY_XF86XK_APPLICATION_LEFT != YES && ENABLE_OP_KEY_XF86XK_APPLICATION_LEFT != NO)
#	error "You need to decide if OP_KEY_XF86XK_APPLICATION_LEFT (ApplicationLeft) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_APPLICATION_LEFT || (ENABLE_OP_KEY_XF86XK_APPLICATION_LEFT != YES && ENABLE_OP_KEY_XF86XK_APPLICATION_LEFT != NO)
#if ENABLE_OP_KEY_XF86XK_APPLICATION_LEFT == YES
#	define OP_KEY_XF86XK_APPLICATION_LEFT_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_APPLICATION_LEFT == YES
#undef ENABLE_OP_KEY_XF86XK_APPLICATION_LEFT
#if !defined ENABLE_OP_KEY_XF86XK_APPLICATION_RIGHT || (ENABLE_OP_KEY_XF86XK_APPLICATION_RIGHT != YES && ENABLE_OP_KEY_XF86XK_APPLICATION_RIGHT != NO)
#	error "You need to decide if OP_KEY_XF86XK_APPLICATION_RIGHT (ApplicationRight) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_APPLICATION_RIGHT || (ENABLE_OP_KEY_XF86XK_APPLICATION_RIGHT != YES && ENABLE_OP_KEY_XF86XK_APPLICATION_RIGHT != NO)
#if !defined ENABLE_OP_KEY_XF86XK_APPLICATION_RIGHT || (ENABLE_OP_KEY_XF86XK_APPLICATION_RIGHT != YES && ENABLE_OP_KEY_XF86XK_APPLICATION_RIGHT != NO)
#	error "You need to decide if OP_KEY_XF86XK_APPLICATION_RIGHT (ApplicationRight) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_APPLICATION_RIGHT || (ENABLE_OP_KEY_XF86XK_APPLICATION_RIGHT != YES && ENABLE_OP_KEY_XF86XK_APPLICATION_RIGHT != NO)
#if ENABLE_OP_KEY_XF86XK_APPLICATION_RIGHT == YES
#	define OP_KEY_XF86XK_APPLICATION_RIGHT_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_APPLICATION_RIGHT == YES
#undef ENABLE_OP_KEY_XF86XK_APPLICATION_RIGHT
#if !defined ENABLE_OP_KEY_XF86XK_BOOK || (ENABLE_OP_KEY_XF86XK_BOOK != YES && ENABLE_OP_KEY_XF86XK_BOOK != NO)
#	error "You need to decide if OP_KEY_XF86XK_BOOK (Book) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_BOOK || (ENABLE_OP_KEY_XF86XK_BOOK != YES && ENABLE_OP_KEY_XF86XK_BOOK != NO)
#if !defined ENABLE_OP_KEY_XF86XK_BOOK || (ENABLE_OP_KEY_XF86XK_BOOK != YES && ENABLE_OP_KEY_XF86XK_BOOK != NO)
#	error "You need to decide if OP_KEY_XF86XK_BOOK (Book) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_BOOK || (ENABLE_OP_KEY_XF86XK_BOOK != YES && ENABLE_OP_KEY_XF86XK_BOOK != NO)
#if ENABLE_OP_KEY_XF86XK_BOOK == YES
#	define OP_KEY_XF86XK_BOOK_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_BOOK == YES
#undef ENABLE_OP_KEY_XF86XK_BOOK
#if !defined ENABLE_OP_KEY_XF86XK_CD || (ENABLE_OP_KEY_XF86XK_CD != YES && ENABLE_OP_KEY_XF86XK_CD != NO)
#	error "You need to decide if OP_KEY_XF86XK_CD (CD) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_CD || (ENABLE_OP_KEY_XF86XK_CD != YES && ENABLE_OP_KEY_XF86XK_CD != NO)
#if !defined ENABLE_OP_KEY_XF86XK_CD || (ENABLE_OP_KEY_XF86XK_CD != YES && ENABLE_OP_KEY_XF86XK_CD != NO)
#	error "You need to decide if OP_KEY_XF86XK_CD (CD) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_CD || (ENABLE_OP_KEY_XF86XK_CD != YES && ENABLE_OP_KEY_XF86XK_CD != NO)
#if ENABLE_OP_KEY_XF86XK_CD == YES
#	define OP_KEY_XF86XK_CD_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_CD == YES
#undef ENABLE_OP_KEY_XF86XK_CD
#if !defined ENABLE_OP_KEY_XF86XK_CLOSE || (ENABLE_OP_KEY_XF86XK_CLOSE != YES && ENABLE_OP_KEY_XF86XK_CLOSE != NO)
#	error "You need to decide if OP_KEY_XF86XK_CLOSE (Close) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_CLOSE || (ENABLE_OP_KEY_XF86XK_CLOSE != YES && ENABLE_OP_KEY_XF86XK_CLOSE != NO)
#if !defined ENABLE_OP_KEY_XF86XK_CLOSE || (ENABLE_OP_KEY_XF86XK_CLOSE != YES && ENABLE_OP_KEY_XF86XK_CLOSE != NO)
#	error "You need to decide if OP_KEY_XF86XK_CLOSE (Close) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_CLOSE || (ENABLE_OP_KEY_XF86XK_CLOSE != YES && ENABLE_OP_KEY_XF86XK_CLOSE != NO)
#if ENABLE_OP_KEY_XF86XK_CLOSE == YES
#	define OP_KEY_XF86XK_CLOSE_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_CLOSE == YES
#undef ENABLE_OP_KEY_XF86XK_CLOSE
#if !defined ENABLE_OP_KEY_XF86XK_COPY || (ENABLE_OP_KEY_XF86XK_COPY != YES && ENABLE_OP_KEY_XF86XK_COPY != NO)
#	error "You need to decide if OP_KEY_XF86XK_COPY (Copy) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_COPY || (ENABLE_OP_KEY_XF86XK_COPY != YES && ENABLE_OP_KEY_XF86XK_COPY != NO)
#if !defined ENABLE_OP_KEY_XF86XK_COPY || (ENABLE_OP_KEY_XF86XK_COPY != YES && ENABLE_OP_KEY_XF86XK_COPY != NO)
#	error "You need to decide if OP_KEY_XF86XK_COPY (Copy) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_COPY || (ENABLE_OP_KEY_XF86XK_COPY != YES && ENABLE_OP_KEY_XF86XK_COPY != NO)
#if ENABLE_OP_KEY_XF86XK_COPY == YES
#	define OP_KEY_XF86XK_COPY_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_COPY == YES
#undef ENABLE_OP_KEY_XF86XK_COPY
#if !defined ENABLE_OP_KEY_XF86XK_CUT || (ENABLE_OP_KEY_XF86XK_CUT != YES && ENABLE_OP_KEY_XF86XK_CUT != NO)
#	error "You need to decide if OP_KEY_XF86XK_CUT (Cut) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_CUT || (ENABLE_OP_KEY_XF86XK_CUT != YES && ENABLE_OP_KEY_XF86XK_CUT != NO)
#if !defined ENABLE_OP_KEY_XF86XK_CUT || (ENABLE_OP_KEY_XF86XK_CUT != YES && ENABLE_OP_KEY_XF86XK_CUT != NO)
#	error "You need to decide if OP_KEY_XF86XK_CUT (Cut) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_CUT || (ENABLE_OP_KEY_XF86XK_CUT != YES && ENABLE_OP_KEY_XF86XK_CUT != NO)
#if ENABLE_OP_KEY_XF86XK_CUT == YES
#	define OP_KEY_XF86XK_CUT_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_CUT == YES
#undef ENABLE_OP_KEY_XF86XK_CUT
#if !defined ENABLE_OP_KEY_XF86XK_DISPLAY || (ENABLE_OP_KEY_XF86XK_DISPLAY != YES && ENABLE_OP_KEY_XF86XK_DISPLAY != NO)
#	error "You need to decide if OP_KEY_XF86XK_DISPLAY (Display) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_DISPLAY || (ENABLE_OP_KEY_XF86XK_DISPLAY != YES && ENABLE_OP_KEY_XF86XK_DISPLAY != NO)
#if !defined ENABLE_OP_KEY_XF86XK_DISPLAY || (ENABLE_OP_KEY_XF86XK_DISPLAY != YES && ENABLE_OP_KEY_XF86XK_DISPLAY != NO)
#	error "You need to decide if OP_KEY_XF86XK_DISPLAY (Display) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_DISPLAY || (ENABLE_OP_KEY_XF86XK_DISPLAY != YES && ENABLE_OP_KEY_XF86XK_DISPLAY != NO)
#if ENABLE_OP_KEY_XF86XK_DISPLAY == YES
#	define OP_KEY_XF86XK_DISPLAY_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_DISPLAY == YES
#undef ENABLE_OP_KEY_XF86XK_DISPLAY
#if !defined ENABLE_OP_KEY_XF86XK_DOS || (ENABLE_OP_KEY_XF86XK_DOS != YES && ENABLE_OP_KEY_XF86XK_DOS != NO)
#	error "You need to decide if OP_KEY_XF86XK_DOS (DOS) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_DOS || (ENABLE_OP_KEY_XF86XK_DOS != YES && ENABLE_OP_KEY_XF86XK_DOS != NO)
#if !defined ENABLE_OP_KEY_XF86XK_DOS || (ENABLE_OP_KEY_XF86XK_DOS != YES && ENABLE_OP_KEY_XF86XK_DOS != NO)
#	error "You need to decide if OP_KEY_XF86XK_DOS (DOS) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_DOS || (ENABLE_OP_KEY_XF86XK_DOS != YES && ENABLE_OP_KEY_XF86XK_DOS != NO)
#if ENABLE_OP_KEY_XF86XK_DOS == YES
#	define OP_KEY_XF86XK_DOS_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_DOS == YES
#undef ENABLE_OP_KEY_XF86XK_DOS
#if !defined ENABLE_OP_KEY_XF86XK_DOCUMENTS || (ENABLE_OP_KEY_XF86XK_DOCUMENTS != YES && ENABLE_OP_KEY_XF86XK_DOCUMENTS != NO)
#	error "You need to decide if OP_KEY_XF86XK_DOCUMENTS (Documents) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_DOCUMENTS || (ENABLE_OP_KEY_XF86XK_DOCUMENTS != YES && ENABLE_OP_KEY_XF86XK_DOCUMENTS != NO)
#if !defined ENABLE_OP_KEY_XF86XK_DOCUMENTS || (ENABLE_OP_KEY_XF86XK_DOCUMENTS != YES && ENABLE_OP_KEY_XF86XK_DOCUMENTS != NO)
#	error "You need to decide if OP_KEY_XF86XK_DOCUMENTS (Documents) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_DOCUMENTS || (ENABLE_OP_KEY_XF86XK_DOCUMENTS != YES && ENABLE_OP_KEY_XF86XK_DOCUMENTS != NO)
#if ENABLE_OP_KEY_XF86XK_DOCUMENTS == YES
#	define OP_KEY_XF86XK_DOCUMENTS_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_DOCUMENTS == YES
#undef ENABLE_OP_KEY_XF86XK_DOCUMENTS
#if !defined ENABLE_OP_KEY_XF86XK_EXCEL || (ENABLE_OP_KEY_XF86XK_EXCEL != YES && ENABLE_OP_KEY_XF86XK_EXCEL != NO)
#	error "You need to decide if OP_KEY_XF86XK_EXCEL (Excel) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_EXCEL || (ENABLE_OP_KEY_XF86XK_EXCEL != YES && ENABLE_OP_KEY_XF86XK_EXCEL != NO)
#if !defined ENABLE_OP_KEY_XF86XK_EXCEL || (ENABLE_OP_KEY_XF86XK_EXCEL != YES && ENABLE_OP_KEY_XF86XK_EXCEL != NO)
#	error "You need to decide if OP_KEY_XF86XK_EXCEL (Excel) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_EXCEL || (ENABLE_OP_KEY_XF86XK_EXCEL != YES && ENABLE_OP_KEY_XF86XK_EXCEL != NO)
#if ENABLE_OP_KEY_XF86XK_EXCEL == YES
#	define OP_KEY_XF86XK_EXCEL_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_EXCEL == YES
#undef ENABLE_OP_KEY_XF86XK_EXCEL
#if !defined ENABLE_OP_KEY_XF86XK_EXPLORER || (ENABLE_OP_KEY_XF86XK_EXPLORER != YES && ENABLE_OP_KEY_XF86XK_EXPLORER != NO)
#	error "You need to decide if OP_KEY_XF86XK_EXPLORER (Explorer) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_EXPLORER || (ENABLE_OP_KEY_XF86XK_EXPLORER != YES && ENABLE_OP_KEY_XF86XK_EXPLORER != NO)
#if !defined ENABLE_OP_KEY_XF86XK_EXPLORER || (ENABLE_OP_KEY_XF86XK_EXPLORER != YES && ENABLE_OP_KEY_XF86XK_EXPLORER != NO)
#	error "You need to decide if OP_KEY_XF86XK_EXPLORER (Explorer) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_EXPLORER || (ENABLE_OP_KEY_XF86XK_EXPLORER != YES && ENABLE_OP_KEY_XF86XK_EXPLORER != NO)
#if ENABLE_OP_KEY_XF86XK_EXPLORER == YES
#	define OP_KEY_XF86XK_EXPLORER_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_EXPLORER == YES
#undef ENABLE_OP_KEY_XF86XK_EXPLORER
#if !defined ENABLE_OP_KEY_XF86XK_GAME || (ENABLE_OP_KEY_XF86XK_GAME != YES && ENABLE_OP_KEY_XF86XK_GAME != NO)
#	error "You need to decide if OP_KEY_XF86XK_GAME (Game) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_GAME || (ENABLE_OP_KEY_XF86XK_GAME != YES && ENABLE_OP_KEY_XF86XK_GAME != NO)
#if !defined ENABLE_OP_KEY_XF86XK_GAME || (ENABLE_OP_KEY_XF86XK_GAME != YES && ENABLE_OP_KEY_XF86XK_GAME != NO)
#	error "You need to decide if OP_KEY_XF86XK_GAME (Game) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_GAME || (ENABLE_OP_KEY_XF86XK_GAME != YES && ENABLE_OP_KEY_XF86XK_GAME != NO)
#if ENABLE_OP_KEY_XF86XK_GAME == YES
#	define OP_KEY_XF86XK_GAME_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_GAME == YES
#undef ENABLE_OP_KEY_XF86XK_GAME
#if !defined ENABLE_OP_KEY_XF86XK_GO || (ENABLE_OP_KEY_XF86XK_GO != YES && ENABLE_OP_KEY_XF86XK_GO != NO)
#	error "You need to decide if OP_KEY_XF86XK_GO (Go) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_GO || (ENABLE_OP_KEY_XF86XK_GO != YES && ENABLE_OP_KEY_XF86XK_GO != NO)
#if !defined ENABLE_OP_KEY_XF86XK_GO || (ENABLE_OP_KEY_XF86XK_GO != YES && ENABLE_OP_KEY_XF86XK_GO != NO)
#	error "You need to decide if OP_KEY_XF86XK_GO (Go) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_GO || (ENABLE_OP_KEY_XF86XK_GO != YES && ENABLE_OP_KEY_XF86XK_GO != NO)
#if ENABLE_OP_KEY_XF86XK_GO == YES
#	define OP_KEY_XF86XK_GO_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_GO == YES
#undef ENABLE_OP_KEY_XF86XK_GO
#if !defined ENABLE_OP_KEY_XF86XK_I_TOUCH || (ENABLE_OP_KEY_XF86XK_I_TOUCH != YES && ENABLE_OP_KEY_XF86XK_I_TOUCH != NO)
#	error "You need to decide if OP_KEY_XF86XK_I_TOUCH (iTouch) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_I_TOUCH || (ENABLE_OP_KEY_XF86XK_I_TOUCH != YES && ENABLE_OP_KEY_XF86XK_I_TOUCH != NO)
#if !defined ENABLE_OP_KEY_XF86XK_I_TOUCH || (ENABLE_OP_KEY_XF86XK_I_TOUCH != YES && ENABLE_OP_KEY_XF86XK_I_TOUCH != NO)
#	error "You need to decide if OP_KEY_XF86XK_I_TOUCH (iTouch) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_I_TOUCH || (ENABLE_OP_KEY_XF86XK_I_TOUCH != YES && ENABLE_OP_KEY_XF86XK_I_TOUCH != NO)
#if ENABLE_OP_KEY_XF86XK_I_TOUCH == YES
#	define OP_KEY_XF86XK_I_TOUCH_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_I_TOUCH == YES
#undef ENABLE_OP_KEY_XF86XK_I_TOUCH
#if !defined ENABLE_OP_KEY_XF86XK_LOG_OFF || (ENABLE_OP_KEY_XF86XK_LOG_OFF != YES && ENABLE_OP_KEY_XF86XK_LOG_OFF != NO)
#	error "You need to decide if OP_KEY_XF86XK_LOG_OFF (LogOff) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LOG_OFF || (ENABLE_OP_KEY_XF86XK_LOG_OFF != YES && ENABLE_OP_KEY_XF86XK_LOG_OFF != NO)
#if !defined ENABLE_OP_KEY_XF86XK_LOG_OFF || (ENABLE_OP_KEY_XF86XK_LOG_OFF != YES && ENABLE_OP_KEY_XF86XK_LOG_OFF != NO)
#	error "You need to decide if OP_KEY_XF86XK_LOG_OFF (LogOff) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_LOG_OFF || (ENABLE_OP_KEY_XF86XK_LOG_OFF != YES && ENABLE_OP_KEY_XF86XK_LOG_OFF != NO)
#if ENABLE_OP_KEY_XF86XK_LOG_OFF == YES
#	define OP_KEY_XF86XK_LOG_OFF_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_LOG_OFF == YES
#undef ENABLE_OP_KEY_XF86XK_LOG_OFF
#if !defined ENABLE_OP_KEY_XF86XK_MARKET || (ENABLE_OP_KEY_XF86XK_MARKET != YES && ENABLE_OP_KEY_XF86XK_MARKET != NO)
#	error "You need to decide if OP_KEY_XF86XK_MARKET (Market) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MARKET || (ENABLE_OP_KEY_XF86XK_MARKET != YES && ENABLE_OP_KEY_XF86XK_MARKET != NO)
#if !defined ENABLE_OP_KEY_XF86XK_MARKET || (ENABLE_OP_KEY_XF86XK_MARKET != YES && ENABLE_OP_KEY_XF86XK_MARKET != NO)
#	error "You need to decide if OP_KEY_XF86XK_MARKET (Market) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MARKET || (ENABLE_OP_KEY_XF86XK_MARKET != YES && ENABLE_OP_KEY_XF86XK_MARKET != NO)
#if ENABLE_OP_KEY_XF86XK_MARKET == YES
#	define OP_KEY_XF86XK_MARKET_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_MARKET == YES
#undef ENABLE_OP_KEY_XF86XK_MARKET
#if !defined ENABLE_OP_KEY_XF86XK_MEETING || (ENABLE_OP_KEY_XF86XK_MEETING != YES && ENABLE_OP_KEY_XF86XK_MEETING != NO)
#	error "You need to decide if OP_KEY_XF86XK_MEETING (Meeting) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MEETING || (ENABLE_OP_KEY_XF86XK_MEETING != YES && ENABLE_OP_KEY_XF86XK_MEETING != NO)
#if !defined ENABLE_OP_KEY_XF86XK_MEETING || (ENABLE_OP_KEY_XF86XK_MEETING != YES && ENABLE_OP_KEY_XF86XK_MEETING != NO)
#	error "You need to decide if OP_KEY_XF86XK_MEETING (Meeting) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MEETING || (ENABLE_OP_KEY_XF86XK_MEETING != YES && ENABLE_OP_KEY_XF86XK_MEETING != NO)
#if ENABLE_OP_KEY_XF86XK_MEETING == YES
#	define OP_KEY_XF86XK_MEETING_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_MEETING == YES
#undef ENABLE_OP_KEY_XF86XK_MEETING
#if !defined ENABLE_OP_KEY_XF86XK_MENU_KB || (ENABLE_OP_KEY_XF86XK_MENU_KB != YES && ENABLE_OP_KEY_XF86XK_MENU_KB != NO)
#	error "You need to decide if OP_KEY_XF86XK_MENU_KB (MenuKB) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MENU_KB || (ENABLE_OP_KEY_XF86XK_MENU_KB != YES && ENABLE_OP_KEY_XF86XK_MENU_KB != NO)
#if !defined ENABLE_OP_KEY_XF86XK_MENU_KB || (ENABLE_OP_KEY_XF86XK_MENU_KB != YES && ENABLE_OP_KEY_XF86XK_MENU_KB != NO)
#	error "You need to decide if OP_KEY_XF86XK_MENU_KB (MenuKB) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MENU_KB || (ENABLE_OP_KEY_XF86XK_MENU_KB != YES && ENABLE_OP_KEY_XF86XK_MENU_KB != NO)
#if ENABLE_OP_KEY_XF86XK_MENU_KB == YES
#	define OP_KEY_XF86XK_MENU_KB_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_MENU_KB == YES
#undef ENABLE_OP_KEY_XF86XK_MENU_KB
#if !defined ENABLE_OP_KEY_XF86XK_MENU_PB || (ENABLE_OP_KEY_XF86XK_MENU_PB != YES && ENABLE_OP_KEY_XF86XK_MENU_PB != NO)
#	error "You need to decide if OP_KEY_XF86XK_MENU_PB (MenuPB) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MENU_PB || (ENABLE_OP_KEY_XF86XK_MENU_PB != YES && ENABLE_OP_KEY_XF86XK_MENU_PB != NO)
#if !defined ENABLE_OP_KEY_XF86XK_MENU_PB || (ENABLE_OP_KEY_XF86XK_MENU_PB != YES && ENABLE_OP_KEY_XF86XK_MENU_PB != NO)
#	error "You need to decide if OP_KEY_XF86XK_MENU_PB (MenuPB) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MENU_PB || (ENABLE_OP_KEY_XF86XK_MENU_PB != YES && ENABLE_OP_KEY_XF86XK_MENU_PB != NO)
#if ENABLE_OP_KEY_XF86XK_MENU_PB == YES
#	define OP_KEY_XF86XK_MENU_PB_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_MENU_PB == YES
#undef ENABLE_OP_KEY_XF86XK_MENU_PB
#if !defined ENABLE_OP_KEY_XF86XK_MY_SITES || (ENABLE_OP_KEY_XF86XK_MY_SITES != YES && ENABLE_OP_KEY_XF86XK_MY_SITES != NO)
#	error "You need to decide if OP_KEY_XF86XK_MY_SITES (MySites) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MY_SITES || (ENABLE_OP_KEY_XF86XK_MY_SITES != YES && ENABLE_OP_KEY_XF86XK_MY_SITES != NO)
#if !defined ENABLE_OP_KEY_XF86XK_MY_SITES || (ENABLE_OP_KEY_XF86XK_MY_SITES != YES && ENABLE_OP_KEY_XF86XK_MY_SITES != NO)
#	error "You need to decide if OP_KEY_XF86XK_MY_SITES (MySites) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MY_SITES || (ENABLE_OP_KEY_XF86XK_MY_SITES != YES && ENABLE_OP_KEY_XF86XK_MY_SITES != NO)
#if ENABLE_OP_KEY_XF86XK_MY_SITES == YES
#	define OP_KEY_XF86XK_MY_SITES_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_MY_SITES == YES
#undef ENABLE_OP_KEY_XF86XK_MY_SITES
#if !defined ENABLE_OP_KEY_XF86XK_NEW || (ENABLE_OP_KEY_XF86XK_NEW != YES && ENABLE_OP_KEY_XF86XK_NEW != NO)
#	error "You need to decide if OP_KEY_XF86XK_NEW (New) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_NEW || (ENABLE_OP_KEY_XF86XK_NEW != YES && ENABLE_OP_KEY_XF86XK_NEW != NO)
#if !defined ENABLE_OP_KEY_XF86XK_NEW || (ENABLE_OP_KEY_XF86XK_NEW != YES && ENABLE_OP_KEY_XF86XK_NEW != NO)
#	error "You need to decide if OP_KEY_XF86XK_NEW (New) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_NEW || (ENABLE_OP_KEY_XF86XK_NEW != YES && ENABLE_OP_KEY_XF86XK_NEW != NO)
#if ENABLE_OP_KEY_XF86XK_NEW == YES
#	define OP_KEY_XF86XK_NEW_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_NEW == YES
#undef ENABLE_OP_KEY_XF86XK_NEW
#if !defined ENABLE_OP_KEY_XF86XK_NEWS || (ENABLE_OP_KEY_XF86XK_NEWS != YES && ENABLE_OP_KEY_XF86XK_NEWS != NO)
#	error "You need to decide if OP_KEY_XF86XK_NEWS (News) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_NEWS || (ENABLE_OP_KEY_XF86XK_NEWS != YES && ENABLE_OP_KEY_XF86XK_NEWS != NO)
#if !defined ENABLE_OP_KEY_XF86XK_NEWS || (ENABLE_OP_KEY_XF86XK_NEWS != YES && ENABLE_OP_KEY_XF86XK_NEWS != NO)
#	error "You need to decide if OP_KEY_XF86XK_NEWS (News) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_NEWS || (ENABLE_OP_KEY_XF86XK_NEWS != YES && ENABLE_OP_KEY_XF86XK_NEWS != NO)
#if ENABLE_OP_KEY_XF86XK_NEWS == YES
#	define OP_KEY_XF86XK_NEWS_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_NEWS == YES
#undef ENABLE_OP_KEY_XF86XK_NEWS
#if !defined ENABLE_OP_KEY_XF86XK_OFFICE_HOME || (ENABLE_OP_KEY_XF86XK_OFFICE_HOME != YES && ENABLE_OP_KEY_XF86XK_OFFICE_HOME != NO)
#	error "You need to decide if OP_KEY_XF86XK_OFFICE_HOME (OfficeHome) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_OFFICE_HOME || (ENABLE_OP_KEY_XF86XK_OFFICE_HOME != YES && ENABLE_OP_KEY_XF86XK_OFFICE_HOME != NO)
#if !defined ENABLE_OP_KEY_XF86XK_OFFICE_HOME || (ENABLE_OP_KEY_XF86XK_OFFICE_HOME != YES && ENABLE_OP_KEY_XF86XK_OFFICE_HOME != NO)
#	error "You need to decide if OP_KEY_XF86XK_OFFICE_HOME (OfficeHome) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_OFFICE_HOME || (ENABLE_OP_KEY_XF86XK_OFFICE_HOME != YES && ENABLE_OP_KEY_XF86XK_OFFICE_HOME != NO)
#if ENABLE_OP_KEY_XF86XK_OFFICE_HOME == YES
#	define OP_KEY_XF86XK_OFFICE_HOME_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_OFFICE_HOME == YES
#undef ENABLE_OP_KEY_XF86XK_OFFICE_HOME
#if !defined ENABLE_OP_KEY_XF86XK_OPEN || (ENABLE_OP_KEY_XF86XK_OPEN != YES && ENABLE_OP_KEY_XF86XK_OPEN != NO)
#	error "You need to decide if OP_KEY_XF86XK_OPEN (Open) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_OPEN || (ENABLE_OP_KEY_XF86XK_OPEN != YES && ENABLE_OP_KEY_XF86XK_OPEN != NO)
#if !defined ENABLE_OP_KEY_XF86XK_OPEN || (ENABLE_OP_KEY_XF86XK_OPEN != YES && ENABLE_OP_KEY_XF86XK_OPEN != NO)
#	error "You need to decide if OP_KEY_XF86XK_OPEN (Open) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_OPEN || (ENABLE_OP_KEY_XF86XK_OPEN != YES && ENABLE_OP_KEY_XF86XK_OPEN != NO)
#if ENABLE_OP_KEY_XF86XK_OPEN == YES
#	define OP_KEY_XF86XK_OPEN_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_OPEN == YES
#undef ENABLE_OP_KEY_XF86XK_OPEN
#if !defined ENABLE_OP_KEY_XF86XK_OPTION || (ENABLE_OP_KEY_XF86XK_OPTION != YES && ENABLE_OP_KEY_XF86XK_OPTION != NO)
#	error "You need to decide if OP_KEY_XF86XK_OPTION (Option) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_OPTION || (ENABLE_OP_KEY_XF86XK_OPTION != YES && ENABLE_OP_KEY_XF86XK_OPTION != NO)
#if !defined ENABLE_OP_KEY_XF86XK_OPTION || (ENABLE_OP_KEY_XF86XK_OPTION != YES && ENABLE_OP_KEY_XF86XK_OPTION != NO)
#	error "You need to decide if OP_KEY_XF86XK_OPTION (Option) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_OPTION || (ENABLE_OP_KEY_XF86XK_OPTION != YES && ENABLE_OP_KEY_XF86XK_OPTION != NO)
#if ENABLE_OP_KEY_XF86XK_OPTION == YES
#	define OP_KEY_XF86XK_OPTION_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_OPTION == YES
#undef ENABLE_OP_KEY_XF86XK_OPTION
#if !defined ENABLE_OP_KEY_XF86XK_PASTE || (ENABLE_OP_KEY_XF86XK_PASTE != YES && ENABLE_OP_KEY_XF86XK_PASTE != NO)
#	error "You need to decide if OP_KEY_XF86XK_PASTE (Paste) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_PASTE || (ENABLE_OP_KEY_XF86XK_PASTE != YES && ENABLE_OP_KEY_XF86XK_PASTE != NO)
#if !defined ENABLE_OP_KEY_XF86XK_PASTE || (ENABLE_OP_KEY_XF86XK_PASTE != YES && ENABLE_OP_KEY_XF86XK_PASTE != NO)
#	error "You need to decide if OP_KEY_XF86XK_PASTE (Paste) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_PASTE || (ENABLE_OP_KEY_XF86XK_PASTE != YES && ENABLE_OP_KEY_XF86XK_PASTE != NO)
#if ENABLE_OP_KEY_XF86XK_PASTE == YES
#	define OP_KEY_XF86XK_PASTE_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_PASTE == YES
#undef ENABLE_OP_KEY_XF86XK_PASTE
#if !defined ENABLE_OP_KEY_XF86XK_PHONE || (ENABLE_OP_KEY_XF86XK_PHONE != YES && ENABLE_OP_KEY_XF86XK_PHONE != NO)
#	error "You need to decide if OP_KEY_XF86XK_PHONE (Phone) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_PHONE || (ENABLE_OP_KEY_XF86XK_PHONE != YES && ENABLE_OP_KEY_XF86XK_PHONE != NO)
#if !defined ENABLE_OP_KEY_XF86XK_PHONE || (ENABLE_OP_KEY_XF86XK_PHONE != YES && ENABLE_OP_KEY_XF86XK_PHONE != NO)
#	error "You need to decide if OP_KEY_XF86XK_PHONE (Phone) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_PHONE || (ENABLE_OP_KEY_XF86XK_PHONE != YES && ENABLE_OP_KEY_XF86XK_PHONE != NO)
#if ENABLE_OP_KEY_XF86XK_PHONE == YES
#	define OP_KEY_XF86XK_PHONE_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_PHONE == YES
#undef ENABLE_OP_KEY_XF86XK_PHONE
#if !defined ENABLE_OP_KEY_XF86XK_REPLY || (ENABLE_OP_KEY_XF86XK_REPLY != YES && ENABLE_OP_KEY_XF86XK_REPLY != NO)
#	error "You need to decide if OP_KEY_XF86XK_REPLY (Reply) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_REPLY || (ENABLE_OP_KEY_XF86XK_REPLY != YES && ENABLE_OP_KEY_XF86XK_REPLY != NO)
#if !defined ENABLE_OP_KEY_XF86XK_REPLY || (ENABLE_OP_KEY_XF86XK_REPLY != YES && ENABLE_OP_KEY_XF86XK_REPLY != NO)
#	error "You need to decide if OP_KEY_XF86XK_REPLY (Reply) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_REPLY || (ENABLE_OP_KEY_XF86XK_REPLY != YES && ENABLE_OP_KEY_XF86XK_REPLY != NO)
#if ENABLE_OP_KEY_XF86XK_REPLY == YES
#	define OP_KEY_XF86XK_REPLY_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_REPLY == YES
#undef ENABLE_OP_KEY_XF86XK_REPLY
#if !defined ENABLE_OP_KEY_XF86XK_RELOAD || (ENABLE_OP_KEY_XF86XK_RELOAD != YES && ENABLE_OP_KEY_XF86XK_RELOAD != NO)
#	error "You need to decide if OP_KEY_XF86XK_RELOAD (Reload) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_RELOAD || (ENABLE_OP_KEY_XF86XK_RELOAD != YES && ENABLE_OP_KEY_XF86XK_RELOAD != NO)
#if !defined ENABLE_OP_KEY_XF86XK_RELOAD || (ENABLE_OP_KEY_XF86XK_RELOAD != YES && ENABLE_OP_KEY_XF86XK_RELOAD != NO)
#	error "You need to decide if OP_KEY_XF86XK_RELOAD (Reload) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_RELOAD || (ENABLE_OP_KEY_XF86XK_RELOAD != YES && ENABLE_OP_KEY_XF86XK_RELOAD != NO)
#if ENABLE_OP_KEY_XF86XK_RELOAD == YES
#	define OP_KEY_XF86XK_RELOAD_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_RELOAD == YES
#undef ENABLE_OP_KEY_XF86XK_RELOAD
#if !defined ENABLE_OP_KEY_XF86XK_ROTATE_WINDOWS || (ENABLE_OP_KEY_XF86XK_ROTATE_WINDOWS != YES && ENABLE_OP_KEY_XF86XK_ROTATE_WINDOWS != NO)
#	error "You need to decide if OP_KEY_XF86XK_ROTATE_WINDOWS (RotateWindows) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_ROTATE_WINDOWS || (ENABLE_OP_KEY_XF86XK_ROTATE_WINDOWS != YES && ENABLE_OP_KEY_XF86XK_ROTATE_WINDOWS != NO)
#if !defined ENABLE_OP_KEY_XF86XK_ROTATE_WINDOWS || (ENABLE_OP_KEY_XF86XK_ROTATE_WINDOWS != YES && ENABLE_OP_KEY_XF86XK_ROTATE_WINDOWS != NO)
#	error "You need to decide if OP_KEY_XF86XK_ROTATE_WINDOWS (RotateWindows) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_ROTATE_WINDOWS || (ENABLE_OP_KEY_XF86XK_ROTATE_WINDOWS != YES && ENABLE_OP_KEY_XF86XK_ROTATE_WINDOWS != NO)
#if ENABLE_OP_KEY_XF86XK_ROTATE_WINDOWS == YES
#	define OP_KEY_XF86XK_ROTATE_WINDOWS_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_ROTATE_WINDOWS == YES
#undef ENABLE_OP_KEY_XF86XK_ROTATE_WINDOWS
#if !defined ENABLE_OP_KEY_XF86XK_ROTATION_PB || (ENABLE_OP_KEY_XF86XK_ROTATION_PB != YES && ENABLE_OP_KEY_XF86XK_ROTATION_PB != NO)
#	error "You need to decide if OP_KEY_XF86XK_ROTATION_PB (RotationPB) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_ROTATION_PB || (ENABLE_OP_KEY_XF86XK_ROTATION_PB != YES && ENABLE_OP_KEY_XF86XK_ROTATION_PB != NO)
#if !defined ENABLE_OP_KEY_XF86XK_ROTATION_PB || (ENABLE_OP_KEY_XF86XK_ROTATION_PB != YES && ENABLE_OP_KEY_XF86XK_ROTATION_PB != NO)
#	error "You need to decide if OP_KEY_XF86XK_ROTATION_PB (RotationPB) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_ROTATION_PB || (ENABLE_OP_KEY_XF86XK_ROTATION_PB != YES && ENABLE_OP_KEY_XF86XK_ROTATION_PB != NO)
#if ENABLE_OP_KEY_XF86XK_ROTATION_PB == YES
#	define OP_KEY_XF86XK_ROTATION_PB_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_ROTATION_PB == YES
#undef ENABLE_OP_KEY_XF86XK_ROTATION_PB
#if !defined ENABLE_OP_KEY_XF86XK_ROTATION_KB || (ENABLE_OP_KEY_XF86XK_ROTATION_KB != YES && ENABLE_OP_KEY_XF86XK_ROTATION_KB != NO)
#	error "You need to decide if OP_KEY_XF86XK_ROTATION_KB (RotationKB) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_ROTATION_KB || (ENABLE_OP_KEY_XF86XK_ROTATION_KB != YES && ENABLE_OP_KEY_XF86XK_ROTATION_KB != NO)
#if !defined ENABLE_OP_KEY_XF86XK_ROTATION_KB || (ENABLE_OP_KEY_XF86XK_ROTATION_KB != YES && ENABLE_OP_KEY_XF86XK_ROTATION_KB != NO)
#	error "You need to decide if OP_KEY_XF86XK_ROTATION_KB (RotationKB) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_ROTATION_KB || (ENABLE_OP_KEY_XF86XK_ROTATION_KB != YES && ENABLE_OP_KEY_XF86XK_ROTATION_KB != NO)
#if ENABLE_OP_KEY_XF86XK_ROTATION_KB == YES
#	define OP_KEY_XF86XK_ROTATION_KB_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_ROTATION_KB == YES
#undef ENABLE_OP_KEY_XF86XK_ROTATION_KB
#if !defined ENABLE_OP_KEY_XF86XK_SAVE || (ENABLE_OP_KEY_XF86XK_SAVE != YES && ENABLE_OP_KEY_XF86XK_SAVE != NO)
#	error "You need to decide if OP_KEY_XF86XK_SAVE (Save) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SAVE || (ENABLE_OP_KEY_XF86XK_SAVE != YES && ENABLE_OP_KEY_XF86XK_SAVE != NO)
#if !defined ENABLE_OP_KEY_XF86XK_SAVE || (ENABLE_OP_KEY_XF86XK_SAVE != YES && ENABLE_OP_KEY_XF86XK_SAVE != NO)
#	error "You need to decide if OP_KEY_XF86XK_SAVE (Save) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SAVE || (ENABLE_OP_KEY_XF86XK_SAVE != YES && ENABLE_OP_KEY_XF86XK_SAVE != NO)
#if ENABLE_OP_KEY_XF86XK_SAVE == YES
#	define OP_KEY_XF86XK_SAVE_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_SAVE == YES
#undef ENABLE_OP_KEY_XF86XK_SAVE
#if !defined ENABLE_OP_KEY_XF86XK_SCROLL_UP || (ENABLE_OP_KEY_XF86XK_SCROLL_UP != YES && ENABLE_OP_KEY_XF86XK_SCROLL_UP != NO)
#	error "You need to decide if OP_KEY_XF86XK_SCROLL_UP (ScrollUp) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SCROLL_UP || (ENABLE_OP_KEY_XF86XK_SCROLL_UP != YES && ENABLE_OP_KEY_XF86XK_SCROLL_UP != NO)
#if !defined ENABLE_OP_KEY_XF86XK_SCROLL_UP || (ENABLE_OP_KEY_XF86XK_SCROLL_UP != YES && ENABLE_OP_KEY_XF86XK_SCROLL_UP != NO)
#	error "You need to decide if OP_KEY_XF86XK_SCROLL_UP (ScrollUp) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SCROLL_UP || (ENABLE_OP_KEY_XF86XK_SCROLL_UP != YES && ENABLE_OP_KEY_XF86XK_SCROLL_UP != NO)
#if ENABLE_OP_KEY_XF86XK_SCROLL_UP == YES
#	define OP_KEY_XF86XK_SCROLL_UP_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_SCROLL_UP == YES
#undef ENABLE_OP_KEY_XF86XK_SCROLL_UP
#if !defined ENABLE_OP_KEY_XF86XK_SCROLL_DOWN || (ENABLE_OP_KEY_XF86XK_SCROLL_DOWN != YES && ENABLE_OP_KEY_XF86XK_SCROLL_DOWN != NO)
#	error "You need to decide if OP_KEY_XF86XK_SCROLL_DOWN (ScrollDown) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SCROLL_DOWN || (ENABLE_OP_KEY_XF86XK_SCROLL_DOWN != YES && ENABLE_OP_KEY_XF86XK_SCROLL_DOWN != NO)
#if !defined ENABLE_OP_KEY_XF86XK_SCROLL_DOWN || (ENABLE_OP_KEY_XF86XK_SCROLL_DOWN != YES && ENABLE_OP_KEY_XF86XK_SCROLL_DOWN != NO)
#	error "You need to decide if OP_KEY_XF86XK_SCROLL_DOWN (ScrollDown) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SCROLL_DOWN || (ENABLE_OP_KEY_XF86XK_SCROLL_DOWN != YES && ENABLE_OP_KEY_XF86XK_SCROLL_DOWN != NO)
#if ENABLE_OP_KEY_XF86XK_SCROLL_DOWN == YES
#	define OP_KEY_XF86XK_SCROLL_DOWN_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_SCROLL_DOWN == YES
#undef ENABLE_OP_KEY_XF86XK_SCROLL_DOWN
#if !defined ENABLE_OP_KEY_XF86XK_SCROLL_CLICK || (ENABLE_OP_KEY_XF86XK_SCROLL_CLICK != YES && ENABLE_OP_KEY_XF86XK_SCROLL_CLICK != NO)
#	error "You need to decide if OP_KEY_XF86XK_SCROLL_CLICK (ScrollClick) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SCROLL_CLICK || (ENABLE_OP_KEY_XF86XK_SCROLL_CLICK != YES && ENABLE_OP_KEY_XF86XK_SCROLL_CLICK != NO)
#if !defined ENABLE_OP_KEY_XF86XK_SCROLL_CLICK || (ENABLE_OP_KEY_XF86XK_SCROLL_CLICK != YES && ENABLE_OP_KEY_XF86XK_SCROLL_CLICK != NO)
#	error "You need to decide if OP_KEY_XF86XK_SCROLL_CLICK (ScrollClick) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SCROLL_CLICK || (ENABLE_OP_KEY_XF86XK_SCROLL_CLICK != YES && ENABLE_OP_KEY_XF86XK_SCROLL_CLICK != NO)
#if ENABLE_OP_KEY_XF86XK_SCROLL_CLICK == YES
#	define OP_KEY_XF86XK_SCROLL_CLICK_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_SCROLL_CLICK == YES
#undef ENABLE_OP_KEY_XF86XK_SCROLL_CLICK
#if !defined ENABLE_OP_KEY_XF86XK_SEND || (ENABLE_OP_KEY_XF86XK_SEND != YES && ENABLE_OP_KEY_XF86XK_SEND != NO)
#	error "You need to decide if OP_KEY_XF86XK_SEND (Send) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SEND || (ENABLE_OP_KEY_XF86XK_SEND != YES && ENABLE_OP_KEY_XF86XK_SEND != NO)
#if !defined ENABLE_OP_KEY_XF86XK_SEND || (ENABLE_OP_KEY_XF86XK_SEND != YES && ENABLE_OP_KEY_XF86XK_SEND != NO)
#	error "You need to decide if OP_KEY_XF86XK_SEND (Send) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SEND || (ENABLE_OP_KEY_XF86XK_SEND != YES && ENABLE_OP_KEY_XF86XK_SEND != NO)
#if ENABLE_OP_KEY_XF86XK_SEND == YES
#	define OP_KEY_XF86XK_SEND_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_SEND == YES
#undef ENABLE_OP_KEY_XF86XK_SEND
#if !defined ENABLE_OP_KEY_XF86XK_SPELL || (ENABLE_OP_KEY_XF86XK_SPELL != YES && ENABLE_OP_KEY_XF86XK_SPELL != NO)
#	error "You need to decide if OP_KEY_XF86XK_SPELL (Spell) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SPELL || (ENABLE_OP_KEY_XF86XK_SPELL != YES && ENABLE_OP_KEY_XF86XK_SPELL != NO)
#if !defined ENABLE_OP_KEY_XF86XK_SPELL || (ENABLE_OP_KEY_XF86XK_SPELL != YES && ENABLE_OP_KEY_XF86XK_SPELL != NO)
#	error "You need to decide if OP_KEY_XF86XK_SPELL (Spell) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SPELL || (ENABLE_OP_KEY_XF86XK_SPELL != YES && ENABLE_OP_KEY_XF86XK_SPELL != NO)
#if ENABLE_OP_KEY_XF86XK_SPELL == YES
#	define OP_KEY_XF86XK_SPELL_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_SPELL == YES
#undef ENABLE_OP_KEY_XF86XK_SPELL
#if !defined ENABLE_OP_KEY_XF86XK_SPLIT_SCREEN || (ENABLE_OP_KEY_XF86XK_SPLIT_SCREEN != YES && ENABLE_OP_KEY_XF86XK_SPLIT_SCREEN != NO)
#	error "You need to decide if OP_KEY_XF86XK_SPLIT_SCREEN (SplitScreen) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SPLIT_SCREEN || (ENABLE_OP_KEY_XF86XK_SPLIT_SCREEN != YES && ENABLE_OP_KEY_XF86XK_SPLIT_SCREEN != NO)
#if !defined ENABLE_OP_KEY_XF86XK_SPLIT_SCREEN || (ENABLE_OP_KEY_XF86XK_SPLIT_SCREEN != YES && ENABLE_OP_KEY_XF86XK_SPLIT_SCREEN != NO)
#	error "You need to decide if OP_KEY_XF86XK_SPLIT_SCREEN (SplitScreen) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SPLIT_SCREEN || (ENABLE_OP_KEY_XF86XK_SPLIT_SCREEN != YES && ENABLE_OP_KEY_XF86XK_SPLIT_SCREEN != NO)
#if ENABLE_OP_KEY_XF86XK_SPLIT_SCREEN == YES
#	define OP_KEY_XF86XK_SPLIT_SCREEN_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_SPLIT_SCREEN == YES
#undef ENABLE_OP_KEY_XF86XK_SPLIT_SCREEN
#if !defined ENABLE_OP_KEY_XF86XK_SUPPORT || (ENABLE_OP_KEY_XF86XK_SUPPORT != YES && ENABLE_OP_KEY_XF86XK_SUPPORT != NO)
#	error "You need to decide if OP_KEY_XF86XK_SUPPORT (Support) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SUPPORT || (ENABLE_OP_KEY_XF86XK_SUPPORT != YES && ENABLE_OP_KEY_XF86XK_SUPPORT != NO)
#if !defined ENABLE_OP_KEY_XF86XK_SUPPORT || (ENABLE_OP_KEY_XF86XK_SUPPORT != YES && ENABLE_OP_KEY_XF86XK_SUPPORT != NO)
#	error "You need to decide if OP_KEY_XF86XK_SUPPORT (Support) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SUPPORT || (ENABLE_OP_KEY_XF86XK_SUPPORT != YES && ENABLE_OP_KEY_XF86XK_SUPPORT != NO)
#if ENABLE_OP_KEY_XF86XK_SUPPORT == YES
#	define OP_KEY_XF86XK_SUPPORT_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_SUPPORT == YES
#undef ENABLE_OP_KEY_XF86XK_SUPPORT
#if !defined ENABLE_OP_KEY_XF86XK_TASK_PANE || (ENABLE_OP_KEY_XF86XK_TASK_PANE != YES && ENABLE_OP_KEY_XF86XK_TASK_PANE != NO)
#	error "You need to decide if OP_KEY_XF86XK_TASK_PANE (TaskPanel) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_TASK_PANE || (ENABLE_OP_KEY_XF86XK_TASK_PANE != YES && ENABLE_OP_KEY_XF86XK_TASK_PANE != NO)
#if !defined ENABLE_OP_KEY_XF86XK_TASK_PANE || (ENABLE_OP_KEY_XF86XK_TASK_PANE != YES && ENABLE_OP_KEY_XF86XK_TASK_PANE != NO)
#	error "You need to decide if OP_KEY_XF86XK_TASK_PANE (TaskPanel) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_TASK_PANE || (ENABLE_OP_KEY_XF86XK_TASK_PANE != YES && ENABLE_OP_KEY_XF86XK_TASK_PANE != NO)
#if ENABLE_OP_KEY_XF86XK_TASK_PANE == YES
#	define OP_KEY_XF86XK_TASK_PANE_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_TASK_PANE == YES
#undef ENABLE_OP_KEY_XF86XK_TASK_PANE
#if !defined ENABLE_OP_KEY_XF86XK_TERMINAL || (ENABLE_OP_KEY_XF86XK_TERMINAL != YES && ENABLE_OP_KEY_XF86XK_TERMINAL != NO)
#	error "You need to decide if OP_KEY_XF86XK_TERMINAL (Terminal) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_TERMINAL || (ENABLE_OP_KEY_XF86XK_TERMINAL != YES && ENABLE_OP_KEY_XF86XK_TERMINAL != NO)
#if !defined ENABLE_OP_KEY_XF86XK_TERMINAL || (ENABLE_OP_KEY_XF86XK_TERMINAL != YES && ENABLE_OP_KEY_XF86XK_TERMINAL != NO)
#	error "You need to decide if OP_KEY_XF86XK_TERMINAL (Terminal) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_TERMINAL || (ENABLE_OP_KEY_XF86XK_TERMINAL != YES && ENABLE_OP_KEY_XF86XK_TERMINAL != NO)
#if ENABLE_OP_KEY_XF86XK_TERMINAL == YES
#	define OP_KEY_XF86XK_TERMINAL_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_TERMINAL == YES
#undef ENABLE_OP_KEY_XF86XK_TERMINAL
#if !defined ENABLE_OP_KEY_XF86XK_TOOLS || (ENABLE_OP_KEY_XF86XK_TOOLS != YES && ENABLE_OP_KEY_XF86XK_TOOLS != NO)
#	error "You need to decide if OP_KEY_XF86XK_TOOLS (Tools) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_TOOLS || (ENABLE_OP_KEY_XF86XK_TOOLS != YES && ENABLE_OP_KEY_XF86XK_TOOLS != NO)
#if !defined ENABLE_OP_KEY_XF86XK_TOOLS || (ENABLE_OP_KEY_XF86XK_TOOLS != YES && ENABLE_OP_KEY_XF86XK_TOOLS != NO)
#	error "You need to decide if OP_KEY_XF86XK_TOOLS (Tools) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_TOOLS || (ENABLE_OP_KEY_XF86XK_TOOLS != YES && ENABLE_OP_KEY_XF86XK_TOOLS != NO)
#if ENABLE_OP_KEY_XF86XK_TOOLS == YES
#	define OP_KEY_XF86XK_TOOLS_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_TOOLS == YES
#undef ENABLE_OP_KEY_XF86XK_TOOLS
#if !defined ENABLE_OP_KEY_XF86XK_TRAVEL || (ENABLE_OP_KEY_XF86XK_TRAVEL != YES && ENABLE_OP_KEY_XF86XK_TRAVEL != NO)
#	error "You need to decide if OP_KEY_XF86XK_TRAVEL (Travel) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_TRAVEL || (ENABLE_OP_KEY_XF86XK_TRAVEL != YES && ENABLE_OP_KEY_XF86XK_TRAVEL != NO)
#if !defined ENABLE_OP_KEY_XF86XK_TRAVEL || (ENABLE_OP_KEY_XF86XK_TRAVEL != YES && ENABLE_OP_KEY_XF86XK_TRAVEL != NO)
#	error "You need to decide if OP_KEY_XF86XK_TRAVEL (Travel) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_TRAVEL || (ENABLE_OP_KEY_XF86XK_TRAVEL != YES && ENABLE_OP_KEY_XF86XK_TRAVEL != NO)
#if ENABLE_OP_KEY_XF86XK_TRAVEL == YES
#	define OP_KEY_XF86XK_TRAVEL_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_TRAVEL == YES
#undef ENABLE_OP_KEY_XF86XK_TRAVEL
#if !defined ENABLE_OP_KEY_XF86XK_USER_PB || (ENABLE_OP_KEY_XF86XK_USER_PB != YES && ENABLE_OP_KEY_XF86XK_USER_PB != NO)
#	error "You need to decide if OP_KEY_XF86XK_USER_PB (UserPB) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_USER_PB || (ENABLE_OP_KEY_XF86XK_USER_PB != YES && ENABLE_OP_KEY_XF86XK_USER_PB != NO)
#if !defined ENABLE_OP_KEY_XF86XK_USER_PB || (ENABLE_OP_KEY_XF86XK_USER_PB != YES && ENABLE_OP_KEY_XF86XK_USER_PB != NO)
#	error "You need to decide if OP_KEY_XF86XK_USER_PB (UserPB) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_USER_PB || (ENABLE_OP_KEY_XF86XK_USER_PB != YES && ENABLE_OP_KEY_XF86XK_USER_PB != NO)
#if ENABLE_OP_KEY_XF86XK_USER_PB == YES
#	define OP_KEY_XF86XK_USER_PB_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_USER_PB == YES
#undef ENABLE_OP_KEY_XF86XK_USER_PB
#if !defined ENABLE_OP_KEY_XF86XK_USER1KB || (ENABLE_OP_KEY_XF86XK_USER1KB != YES && ENABLE_OP_KEY_XF86XK_USER1KB != NO)
#	error "You need to decide if OP_KEY_XF86XK_USER1KB (User1KB) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_USER1KB || (ENABLE_OP_KEY_XF86XK_USER1KB != YES && ENABLE_OP_KEY_XF86XK_USER1KB != NO)
#if !defined ENABLE_OP_KEY_XF86XK_USER1KB || (ENABLE_OP_KEY_XF86XK_USER1KB != YES && ENABLE_OP_KEY_XF86XK_USER1KB != NO)
#	error "You need to decide if OP_KEY_XF86XK_USER1KB (User1KB) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_USER1KB || (ENABLE_OP_KEY_XF86XK_USER1KB != YES && ENABLE_OP_KEY_XF86XK_USER1KB != NO)
#if ENABLE_OP_KEY_XF86XK_USER1KB == YES
#	define OP_KEY_XF86XK_USER1KB_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_USER1KB == YES
#undef ENABLE_OP_KEY_XF86XK_USER1KB
#if !defined ENABLE_OP_KEY_XF86XK_USER2KB || (ENABLE_OP_KEY_XF86XK_USER2KB != YES && ENABLE_OP_KEY_XF86XK_USER2KB != NO)
#	error "You need to decide if OP_KEY_XF86XK_USER2KB (User2KB) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_USER2KB || (ENABLE_OP_KEY_XF86XK_USER2KB != YES && ENABLE_OP_KEY_XF86XK_USER2KB != NO)
#if !defined ENABLE_OP_KEY_XF86XK_USER2KB || (ENABLE_OP_KEY_XF86XK_USER2KB != YES && ENABLE_OP_KEY_XF86XK_USER2KB != NO)
#	error "You need to decide if OP_KEY_XF86XK_USER2KB (User2KB) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_USER2KB || (ENABLE_OP_KEY_XF86XK_USER2KB != YES && ENABLE_OP_KEY_XF86XK_USER2KB != NO)
#if ENABLE_OP_KEY_XF86XK_USER2KB == YES
#	define OP_KEY_XF86XK_USER2KB_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_USER2KB == YES
#undef ENABLE_OP_KEY_XF86XK_USER2KB
#if !defined ENABLE_OP_KEY_XF86XK_VIDEO || (ENABLE_OP_KEY_XF86XK_VIDEO != YES && ENABLE_OP_KEY_XF86XK_VIDEO != NO)
#	error "You need to decide if OP_KEY_XF86XK_VIDEO (Video) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_VIDEO || (ENABLE_OP_KEY_XF86XK_VIDEO != YES && ENABLE_OP_KEY_XF86XK_VIDEO != NO)
#if !defined ENABLE_OP_KEY_XF86XK_VIDEO || (ENABLE_OP_KEY_XF86XK_VIDEO != YES && ENABLE_OP_KEY_XF86XK_VIDEO != NO)
#	error "You need to decide if OP_KEY_XF86XK_VIDEO (Video) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_VIDEO || (ENABLE_OP_KEY_XF86XK_VIDEO != YES && ENABLE_OP_KEY_XF86XK_VIDEO != NO)
#if ENABLE_OP_KEY_XF86XK_VIDEO == YES
#	define OP_KEY_XF86XK_VIDEO_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_VIDEO == YES
#undef ENABLE_OP_KEY_XF86XK_VIDEO
#if !defined ENABLE_OP_KEY_XF86XK_WHEEL_BUTTON || (ENABLE_OP_KEY_XF86XK_WHEEL_BUTTON != YES && ENABLE_OP_KEY_XF86XK_WHEEL_BUTTON != NO)
#	error "You need to decide if OP_KEY_XF86XK_WHEEL_BUTTON (WheelButton) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_WHEEL_BUTTON || (ENABLE_OP_KEY_XF86XK_WHEEL_BUTTON != YES && ENABLE_OP_KEY_XF86XK_WHEEL_BUTTON != NO)
#if !defined ENABLE_OP_KEY_XF86XK_WHEEL_BUTTON || (ENABLE_OP_KEY_XF86XK_WHEEL_BUTTON != YES && ENABLE_OP_KEY_XF86XK_WHEEL_BUTTON != NO)
#	error "You need to decide if OP_KEY_XF86XK_WHEEL_BUTTON (WheelButton) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_WHEEL_BUTTON || (ENABLE_OP_KEY_XF86XK_WHEEL_BUTTON != YES && ENABLE_OP_KEY_XF86XK_WHEEL_BUTTON != NO)
#if ENABLE_OP_KEY_XF86XK_WHEEL_BUTTON == YES
#	define OP_KEY_XF86XK_WHEEL_BUTTON_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_WHEEL_BUTTON == YES
#undef ENABLE_OP_KEY_XF86XK_WHEEL_BUTTON
#if !defined ENABLE_OP_KEY_XF86XK_WORD || (ENABLE_OP_KEY_XF86XK_WORD != YES && ENABLE_OP_KEY_XF86XK_WORD != NO)
#	error "You need to decide if OP_KEY_XF86XK_WORD (Word) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_WORD || (ENABLE_OP_KEY_XF86XK_WORD != YES && ENABLE_OP_KEY_XF86XK_WORD != NO)
#if !defined ENABLE_OP_KEY_XF86XK_WORD || (ENABLE_OP_KEY_XF86XK_WORD != YES && ENABLE_OP_KEY_XF86XK_WORD != NO)
#	error "You need to decide if OP_KEY_XF86XK_WORD (Word) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_WORD || (ENABLE_OP_KEY_XF86XK_WORD != YES && ENABLE_OP_KEY_XF86XK_WORD != NO)
#if ENABLE_OP_KEY_XF86XK_WORD == YES
#	define OP_KEY_XF86XK_WORD_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_WORD == YES
#undef ENABLE_OP_KEY_XF86XK_WORD
#if !defined ENABLE_OP_KEY_XF86XK_XFER || (ENABLE_OP_KEY_XF86XK_XFER != YES && ENABLE_OP_KEY_XF86XK_XFER != NO)
#	error "You need to decide if OP_KEY_XF86XK_XFER (Xfer) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_XFER || (ENABLE_OP_KEY_XF86XK_XFER != YES && ENABLE_OP_KEY_XF86XK_XFER != NO)
#if !defined ENABLE_OP_KEY_XF86XK_XFER || (ENABLE_OP_KEY_XF86XK_XFER != YES && ENABLE_OP_KEY_XF86XK_XFER != NO)
#	error "You need to decide if OP_KEY_XF86XK_XFER (Xfer) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_XFER || (ENABLE_OP_KEY_XF86XK_XFER != YES && ENABLE_OP_KEY_XF86XK_XFER != NO)
#if ENABLE_OP_KEY_XF86XK_XFER == YES
#	define OP_KEY_XF86XK_XFER_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_XFER == YES
#undef ENABLE_OP_KEY_XF86XK_XFER
#if !defined ENABLE_OP_KEY_XF86XK_ZOOM_IN || (ENABLE_OP_KEY_XF86XK_ZOOM_IN != YES && ENABLE_OP_KEY_XF86XK_ZOOM_IN != NO)
#	error "You need to decide if OP_KEY_XF86XK_ZOOM_IN (ZoomIn) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_ZOOM_IN || (ENABLE_OP_KEY_XF86XK_ZOOM_IN != YES && ENABLE_OP_KEY_XF86XK_ZOOM_IN != NO)
#if !defined ENABLE_OP_KEY_XF86XK_ZOOM_IN || (ENABLE_OP_KEY_XF86XK_ZOOM_IN != YES && ENABLE_OP_KEY_XF86XK_ZOOM_IN != NO)
#	error "You need to decide if OP_KEY_XF86XK_ZOOM_IN (ZoomIn) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_ZOOM_IN || (ENABLE_OP_KEY_XF86XK_ZOOM_IN != YES && ENABLE_OP_KEY_XF86XK_ZOOM_IN != NO)
#if ENABLE_OP_KEY_XF86XK_ZOOM_IN == YES
#	define OP_KEY_XF86XK_ZOOM_IN_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_ZOOM_IN == YES
#undef ENABLE_OP_KEY_XF86XK_ZOOM_IN
#if !defined ENABLE_OP_KEY_XF86XK_ZOOM_OUT || (ENABLE_OP_KEY_XF86XK_ZOOM_OUT != YES && ENABLE_OP_KEY_XF86XK_ZOOM_OUT != NO)
#	error "You need to decide if OP_KEY_XF86XK_ZOOM_OUT (ZoomOut) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_ZOOM_OUT || (ENABLE_OP_KEY_XF86XK_ZOOM_OUT != YES && ENABLE_OP_KEY_XF86XK_ZOOM_OUT != NO)
#if !defined ENABLE_OP_KEY_XF86XK_ZOOM_OUT || (ENABLE_OP_KEY_XF86XK_ZOOM_OUT != YES && ENABLE_OP_KEY_XF86XK_ZOOM_OUT != NO)
#	error "You need to decide if OP_KEY_XF86XK_ZOOM_OUT (ZoomOut) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_ZOOM_OUT || (ENABLE_OP_KEY_XF86XK_ZOOM_OUT != YES && ENABLE_OP_KEY_XF86XK_ZOOM_OUT != NO)
#if ENABLE_OP_KEY_XF86XK_ZOOM_OUT == YES
#	define OP_KEY_XF86XK_ZOOM_OUT_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_ZOOM_OUT == YES
#undef ENABLE_OP_KEY_XF86XK_ZOOM_OUT
#if !defined ENABLE_OP_KEY_XF86XK_AWAY || (ENABLE_OP_KEY_XF86XK_AWAY != YES && ENABLE_OP_KEY_XF86XK_AWAY != NO)
#	error "You need to decide if OP_KEY_XF86XK_AWAY (Away) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AWAY || (ENABLE_OP_KEY_XF86XK_AWAY != YES && ENABLE_OP_KEY_XF86XK_AWAY != NO)
#if !defined ENABLE_OP_KEY_XF86XK_AWAY || (ENABLE_OP_KEY_XF86XK_AWAY != YES && ENABLE_OP_KEY_XF86XK_AWAY != NO)
#	error "You need to decide if OP_KEY_XF86XK_AWAY (Away) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AWAY || (ENABLE_OP_KEY_XF86XK_AWAY != YES && ENABLE_OP_KEY_XF86XK_AWAY != NO)
#if ENABLE_OP_KEY_XF86XK_AWAY == YES
#	define OP_KEY_XF86XK_AWAY_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_AWAY == YES
#undef ENABLE_OP_KEY_XF86XK_AWAY
#if !defined ENABLE_OP_KEY_XF86XK_MESSENGER || (ENABLE_OP_KEY_XF86XK_MESSENGER != YES && ENABLE_OP_KEY_XF86XK_MESSENGER != NO)
#	error "You need to decide if OP_KEY_XF86XK_MESSENGER (Messenger) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MESSENGER || (ENABLE_OP_KEY_XF86XK_MESSENGER != YES && ENABLE_OP_KEY_XF86XK_MESSENGER != NO)
#if !defined ENABLE_OP_KEY_XF86XK_MESSENGER || (ENABLE_OP_KEY_XF86XK_MESSENGER != YES && ENABLE_OP_KEY_XF86XK_MESSENGER != NO)
#	error "You need to decide if OP_KEY_XF86XK_MESSENGER (Messenger) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MESSENGER || (ENABLE_OP_KEY_XF86XK_MESSENGER != YES && ENABLE_OP_KEY_XF86XK_MESSENGER != NO)
#if ENABLE_OP_KEY_XF86XK_MESSENGER == YES
#	define OP_KEY_XF86XK_MESSENGER_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_MESSENGER == YES
#undef ENABLE_OP_KEY_XF86XK_MESSENGER
#if !defined ENABLE_OP_KEY_XF86XK_WEB_CAM || (ENABLE_OP_KEY_XF86XK_WEB_CAM != YES && ENABLE_OP_KEY_XF86XK_WEB_CAM != NO)
#	error "You need to decide if OP_KEY_XF86XK_WEB_CAM (WebCam) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_WEB_CAM || (ENABLE_OP_KEY_XF86XK_WEB_CAM != YES && ENABLE_OP_KEY_XF86XK_WEB_CAM != NO)
#if !defined ENABLE_OP_KEY_XF86XK_WEB_CAM || (ENABLE_OP_KEY_XF86XK_WEB_CAM != YES && ENABLE_OP_KEY_XF86XK_WEB_CAM != NO)
#	error "You need to decide if OP_KEY_XF86XK_WEB_CAM (WebCam) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_WEB_CAM || (ENABLE_OP_KEY_XF86XK_WEB_CAM != YES && ENABLE_OP_KEY_XF86XK_WEB_CAM != NO)
#if ENABLE_OP_KEY_XF86XK_WEB_CAM == YES
#	define OP_KEY_XF86XK_WEB_CAM_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_WEB_CAM == YES
#undef ENABLE_OP_KEY_XF86XK_WEB_CAM
#if !defined ENABLE_OP_KEY_XF86XK_MAIL_FORWARD || (ENABLE_OP_KEY_XF86XK_MAIL_FORWARD != YES && ENABLE_OP_KEY_XF86XK_MAIL_FORWARD != NO)
#	error "You need to decide if OP_KEY_XF86XK_MAIL_FORWARD (MailForward) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MAIL_FORWARD || (ENABLE_OP_KEY_XF86XK_MAIL_FORWARD != YES && ENABLE_OP_KEY_XF86XK_MAIL_FORWARD != NO)
#if !defined ENABLE_OP_KEY_XF86XK_MAIL_FORWARD || (ENABLE_OP_KEY_XF86XK_MAIL_FORWARD != YES && ENABLE_OP_KEY_XF86XK_MAIL_FORWARD != NO)
#	error "You need to decide if OP_KEY_XF86XK_MAIL_FORWARD (MailForward) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MAIL_FORWARD || (ENABLE_OP_KEY_XF86XK_MAIL_FORWARD != YES && ENABLE_OP_KEY_XF86XK_MAIL_FORWARD != NO)
#if ENABLE_OP_KEY_XF86XK_MAIL_FORWARD == YES
#	define OP_KEY_XF86XK_MAIL_FORWARD_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_MAIL_FORWARD == YES
#undef ENABLE_OP_KEY_XF86XK_MAIL_FORWARD
#if !defined ENABLE_OP_KEY_XF86XK_PICTURES || (ENABLE_OP_KEY_XF86XK_PICTURES != YES && ENABLE_OP_KEY_XF86XK_PICTURES != NO)
#	error "You need to decide if OP_KEY_XF86XK_PICTURES (Pictures) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_PICTURES || (ENABLE_OP_KEY_XF86XK_PICTURES != YES && ENABLE_OP_KEY_XF86XK_PICTURES != NO)
#if !defined ENABLE_OP_KEY_XF86XK_PICTURES || (ENABLE_OP_KEY_XF86XK_PICTURES != YES && ENABLE_OP_KEY_XF86XK_PICTURES != NO)
#	error "You need to decide if OP_KEY_XF86XK_PICTURES (Pictures) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_PICTURES || (ENABLE_OP_KEY_XF86XK_PICTURES != YES && ENABLE_OP_KEY_XF86XK_PICTURES != NO)
#if ENABLE_OP_KEY_XF86XK_PICTURES == YES
#	define OP_KEY_XF86XK_PICTURES_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_PICTURES == YES
#undef ENABLE_OP_KEY_XF86XK_PICTURES
#if !defined ENABLE_OP_KEY_XF86XK_MUSIC || (ENABLE_OP_KEY_XF86XK_MUSIC != YES && ENABLE_OP_KEY_XF86XK_MUSIC != NO)
#	error "You need to decide if OP_KEY_XF86XK_MUSIC (Music) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MUSIC || (ENABLE_OP_KEY_XF86XK_MUSIC != YES && ENABLE_OP_KEY_XF86XK_MUSIC != NO)
#if !defined ENABLE_OP_KEY_XF86XK_MUSIC || (ENABLE_OP_KEY_XF86XK_MUSIC != YES && ENABLE_OP_KEY_XF86XK_MUSIC != NO)
#	error "You need to decide if OP_KEY_XF86XK_MUSIC (Music) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_MUSIC || (ENABLE_OP_KEY_XF86XK_MUSIC != YES && ENABLE_OP_KEY_XF86XK_MUSIC != NO)
#if ENABLE_OP_KEY_XF86XK_MUSIC == YES
#	define OP_KEY_XF86XK_MUSIC_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_MUSIC == YES
#undef ENABLE_OP_KEY_XF86XK_MUSIC
#if !defined ENABLE_OP_KEY_XF86XK_BATTERY || (ENABLE_OP_KEY_XF86XK_BATTERY != YES && ENABLE_OP_KEY_XF86XK_BATTERY != NO)
#	error "You need to decide if OP_KEY_XF86XK_BATTERY (Battery) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_BATTERY || (ENABLE_OP_KEY_XF86XK_BATTERY != YES && ENABLE_OP_KEY_XF86XK_BATTERY != NO)
#if !defined ENABLE_OP_KEY_XF86XK_BATTERY || (ENABLE_OP_KEY_XF86XK_BATTERY != YES && ENABLE_OP_KEY_XF86XK_BATTERY != NO)
#	error "You need to decide if OP_KEY_XF86XK_BATTERY (Battery) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_BATTERY || (ENABLE_OP_KEY_XF86XK_BATTERY != YES && ENABLE_OP_KEY_XF86XK_BATTERY != NO)
#if ENABLE_OP_KEY_XF86XK_BATTERY == YES
#	define OP_KEY_XF86XK_BATTERY_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_BATTERY == YES
#undef ENABLE_OP_KEY_XF86XK_BATTERY
#if !defined ENABLE_OP_KEY_XF86XK_BLUETOOTH || (ENABLE_OP_KEY_XF86XK_BLUETOOTH != YES && ENABLE_OP_KEY_XF86XK_BLUETOOTH != NO)
#	error "You need to decide if OP_KEY_XF86XK_BLUETOOTH (Bluetooth) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_BLUETOOTH || (ENABLE_OP_KEY_XF86XK_BLUETOOTH != YES && ENABLE_OP_KEY_XF86XK_BLUETOOTH != NO)
#if !defined ENABLE_OP_KEY_XF86XK_BLUETOOTH || (ENABLE_OP_KEY_XF86XK_BLUETOOTH != YES && ENABLE_OP_KEY_XF86XK_BLUETOOTH != NO)
#	error "You need to decide if OP_KEY_XF86XK_BLUETOOTH (Bluetooth) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_BLUETOOTH || (ENABLE_OP_KEY_XF86XK_BLUETOOTH != YES && ENABLE_OP_KEY_XF86XK_BLUETOOTH != NO)
#if ENABLE_OP_KEY_XF86XK_BLUETOOTH == YES
#	define OP_KEY_XF86XK_BLUETOOTH_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_BLUETOOTH == YES
#undef ENABLE_OP_KEY_XF86XK_BLUETOOTH
#if !defined ENABLE_OP_KEY_XF86XK_WLAN || (ENABLE_OP_KEY_XF86XK_WLAN != YES && ENABLE_OP_KEY_XF86XK_WLAN != NO)
#	error "You need to decide if OP_KEY_XF86XK_WLAN (WLAN) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_WLAN || (ENABLE_OP_KEY_XF86XK_WLAN != YES && ENABLE_OP_KEY_XF86XK_WLAN != NO)
#if !defined ENABLE_OP_KEY_XF86XK_WLAN || (ENABLE_OP_KEY_XF86XK_WLAN != YES && ENABLE_OP_KEY_XF86XK_WLAN != NO)
#	error "You need to decide if OP_KEY_XF86XK_WLAN (WLAN) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_WLAN || (ENABLE_OP_KEY_XF86XK_WLAN != YES && ENABLE_OP_KEY_XF86XK_WLAN != NO)
#if ENABLE_OP_KEY_XF86XK_WLAN == YES
#	define OP_KEY_XF86XK_WLAN_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_WLAN == YES
#undef ENABLE_OP_KEY_XF86XK_WLAN
#if !defined ENABLE_OP_KEY_XF86XK_UWB || (ENABLE_OP_KEY_XF86XK_UWB != YES && ENABLE_OP_KEY_XF86XK_UWB != NO)
#	error "You need to decide if OP_KEY_XF86XK_UWB (UWB) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_UWB || (ENABLE_OP_KEY_XF86XK_UWB != YES && ENABLE_OP_KEY_XF86XK_UWB != NO)
#if !defined ENABLE_OP_KEY_XF86XK_UWB || (ENABLE_OP_KEY_XF86XK_UWB != YES && ENABLE_OP_KEY_XF86XK_UWB != NO)
#	error "You need to decide if OP_KEY_XF86XK_UWB (UWB) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_UWB || (ENABLE_OP_KEY_XF86XK_UWB != YES && ENABLE_OP_KEY_XF86XK_UWB != NO)
#if ENABLE_OP_KEY_XF86XK_UWB == YES
#	define OP_KEY_XF86XK_UWB_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_UWB == YES
#undef ENABLE_OP_KEY_XF86XK_UWB
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_FORWARD || (ENABLE_OP_KEY_XF86XK_AUDIO_FORWARD != YES && ENABLE_OP_KEY_XF86XK_AUDIO_FORWARD != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_FORWARD (AudioForward) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_FORWARD || (ENABLE_OP_KEY_XF86XK_AUDIO_FORWARD != YES && ENABLE_OP_KEY_XF86XK_AUDIO_FORWARD != NO)
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_FORWARD || (ENABLE_OP_KEY_XF86XK_AUDIO_FORWARD != YES && ENABLE_OP_KEY_XF86XK_AUDIO_FORWARD != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_FORWARD (AudioForward) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_FORWARD || (ENABLE_OP_KEY_XF86XK_AUDIO_FORWARD != YES && ENABLE_OP_KEY_XF86XK_AUDIO_FORWARD != NO)
#if ENABLE_OP_KEY_XF86XK_AUDIO_FORWARD == YES
#	define OP_KEY_XF86XK_AUDIO_FORWARD_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_AUDIO_FORWARD == YES
#undef ENABLE_OP_KEY_XF86XK_AUDIO_FORWARD
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_REPEAT || (ENABLE_OP_KEY_XF86XK_AUDIO_REPEAT != YES && ENABLE_OP_KEY_XF86XK_AUDIO_REPEAT != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_REPEAT (AudioRepeat) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_REPEAT || (ENABLE_OP_KEY_XF86XK_AUDIO_REPEAT != YES && ENABLE_OP_KEY_XF86XK_AUDIO_REPEAT != NO)
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_REPEAT || (ENABLE_OP_KEY_XF86XK_AUDIO_REPEAT != YES && ENABLE_OP_KEY_XF86XK_AUDIO_REPEAT != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_REPEAT (AudioRepeat) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_REPEAT || (ENABLE_OP_KEY_XF86XK_AUDIO_REPEAT != YES && ENABLE_OP_KEY_XF86XK_AUDIO_REPEAT != NO)
#if ENABLE_OP_KEY_XF86XK_AUDIO_REPEAT == YES
#	define OP_KEY_XF86XK_AUDIO_REPEAT_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_AUDIO_REPEAT == YES
#undef ENABLE_OP_KEY_XF86XK_AUDIO_REPEAT
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_RANDOM_PLAY || (ENABLE_OP_KEY_XF86XK_AUDIO_RANDOM_PLAY != YES && ENABLE_OP_KEY_XF86XK_AUDIO_RANDOM_PLAY != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_RANDOM_PLAY (AudioRandomPlay) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_RANDOM_PLAY || (ENABLE_OP_KEY_XF86XK_AUDIO_RANDOM_PLAY != YES && ENABLE_OP_KEY_XF86XK_AUDIO_RANDOM_PLAY != NO)
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_RANDOM_PLAY || (ENABLE_OP_KEY_XF86XK_AUDIO_RANDOM_PLAY != YES && ENABLE_OP_KEY_XF86XK_AUDIO_RANDOM_PLAY != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_RANDOM_PLAY (AudioRandomPlay) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_RANDOM_PLAY || (ENABLE_OP_KEY_XF86XK_AUDIO_RANDOM_PLAY != YES && ENABLE_OP_KEY_XF86XK_AUDIO_RANDOM_PLAY != NO)
#if ENABLE_OP_KEY_XF86XK_AUDIO_RANDOM_PLAY == YES
#	define OP_KEY_XF86XK_AUDIO_RANDOM_PLAY_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_AUDIO_RANDOM_PLAY == YES
#undef ENABLE_OP_KEY_XF86XK_AUDIO_RANDOM_PLAY
#if !defined ENABLE_OP_KEY_XF86XK_SUBTITLE || (ENABLE_OP_KEY_XF86XK_SUBTITLE != YES && ENABLE_OP_KEY_XF86XK_SUBTITLE != NO)
#	error "You need to decide if OP_KEY_XF86XK_SUBTITLE (Subtitle) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SUBTITLE || (ENABLE_OP_KEY_XF86XK_SUBTITLE != YES && ENABLE_OP_KEY_XF86XK_SUBTITLE != NO)
#if !defined ENABLE_OP_KEY_XF86XK_SUBTITLE || (ENABLE_OP_KEY_XF86XK_SUBTITLE != YES && ENABLE_OP_KEY_XF86XK_SUBTITLE != NO)
#	error "You need to decide if OP_KEY_XF86XK_SUBTITLE (Subtitle) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SUBTITLE || (ENABLE_OP_KEY_XF86XK_SUBTITLE != YES && ENABLE_OP_KEY_XF86XK_SUBTITLE != NO)
#if ENABLE_OP_KEY_XF86XK_SUBTITLE == YES
#	define OP_KEY_XF86XK_SUBTITLE_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_SUBTITLE == YES
#undef ENABLE_OP_KEY_XF86XK_SUBTITLE
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_CYCLE_TRACK || (ENABLE_OP_KEY_XF86XK_AUDIO_CYCLE_TRACK != YES && ENABLE_OP_KEY_XF86XK_AUDIO_CYCLE_TRACK != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_CYCLE_TRACK (AudioCycleTrack) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_CYCLE_TRACK || (ENABLE_OP_KEY_XF86XK_AUDIO_CYCLE_TRACK != YES && ENABLE_OP_KEY_XF86XK_AUDIO_CYCLE_TRACK != NO)
#if !defined ENABLE_OP_KEY_XF86XK_AUDIO_CYCLE_TRACK || (ENABLE_OP_KEY_XF86XK_AUDIO_CYCLE_TRACK != YES && ENABLE_OP_KEY_XF86XK_AUDIO_CYCLE_TRACK != NO)
#	error "You need to decide if OP_KEY_XF86XK_AUDIO_CYCLE_TRACK (AudioCycleTrack) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_AUDIO_CYCLE_TRACK || (ENABLE_OP_KEY_XF86XK_AUDIO_CYCLE_TRACK != YES && ENABLE_OP_KEY_XF86XK_AUDIO_CYCLE_TRACK != NO)
#if ENABLE_OP_KEY_XF86XK_AUDIO_CYCLE_TRACK == YES
#	define OP_KEY_XF86XK_AUDIO_CYCLE_TRACK_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_AUDIO_CYCLE_TRACK == YES
#undef ENABLE_OP_KEY_XF86XK_AUDIO_CYCLE_TRACK
#if !defined ENABLE_OP_KEY_XF86XK_CYCLE_ANGLE || (ENABLE_OP_KEY_XF86XK_CYCLE_ANGLE != YES && ENABLE_OP_KEY_XF86XK_CYCLE_ANGLE != NO)
#	error "You need to decide if OP_KEY_XF86XK_CYCLE_ANGLE (CycleAngle) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_CYCLE_ANGLE || (ENABLE_OP_KEY_XF86XK_CYCLE_ANGLE != YES && ENABLE_OP_KEY_XF86XK_CYCLE_ANGLE != NO)
#if !defined ENABLE_OP_KEY_XF86XK_CYCLE_ANGLE || (ENABLE_OP_KEY_XF86XK_CYCLE_ANGLE != YES && ENABLE_OP_KEY_XF86XK_CYCLE_ANGLE != NO)
#	error "You need to decide if OP_KEY_XF86XK_CYCLE_ANGLE (CycleAngle) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_CYCLE_ANGLE || (ENABLE_OP_KEY_XF86XK_CYCLE_ANGLE != YES && ENABLE_OP_KEY_XF86XK_CYCLE_ANGLE != NO)
#if ENABLE_OP_KEY_XF86XK_CYCLE_ANGLE == YES
#	define OP_KEY_XF86XK_CYCLE_ANGLE_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_CYCLE_ANGLE == YES
#undef ENABLE_OP_KEY_XF86XK_CYCLE_ANGLE
#if !defined ENABLE_OP_KEY_XF86XK_FRAME_BACK || (ENABLE_OP_KEY_XF86XK_FRAME_BACK != YES && ENABLE_OP_KEY_XF86XK_FRAME_BACK != NO)
#	error "You need to decide if OP_KEY_XF86XK_FRAME_BACK (FrameBack) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_FRAME_BACK || (ENABLE_OP_KEY_XF86XK_FRAME_BACK != YES && ENABLE_OP_KEY_XF86XK_FRAME_BACK != NO)
#if !defined ENABLE_OP_KEY_XF86XK_FRAME_BACK || (ENABLE_OP_KEY_XF86XK_FRAME_BACK != YES && ENABLE_OP_KEY_XF86XK_FRAME_BACK != NO)
#	error "You need to decide if OP_KEY_XF86XK_FRAME_BACK (FrameBack) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_FRAME_BACK || (ENABLE_OP_KEY_XF86XK_FRAME_BACK != YES && ENABLE_OP_KEY_XF86XK_FRAME_BACK != NO)
#if ENABLE_OP_KEY_XF86XK_FRAME_BACK == YES
#	define OP_KEY_XF86XK_FRAME_BACK_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_FRAME_BACK == YES
#undef ENABLE_OP_KEY_XF86XK_FRAME_BACK
#if !defined ENABLE_OP_KEY_XF86XK_FRAME_FORWARD || (ENABLE_OP_KEY_XF86XK_FRAME_FORWARD != YES && ENABLE_OP_KEY_XF86XK_FRAME_FORWARD != NO)
#	error "You need to decide if OP_KEY_XF86XK_FRAME_FORWARD (FrameForward) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_FRAME_FORWARD || (ENABLE_OP_KEY_XF86XK_FRAME_FORWARD != YES && ENABLE_OP_KEY_XF86XK_FRAME_FORWARD != NO)
#if !defined ENABLE_OP_KEY_XF86XK_FRAME_FORWARD || (ENABLE_OP_KEY_XF86XK_FRAME_FORWARD != YES && ENABLE_OP_KEY_XF86XK_FRAME_FORWARD != NO)
#	error "You need to decide if OP_KEY_XF86XK_FRAME_FORWARD (FrameForward) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_FRAME_FORWARD || (ENABLE_OP_KEY_XF86XK_FRAME_FORWARD != YES && ENABLE_OP_KEY_XF86XK_FRAME_FORWARD != NO)
#if ENABLE_OP_KEY_XF86XK_FRAME_FORWARD == YES
#	define OP_KEY_XF86XK_FRAME_FORWARD_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_FRAME_FORWARD == YES
#undef ENABLE_OP_KEY_XF86XK_FRAME_FORWARD
#if !defined ENABLE_OP_KEY_XF86XK_TIME || (ENABLE_OP_KEY_XF86XK_TIME != YES && ENABLE_OP_KEY_XF86XK_TIME != NO)
#	error "You need to decide if OP_KEY_XF86XK_TIME (Time) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_TIME || (ENABLE_OP_KEY_XF86XK_TIME != YES && ENABLE_OP_KEY_XF86XK_TIME != NO)
#if !defined ENABLE_OP_KEY_XF86XK_TIME || (ENABLE_OP_KEY_XF86XK_TIME != YES && ENABLE_OP_KEY_XF86XK_TIME != NO)
#	error "You need to decide if OP_KEY_XF86XK_TIME (Time) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_TIME || (ENABLE_OP_KEY_XF86XK_TIME != YES && ENABLE_OP_KEY_XF86XK_TIME != NO)
#if ENABLE_OP_KEY_XF86XK_TIME == YES
#	define OP_KEY_XF86XK_TIME_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_TIME == YES
#undef ENABLE_OP_KEY_XF86XK_TIME
#if !defined ENABLE_OP_KEY_XF86XK_VIEW || (ENABLE_OP_KEY_XF86XK_VIEW != YES && ENABLE_OP_KEY_XF86XK_VIEW != NO)
#	error "You need to decide if OP_KEY_XF86XK_VIEW (View) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_VIEW || (ENABLE_OP_KEY_XF86XK_VIEW != YES && ENABLE_OP_KEY_XF86XK_VIEW != NO)
#if !defined ENABLE_OP_KEY_XF86XK_VIEW || (ENABLE_OP_KEY_XF86XK_VIEW != YES && ENABLE_OP_KEY_XF86XK_VIEW != NO)
#	error "You need to decide if OP_KEY_XF86XK_VIEW (View) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_VIEW || (ENABLE_OP_KEY_XF86XK_VIEW != YES && ENABLE_OP_KEY_XF86XK_VIEW != NO)
#if ENABLE_OP_KEY_XF86XK_VIEW == YES
#	define OP_KEY_XF86XK_VIEW_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_VIEW == YES
#undef ENABLE_OP_KEY_XF86XK_VIEW
#if !defined ENABLE_OP_KEY_XF86XK_TOP_MENU || (ENABLE_OP_KEY_XF86XK_TOP_MENU != YES && ENABLE_OP_KEY_XF86XK_TOP_MENU != NO)
#	error "You need to decide if OP_KEY_XF86XK_TOP_MENU (TopMenu) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_TOP_MENU || (ENABLE_OP_KEY_XF86XK_TOP_MENU != YES && ENABLE_OP_KEY_XF86XK_TOP_MENU != NO)
#if !defined ENABLE_OP_KEY_XF86XK_TOP_MENU || (ENABLE_OP_KEY_XF86XK_TOP_MENU != YES && ENABLE_OP_KEY_XF86XK_TOP_MENU != NO)
#	error "You need to decide if OP_KEY_XF86XK_TOP_MENU (TopMenu) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_TOP_MENU || (ENABLE_OP_KEY_XF86XK_TOP_MENU != YES && ENABLE_OP_KEY_XF86XK_TOP_MENU != NO)
#if ENABLE_OP_KEY_XF86XK_TOP_MENU == YES
#	define OP_KEY_XF86XK_TOP_MENU_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_TOP_MENU == YES
#undef ENABLE_OP_KEY_XF86XK_TOP_MENU
#if !defined ENABLE_OP_KEY_XF86XK_RED || (ENABLE_OP_KEY_XF86XK_RED != YES && ENABLE_OP_KEY_XF86XK_RED != NO)
#	error "You need to decide if OP_KEY_XF86XK_RED (Red) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_RED || (ENABLE_OP_KEY_XF86XK_RED != YES && ENABLE_OP_KEY_XF86XK_RED != NO)
#if !defined ENABLE_OP_KEY_XF86XK_RED || (ENABLE_OP_KEY_XF86XK_RED != YES && ENABLE_OP_KEY_XF86XK_RED != NO)
#	error "You need to decide if OP_KEY_XF86XK_RED (Red) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_RED || (ENABLE_OP_KEY_XF86XK_RED != YES && ENABLE_OP_KEY_XF86XK_RED != NO)
#if ENABLE_OP_KEY_XF86XK_RED == YES
#	define OP_KEY_XF86XK_RED_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_RED == YES
#undef ENABLE_OP_KEY_XF86XK_RED
#if !defined ENABLE_OP_KEY_XF86XK_GREEN || (ENABLE_OP_KEY_XF86XK_GREEN != YES && ENABLE_OP_KEY_XF86XK_GREEN != NO)
#	error "You need to decide if OP_KEY_XF86XK_GREEN (Green) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_GREEN || (ENABLE_OP_KEY_XF86XK_GREEN != YES && ENABLE_OP_KEY_XF86XK_GREEN != NO)
#if !defined ENABLE_OP_KEY_XF86XK_GREEN || (ENABLE_OP_KEY_XF86XK_GREEN != YES && ENABLE_OP_KEY_XF86XK_GREEN != NO)
#	error "You need to decide if OP_KEY_XF86XK_GREEN (Green) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_GREEN || (ENABLE_OP_KEY_XF86XK_GREEN != YES && ENABLE_OP_KEY_XF86XK_GREEN != NO)
#if ENABLE_OP_KEY_XF86XK_GREEN == YES
#	define OP_KEY_XF86XK_GREEN_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_GREEN == YES
#undef ENABLE_OP_KEY_XF86XK_GREEN
#if !defined ENABLE_OP_KEY_XF86XK_YELLOW || (ENABLE_OP_KEY_XF86XK_YELLOW != YES && ENABLE_OP_KEY_XF86XK_YELLOW != NO)
#	error "You need to decide if OP_KEY_XF86XK_YELLOW (Yellow) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_YELLOW || (ENABLE_OP_KEY_XF86XK_YELLOW != YES && ENABLE_OP_KEY_XF86XK_YELLOW != NO)
#if !defined ENABLE_OP_KEY_XF86XK_YELLOW || (ENABLE_OP_KEY_XF86XK_YELLOW != YES && ENABLE_OP_KEY_XF86XK_YELLOW != NO)
#	error "You need to decide if OP_KEY_XF86XK_YELLOW (Yellow) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_YELLOW || (ENABLE_OP_KEY_XF86XK_YELLOW != YES && ENABLE_OP_KEY_XF86XK_YELLOW != NO)
#if ENABLE_OP_KEY_XF86XK_YELLOW == YES
#	define OP_KEY_XF86XK_YELLOW_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_YELLOW == YES
#undef ENABLE_OP_KEY_XF86XK_YELLOW
#if !defined ENABLE_OP_KEY_XF86XK_BLUE || (ENABLE_OP_KEY_XF86XK_BLUE != YES && ENABLE_OP_KEY_XF86XK_BLUE != NO)
#	error "You need to decide if OP_KEY_XF86XK_BLUE (Blue) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_BLUE || (ENABLE_OP_KEY_XF86XK_BLUE != YES && ENABLE_OP_KEY_XF86XK_BLUE != NO)
#if !defined ENABLE_OP_KEY_XF86XK_BLUE || (ENABLE_OP_KEY_XF86XK_BLUE != YES && ENABLE_OP_KEY_XF86XK_BLUE != NO)
#	error "You need to decide if OP_KEY_XF86XK_BLUE (Blue) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_BLUE || (ENABLE_OP_KEY_XF86XK_BLUE != YES && ENABLE_OP_KEY_XF86XK_BLUE != NO)
#if ENABLE_OP_KEY_XF86XK_BLUE == YES
#	define OP_KEY_XF86XK_BLUE_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_BLUE == YES
#undef ENABLE_OP_KEY_XF86XK_BLUE
#if !defined ENABLE_OP_KEY_XF86XK_SUSPEND || (ENABLE_OP_KEY_XF86XK_SUSPEND != YES && ENABLE_OP_KEY_XF86XK_SUSPEND != NO)
#	error "You need to decide if OP_KEY_XF86XK_SUSPEND (Suspend) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SUSPEND || (ENABLE_OP_KEY_XF86XK_SUSPEND != YES && ENABLE_OP_KEY_XF86XK_SUSPEND != NO)
#if !defined ENABLE_OP_KEY_XF86XK_SUSPEND || (ENABLE_OP_KEY_XF86XK_SUSPEND != YES && ENABLE_OP_KEY_XF86XK_SUSPEND != NO)
#	error "You need to decide if OP_KEY_XF86XK_SUSPEND (Suspend) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_SUSPEND || (ENABLE_OP_KEY_XF86XK_SUSPEND != YES && ENABLE_OP_KEY_XF86XK_SUSPEND != NO)
#if ENABLE_OP_KEY_XF86XK_SUSPEND == YES
#	define OP_KEY_XF86XK_SUSPEND_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_SUSPEND == YES
#undef ENABLE_OP_KEY_XF86XK_SUSPEND
#if !defined ENABLE_OP_KEY_XF86XK_HIBERNATE || (ENABLE_OP_KEY_XF86XK_HIBERNATE != YES && ENABLE_OP_KEY_XF86XK_HIBERNATE != NO)
#	error "You need to decide if OP_KEY_XF86XK_HIBERNATE (Hibernate) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_HIBERNATE || (ENABLE_OP_KEY_XF86XK_HIBERNATE != YES && ENABLE_OP_KEY_XF86XK_HIBERNATE != NO)
#if !defined ENABLE_OP_KEY_XF86XK_HIBERNATE || (ENABLE_OP_KEY_XF86XK_HIBERNATE != YES && ENABLE_OP_KEY_XF86XK_HIBERNATE != NO)
#	error "You need to decide if OP_KEY_XF86XK_HIBERNATE (Hibernate) should be enabled."
#endif // !defined ENABLE_OP_KEY_XF86XK_HIBERNATE || (ENABLE_OP_KEY_XF86XK_HIBERNATE != YES && ENABLE_OP_KEY_XF86XK_HIBERNATE != NO)
#if ENABLE_OP_KEY_XF86XK_HIBERNATE == YES
#	define OP_KEY_XF86XK_HIBERNATE_ENABLED 1
#endif // ENABLE_OP_KEY_XF86XK_HIBERNATE == YES
#undef ENABLE_OP_KEY_XF86XK_HIBERNATE
#if !defined ENABLE_OP_KEY_MAC_CTRL_LEFT || (ENABLE_OP_KEY_MAC_CTRL_LEFT != YES && ENABLE_OP_KEY_MAC_CTRL_LEFT != NO)
#	error "You need to decide if OP_KEY_MAC_CTRL_LEFT (MacControlL) should be enabled."
#endif // !defined ENABLE_OP_KEY_MAC_CTRL_LEFT || (ENABLE_OP_KEY_MAC_CTRL_LEFT != YES && ENABLE_OP_KEY_MAC_CTRL_LEFT != NO)
#if !defined ENABLE_OP_KEY_MAC_CTRL_LEFT || (ENABLE_OP_KEY_MAC_CTRL_LEFT != YES && ENABLE_OP_KEY_MAC_CTRL_LEFT != NO)
#	error "You need to decide if OP_KEY_MAC_CTRL_LEFT (MacControlL) should be enabled."
#endif // !defined ENABLE_OP_KEY_MAC_CTRL_LEFT || (ENABLE_OP_KEY_MAC_CTRL_LEFT != YES && ENABLE_OP_KEY_MAC_CTRL_LEFT != NO)
#if ENABLE_OP_KEY_MAC_CTRL_LEFT == YES
#	define OP_KEY_MAC_CTRL_LEFT_ENABLED 1
#endif // ENABLE_OP_KEY_MAC_CTRL_LEFT == YES
#undef ENABLE_OP_KEY_MAC_CTRL_LEFT
#if !defined ENABLE_OP_KEY_MAC_CTRL_RIGHT || (ENABLE_OP_KEY_MAC_CTRL_RIGHT != YES && ENABLE_OP_KEY_MAC_CTRL_RIGHT != NO)
#	error "You need to decide if OP_KEY_MAC_CTRL_RIGHT (MacControlR) should be enabled."
#endif // !defined ENABLE_OP_KEY_MAC_CTRL_RIGHT || (ENABLE_OP_KEY_MAC_CTRL_RIGHT != YES && ENABLE_OP_KEY_MAC_CTRL_RIGHT != NO)
#if !defined ENABLE_OP_KEY_MAC_CTRL_RIGHT || (ENABLE_OP_KEY_MAC_CTRL_RIGHT != YES && ENABLE_OP_KEY_MAC_CTRL_RIGHT != NO)
#	error "You need to decide if OP_KEY_MAC_CTRL_RIGHT (MacControlR) should be enabled."
#endif // !defined ENABLE_OP_KEY_MAC_CTRL_RIGHT || (ENABLE_OP_KEY_MAC_CTRL_RIGHT != YES && ENABLE_OP_KEY_MAC_CTRL_RIGHT != NO)
#if ENABLE_OP_KEY_MAC_CTRL_RIGHT == YES
#	define OP_KEY_MAC_CTRL_RIGHT_ENABLED 1
#endif // ENABLE_OP_KEY_MAC_CTRL_RIGHT == YES
#undef ENABLE_OP_KEY_MAC_CTRL_RIGHT
#if !defined ENABLE_OP_KEY_SWIPE_UP || (ENABLE_OP_KEY_SWIPE_UP != YES && ENABLE_OP_KEY_SWIPE_UP != NO)
#	error "You need to decide if OP_KEY_SWIPE_UP (SwipeUp) should be enabled."
#endif // !defined ENABLE_OP_KEY_SWIPE_UP || (ENABLE_OP_KEY_SWIPE_UP != YES && ENABLE_OP_KEY_SWIPE_UP != NO)
#if !defined ENABLE_OP_KEY_SWIPE_UP || (ENABLE_OP_KEY_SWIPE_UP != YES && ENABLE_OP_KEY_SWIPE_UP != NO)
#	error "You need to decide if OP_KEY_SWIPE_UP (SwipeUp) should be enabled."
#endif // !defined ENABLE_OP_KEY_SWIPE_UP || (ENABLE_OP_KEY_SWIPE_UP != YES && ENABLE_OP_KEY_SWIPE_UP != NO)
#if ENABLE_OP_KEY_SWIPE_UP == YES
#	define OP_KEY_SWIPE_UP_ENABLED 1
#endif // ENABLE_OP_KEY_SWIPE_UP == YES
#undef ENABLE_OP_KEY_SWIPE_UP
#if !defined ENABLE_OP_KEY_SWIPE_DOWN || (ENABLE_OP_KEY_SWIPE_DOWN != YES && ENABLE_OP_KEY_SWIPE_DOWN != NO)
#	error "You need to decide if OP_KEY_SWIPE_DOWN (SwipeDown) should be enabled."
#endif // !defined ENABLE_OP_KEY_SWIPE_DOWN || (ENABLE_OP_KEY_SWIPE_DOWN != YES && ENABLE_OP_KEY_SWIPE_DOWN != NO)
#if !defined ENABLE_OP_KEY_SWIPE_DOWN || (ENABLE_OP_KEY_SWIPE_DOWN != YES && ENABLE_OP_KEY_SWIPE_DOWN != NO)
#	error "You need to decide if OP_KEY_SWIPE_DOWN (SwipeDown) should be enabled."
#endif // !defined ENABLE_OP_KEY_SWIPE_DOWN || (ENABLE_OP_KEY_SWIPE_DOWN != YES && ENABLE_OP_KEY_SWIPE_DOWN != NO)
#if ENABLE_OP_KEY_SWIPE_DOWN == YES
#	define OP_KEY_SWIPE_DOWN_ENABLED 1
#endif // ENABLE_OP_KEY_SWIPE_DOWN == YES
#undef ENABLE_OP_KEY_SWIPE_DOWN
#if !defined ENABLE_OP_KEY_SWIPE_LEFT || (ENABLE_OP_KEY_SWIPE_LEFT != YES && ENABLE_OP_KEY_SWIPE_LEFT != NO)
#	error "You need to decide if OP_KEY_SWIPE_LEFT (SwipeLeft) should be enabled."
#endif // !defined ENABLE_OP_KEY_SWIPE_LEFT || (ENABLE_OP_KEY_SWIPE_LEFT != YES && ENABLE_OP_KEY_SWIPE_LEFT != NO)
#if !defined ENABLE_OP_KEY_SWIPE_LEFT || (ENABLE_OP_KEY_SWIPE_LEFT != YES && ENABLE_OP_KEY_SWIPE_LEFT != NO)
#	error "You need to decide if OP_KEY_SWIPE_LEFT (SwipeLeft) should be enabled."
#endif // !defined ENABLE_OP_KEY_SWIPE_LEFT || (ENABLE_OP_KEY_SWIPE_LEFT != YES && ENABLE_OP_KEY_SWIPE_LEFT != NO)
#if ENABLE_OP_KEY_SWIPE_LEFT == YES
#	define OP_KEY_SWIPE_LEFT_ENABLED 1
#endif // ENABLE_OP_KEY_SWIPE_LEFT == YES
#undef ENABLE_OP_KEY_SWIPE_LEFT
#if !defined ENABLE_OP_KEY_SWIPE_RIGHT || (ENABLE_OP_KEY_SWIPE_RIGHT != YES && ENABLE_OP_KEY_SWIPE_RIGHT != NO)
#	error "You need to decide if OP_KEY_SWIPE_RIGHT (SwipeRight) should be enabled."
#endif // !defined ENABLE_OP_KEY_SWIPE_RIGHT || (ENABLE_OP_KEY_SWIPE_RIGHT != YES && ENABLE_OP_KEY_SWIPE_RIGHT != NO)
#if !defined ENABLE_OP_KEY_SWIPE_RIGHT || (ENABLE_OP_KEY_SWIPE_RIGHT != YES && ENABLE_OP_KEY_SWIPE_RIGHT != NO)
#	error "You need to decide if OP_KEY_SWIPE_RIGHT (SwipeRight) should be enabled."
#endif // !defined ENABLE_OP_KEY_SWIPE_RIGHT || (ENABLE_OP_KEY_SWIPE_RIGHT != YES && ENABLE_OP_KEY_SWIPE_RIGHT != NO)
#if ENABLE_OP_KEY_SWIPE_RIGHT == YES
#	define OP_KEY_SWIPE_RIGHT_ENABLED 1
#endif // ENABLE_OP_KEY_SWIPE_RIGHT == YES
#undef ENABLE_OP_KEY_SWIPE_RIGHT
#if !defined ENABLE_OP_KEY_BACK || (ENABLE_OP_KEY_BACK != YES && ENABLE_OP_KEY_BACK != NO)
#	error "You need to decide if OP_KEY_BACK (BACK) should be enabled."
#endif // !defined ENABLE_OP_KEY_BACK || (ENABLE_OP_KEY_BACK != YES && ENABLE_OP_KEY_BACK != NO)
#if !defined ENABLE_OP_KEY_BACK || (ENABLE_OP_KEY_BACK != YES && ENABLE_OP_KEY_BACK != NO)
#	error "You need to decide if OP_KEY_BACK (BACK) should be enabled."
#endif // !defined ENABLE_OP_KEY_BACK || (ENABLE_OP_KEY_BACK != YES && ENABLE_OP_KEY_BACK != NO)
#if ENABLE_OP_KEY_BACK == YES
#	define OP_KEY_BACK_ENABLED 1
#endif // ENABLE_OP_KEY_BACK == YES
#undef ENABLE_OP_KEY_BACK
#if !defined ENABLE_OP_KEY_CONTEXT1 || (ENABLE_OP_KEY_CONTEXT1 != YES && ENABLE_OP_KEY_CONTEXT1 != NO)
#	error "You need to decide if OP_KEY_CONTEXT1 (CONTEXT1) should be enabled."
#endif // !defined ENABLE_OP_KEY_CONTEXT1 || (ENABLE_OP_KEY_CONTEXT1 != YES && ENABLE_OP_KEY_CONTEXT1 != NO)
#if !defined ENABLE_OP_KEY_CONTEXT1 || (ENABLE_OP_KEY_CONTEXT1 != YES && ENABLE_OP_KEY_CONTEXT1 != NO)
#	error "You need to decide if OP_KEY_CONTEXT1 (CONTEXT1) should be enabled."
#endif // !defined ENABLE_OP_KEY_CONTEXT1 || (ENABLE_OP_KEY_CONTEXT1 != YES && ENABLE_OP_KEY_CONTEXT1 != NO)
#if ENABLE_OP_KEY_CONTEXT1 == YES
#	define OP_KEY_CONTEXT1_ENABLED 1
#endif // ENABLE_OP_KEY_CONTEXT1 == YES
#undef ENABLE_OP_KEY_CONTEXT1
#if !defined ENABLE_OP_KEY_CONTEXT2 || (ENABLE_OP_KEY_CONTEXT2 != YES && ENABLE_OP_KEY_CONTEXT2 != NO)
#	error "You need to decide if OP_KEY_CONTEXT2 (CONTEXT2) should be enabled."
#endif // !defined ENABLE_OP_KEY_CONTEXT2 || (ENABLE_OP_KEY_CONTEXT2 != YES && ENABLE_OP_KEY_CONTEXT2 != NO)
#if !defined ENABLE_OP_KEY_CONTEXT2 || (ENABLE_OP_KEY_CONTEXT2 != YES && ENABLE_OP_KEY_CONTEXT2 != NO)
#	error "You need to decide if OP_KEY_CONTEXT2 (CONTEXT2) should be enabled."
#endif // !defined ENABLE_OP_KEY_CONTEXT2 || (ENABLE_OP_KEY_CONTEXT2 != YES && ENABLE_OP_KEY_CONTEXT2 != NO)
#if ENABLE_OP_KEY_CONTEXT2 == YES
#	define OP_KEY_CONTEXT2_ENABLED 1
#endif // ENABLE_OP_KEY_CONTEXT2 == YES
#undef ENABLE_OP_KEY_CONTEXT2
#if !defined ENABLE_OP_KEY_CONTEXT3 || (ENABLE_OP_KEY_CONTEXT3 != YES && ENABLE_OP_KEY_CONTEXT3 != NO)
#	error "You need to decide if OP_KEY_CONTEXT3 (CONTEXT3) should be enabled."
#endif // !defined ENABLE_OP_KEY_CONTEXT3 || (ENABLE_OP_KEY_CONTEXT3 != YES && ENABLE_OP_KEY_CONTEXT3 != NO)
#if !defined ENABLE_OP_KEY_CONTEXT3 || (ENABLE_OP_KEY_CONTEXT3 != YES && ENABLE_OP_KEY_CONTEXT3 != NO)
#	error "You need to decide if OP_KEY_CONTEXT3 (CONTEXT3) should be enabled."
#endif // !defined ENABLE_OP_KEY_CONTEXT3 || (ENABLE_OP_KEY_CONTEXT3 != YES && ENABLE_OP_KEY_CONTEXT3 != NO)
#if ENABLE_OP_KEY_CONTEXT3 == YES
#	define OP_KEY_CONTEXT3_ENABLED 1
#endif // ENABLE_OP_KEY_CONTEXT3 == YES
#undef ENABLE_OP_KEY_CONTEXT3
#if !defined ENABLE_OP_KEY_CONTEXT4 || (ENABLE_OP_KEY_CONTEXT4 != YES && ENABLE_OP_KEY_CONTEXT4 != NO)
#	error "You need to decide if OP_KEY_CONTEXT4 (CONTEXT4) should be enabled."
#endif // !defined ENABLE_OP_KEY_CONTEXT4 || (ENABLE_OP_KEY_CONTEXT4 != YES && ENABLE_OP_KEY_CONTEXT4 != NO)
#if !defined ENABLE_OP_KEY_CONTEXT4 || (ENABLE_OP_KEY_CONTEXT4 != YES && ENABLE_OP_KEY_CONTEXT4 != NO)
#	error "You need to decide if OP_KEY_CONTEXT4 (CONTEXT4) should be enabled."
#endif // !defined ENABLE_OP_KEY_CONTEXT4 || (ENABLE_OP_KEY_CONTEXT4 != YES && ENABLE_OP_KEY_CONTEXT4 != NO)
#if ENABLE_OP_KEY_CONTEXT4 == YES
#	define OP_KEY_CONTEXT4_ENABLED 1
#endif // ENABLE_OP_KEY_CONTEXT4 == YES
#undef ENABLE_OP_KEY_CONTEXT4
#if !defined ENABLE_OP_KEY_YES || (ENABLE_OP_KEY_YES != YES && ENABLE_OP_KEY_YES != NO)
#	error "You need to decide if OP_KEY_YES (YES) should be enabled."
#endif // !defined ENABLE_OP_KEY_YES || (ENABLE_OP_KEY_YES != YES && ENABLE_OP_KEY_YES != NO)
#if !defined ENABLE_OP_KEY_YES || (ENABLE_OP_KEY_YES != YES && ENABLE_OP_KEY_YES != NO)
#	error "You need to decide if OP_KEY_YES (YES) should be enabled."
#endif // !defined ENABLE_OP_KEY_YES || (ENABLE_OP_KEY_YES != YES && ENABLE_OP_KEY_YES != NO)
#if ENABLE_OP_KEY_YES == YES
#	define OP_KEY_YES_ENABLED 1
#endif // ENABLE_OP_KEY_YES == YES
#undef ENABLE_OP_KEY_YES
#if !defined ENABLE_OP_KEY_NO || (ENABLE_OP_KEY_NO != YES && ENABLE_OP_KEY_NO != NO)
#	error "You need to decide if OP_KEY_NO (NO) should be enabled."
#endif // !defined ENABLE_OP_KEY_NO || (ENABLE_OP_KEY_NO != YES && ENABLE_OP_KEY_NO != NO)
#if !defined ENABLE_OP_KEY_NO || (ENABLE_OP_KEY_NO != YES && ENABLE_OP_KEY_NO != NO)
#	error "You need to decide if OP_KEY_NO (NO) should be enabled."
#endif // !defined ENABLE_OP_KEY_NO || (ENABLE_OP_KEY_NO != YES && ENABLE_OP_KEY_NO != NO)
#if ENABLE_OP_KEY_NO == YES
#	define OP_KEY_NO_ENABLED 1
#endif // ENABLE_OP_KEY_NO == YES
#undef ENABLE_OP_KEY_NO
#if !defined ENABLE_OP_KEY_CALL || (ENABLE_OP_KEY_CALL != YES && ENABLE_OP_KEY_CALL != NO)
#	error "You need to decide if OP_KEY_CALL (CALL) should be enabled."
#endif // !defined ENABLE_OP_KEY_CALL || (ENABLE_OP_KEY_CALL != YES && ENABLE_OP_KEY_CALL != NO)
#if !defined ENABLE_OP_KEY_CALL || (ENABLE_OP_KEY_CALL != YES && ENABLE_OP_KEY_CALL != NO)
#	error "You need to decide if OP_KEY_CALL (CALL) should be enabled."
#endif // !defined ENABLE_OP_KEY_CALL || (ENABLE_OP_KEY_CALL != YES && ENABLE_OP_KEY_CALL != NO)
#if ENABLE_OP_KEY_CALL == YES
#	define OP_KEY_CALL_ENABLED 1
#endif // ENABLE_OP_KEY_CALL == YES
#undef ENABLE_OP_KEY_CALL
#if !defined ENABLE_OP_KEY_HANGUP || (ENABLE_OP_KEY_HANGUP != YES && ENABLE_OP_KEY_HANGUP != NO)
#	error "You need to decide if OP_KEY_HANGUP (HANGUP) should be enabled."
#endif // !defined ENABLE_OP_KEY_HANGUP || (ENABLE_OP_KEY_HANGUP != YES && ENABLE_OP_KEY_HANGUP != NO)
#if !defined ENABLE_OP_KEY_HANGUP || (ENABLE_OP_KEY_HANGUP != YES && ENABLE_OP_KEY_HANGUP != NO)
#	error "You need to decide if OP_KEY_HANGUP (HANGUP) should be enabled."
#endif // !defined ENABLE_OP_KEY_HANGUP || (ENABLE_OP_KEY_HANGUP != YES && ENABLE_OP_KEY_HANGUP != NO)
#if ENABLE_OP_KEY_HANGUP == YES
#	define OP_KEY_HANGUP_ENABLED 1
#endif // ENABLE_OP_KEY_HANGUP == YES
#undef ENABLE_OP_KEY_HANGUP
#if !defined ENABLE_OP_KEY_HK_TOGGLE || (ENABLE_OP_KEY_HK_TOGGLE != YES && ENABLE_OP_KEY_HK_TOGGLE != NO)
#	error "You need to decide if OP_KEY_HK_TOGGLE (HiraganaKatakanatoggle) should be enabled."
#endif // !defined ENABLE_OP_KEY_HK_TOGGLE || (ENABLE_OP_KEY_HK_TOGGLE != YES && ENABLE_OP_KEY_HK_TOGGLE != NO)
#if !defined ENABLE_OP_KEY_HK_TOGGLE || (ENABLE_OP_KEY_HK_TOGGLE != YES && ENABLE_OP_KEY_HK_TOGGLE != NO)
#	error "You need to decide if OP_KEY_HK_TOGGLE (HiraganaKatakanatoggle) should be enabled."
#endif // !defined ENABLE_OP_KEY_HK_TOGGLE || (ENABLE_OP_KEY_HK_TOGGLE != YES && ENABLE_OP_KEY_HK_TOGGLE != NO)
#if ENABLE_OP_KEY_HK_TOGGLE == YES
#	define OP_KEY_HK_TOGGLE_ENABLED 1
#endif // ENABLE_OP_KEY_HK_TOGGLE == YES
#undef ENABLE_OP_KEY_HK_TOGGLE
#if !defined ENABLE_OP_KEY_KATAKANA || (ENABLE_OP_KEY_KATAKANA != YES && ENABLE_OP_KEY_KATAKANA != NO)
#	error "You need to decide if OP_KEY_KATAKANA (Katakana) should be enabled."
#endif // !defined ENABLE_OP_KEY_KATAKANA || (ENABLE_OP_KEY_KATAKANA != YES && ENABLE_OP_KEY_KATAKANA != NO)
#if !defined ENABLE_OP_KEY_KATAKANA || (ENABLE_OP_KEY_KATAKANA != YES && ENABLE_OP_KEY_KATAKANA != NO)
#	error "You need to decide if OP_KEY_KATAKANA (Katakana) should be enabled."
#endif // !defined ENABLE_OP_KEY_KATAKANA || (ENABLE_OP_KEY_KATAKANA != YES && ENABLE_OP_KEY_KATAKANA != NO)
#if ENABLE_OP_KEY_KATAKANA == YES
#	define OP_KEY_KATAKANA_ENABLED 1
#endif // ENABLE_OP_KEY_KATAKANA == YES
#undef ENABLE_OP_KEY_KATAKANA
#if !defined ENABLE_OP_KEY_HIRAGANA || (ENABLE_OP_KEY_HIRAGANA != YES && ENABLE_OP_KEY_HIRAGANA != NO)
#	error "You need to decide if OP_KEY_HIRAGANA (Hiragana) should be enabled."
#endif // !defined ENABLE_OP_KEY_HIRAGANA || (ENABLE_OP_KEY_HIRAGANA != YES && ENABLE_OP_KEY_HIRAGANA != NO)
#if !defined ENABLE_OP_KEY_HIRAGANA || (ENABLE_OP_KEY_HIRAGANA != YES && ENABLE_OP_KEY_HIRAGANA != NO)
#	error "You need to decide if OP_KEY_HIRAGANA (Hiragana) should be enabled."
#endif // !defined ENABLE_OP_KEY_HIRAGANA || (ENABLE_OP_KEY_HIRAGANA != YES && ENABLE_OP_KEY_HIRAGANA != NO)
#if ENABLE_OP_KEY_HIRAGANA == YES
#	define OP_KEY_HIRAGANA_ENABLED 1
#endif // ENABLE_OP_KEY_HIRAGANA == YES
#undef ENABLE_OP_KEY_HIRAGANA
#if !defined ENABLE_OP_KEY_CHANNELDOWN || (ENABLE_OP_KEY_CHANNELDOWN != YES && ENABLE_OP_KEY_CHANNELDOWN != NO)
#	error "You need to decide if OP_KEY_CHANNELDOWN (RC_CHANNELDOWN) should be enabled."
#endif // !defined ENABLE_OP_KEY_CHANNELDOWN || (ENABLE_OP_KEY_CHANNELDOWN != YES && ENABLE_OP_KEY_CHANNELDOWN != NO)
#if !defined ENABLE_OP_KEY_CHANNELDOWN || (ENABLE_OP_KEY_CHANNELDOWN != YES && ENABLE_OP_KEY_CHANNELDOWN != NO)
#	error "You need to decide if OP_KEY_CHANNELDOWN (RC_CHANNELDOWN) should be enabled."
#endif // !defined ENABLE_OP_KEY_CHANNELDOWN || (ENABLE_OP_KEY_CHANNELDOWN != YES && ENABLE_OP_KEY_CHANNELDOWN != NO)
#if ENABLE_OP_KEY_CHANNELDOWN == YES
#	define OP_KEY_CHANNELDOWN_ENABLED 1
#endif // ENABLE_OP_KEY_CHANNELDOWN == YES
#undef ENABLE_OP_KEY_CHANNELDOWN
#if !defined ENABLE_OP_KEY_CHANNELUP || (ENABLE_OP_KEY_CHANNELUP != YES && ENABLE_OP_KEY_CHANNELUP != NO)
#	error "You need to decide if OP_KEY_CHANNELUP (RC_CHANNELUP) should be enabled."
#endif // !defined ENABLE_OP_KEY_CHANNELUP || (ENABLE_OP_KEY_CHANNELUP != YES && ENABLE_OP_KEY_CHANNELUP != NO)
#if !defined ENABLE_OP_KEY_CHANNELUP || (ENABLE_OP_KEY_CHANNELUP != YES && ENABLE_OP_KEY_CHANNELUP != NO)
#	error "You need to decide if OP_KEY_CHANNELUP (RC_CHANNELUP) should be enabled."
#endif // !defined ENABLE_OP_KEY_CHANNELUP || (ENABLE_OP_KEY_CHANNELUP != YES && ENABLE_OP_KEY_CHANNELUP != NO)
#if ENABLE_OP_KEY_CHANNELUP == YES
#	define OP_KEY_CHANNELUP_ENABLED 1
#endif // ENABLE_OP_KEY_CHANNELUP == YES
#undef ENABLE_OP_KEY_CHANNELUP
#if !defined ENABLE_OP_KEY_MUTE || (ENABLE_OP_KEY_MUTE != YES && ENABLE_OP_KEY_MUTE != NO)
#	error "You need to decide if OP_KEY_MUTE (RC_MUTE) should be enabled."
#endif // !defined ENABLE_OP_KEY_MUTE || (ENABLE_OP_KEY_MUTE != YES && ENABLE_OP_KEY_MUTE != NO)
#if !defined ENABLE_OP_KEY_MUTE || (ENABLE_OP_KEY_MUTE != YES && ENABLE_OP_KEY_MUTE != NO)
#	error "You need to decide if OP_KEY_MUTE (RC_MUTE) should be enabled."
#endif // !defined ENABLE_OP_KEY_MUTE || (ENABLE_OP_KEY_MUTE != YES && ENABLE_OP_KEY_MUTE != NO)
#if ENABLE_OP_KEY_MUTE == YES
#	define OP_KEY_MUTE_ENABLED 1
#endif // ENABLE_OP_KEY_MUTE == YES
#undef ENABLE_OP_KEY_MUTE
#if !defined ENABLE_OP_KEY_RECORD || (ENABLE_OP_KEY_RECORD != YES && ENABLE_OP_KEY_RECORD != NO)
#	error "You need to decide if OP_KEY_RECORD (RC_RECORD) should be enabled."
#endif // !defined ENABLE_OP_KEY_RECORD || (ENABLE_OP_KEY_RECORD != YES && ENABLE_OP_KEY_RECORD != NO)
#if !defined ENABLE_OP_KEY_RECORD || (ENABLE_OP_KEY_RECORD != YES && ENABLE_OP_KEY_RECORD != NO)
#	error "You need to decide if OP_KEY_RECORD (RC_RECORD) should be enabled."
#endif // !defined ENABLE_OP_KEY_RECORD || (ENABLE_OP_KEY_RECORD != YES && ENABLE_OP_KEY_RECORD != NO)
#if ENABLE_OP_KEY_RECORD == YES
#	define OP_KEY_RECORD_ENABLED 1
#endif // ENABLE_OP_KEY_RECORD == YES
#undef ENABLE_OP_KEY_RECORD

#undef YES
#undef NO

typedef UINT8 ShiftKeyState;
enum
{
	SHIFTKEY_NONE = 0x00,
	SHIFTKEY_CTRL = 0x01,
	SHIFTKEY_SHIFT = 0x02,
	SHIFTKEY_ALT = 0x04,
	SHIFTKEY_META = 0x08,
	SHIFTKEY_SUPER = 0x10 ///< The Windows key under X11.
};

enum OpVirtualKey
{
	OP_KEY_FIRST = 0,
	OP_KEY_INVALID = OP_KEY_FIRST,
	/**< The OP_KEY_INVALID is used internally in Core to represent an
	     unknown key. No key input actions will contain its virtual key.
	     If a platform injects key input having its keycode, it will be
	     ignored. */

#ifdef OP_KEY_CANCEL_ENABLED
	OP_KEY_CANCEL = OP_KEY_FIRST + 0x03,
#endif // OP_KEY_CANCEL_ENABLED
#ifdef OP_KEY_BACKSPACE_ENABLED
	OP_KEY_BACKSPACE = OP_KEY_FIRST + 0x08,
#endif // OP_KEY_BACKSPACE_ENABLED
#ifdef OP_KEY_TAB_ENABLED
	OP_KEY_TAB = OP_KEY_FIRST + 9,
#endif // OP_KEY_TAB_ENABLED
#ifdef OP_KEY_CLEAR_ENABLED
	OP_KEY_CLEAR = OP_KEY_FIRST + 0x0c,
#endif // OP_KEY_CLEAR_ENABLED
#ifdef OP_KEY_ENTER_ENABLED
	OP_KEY_ENTER = OP_KEY_FIRST + 13,
#endif // OP_KEY_ENTER_ENABLED
#ifdef OP_KEY_ENTER_ENABLED
	OP_KEY_RETURN = OP_KEY_ENTER,
#endif // OP_KEY_ENTER_ENABLED
#ifdef OP_KEY_SHIFT_ENABLED
	OP_KEY_SHIFT = OP_KEY_FIRST + 0x10,
#endif // OP_KEY_SHIFT_ENABLED
#ifdef OP_KEY_CTRL_ENABLED
	OP_KEY_CTRL = OP_KEY_FIRST + 17,
#endif // OP_KEY_CTRL_ENABLED
#ifdef OP_KEY_ALT_ENABLED
	OP_KEY_ALT = OP_KEY_FIRST + 18,
#endif // OP_KEY_ALT_ENABLED
#ifdef OP_KEY_PAUSE_ENABLED
	OP_KEY_PAUSE = OP_KEY_FIRST + 19,
#endif // OP_KEY_PAUSE_ENABLED
#ifdef OP_KEY_CAPS_LOCK_ENABLED
	OP_KEY_CAPS_LOCK = OP_KEY_FIRST + 0x14,
#endif // OP_KEY_CAPS_LOCK_ENABLED
#ifdef OP_KEY_KANA_ENABLED
	OP_KEY_KANA = OP_KEY_FIRST + 0x15,
#endif // OP_KEY_KANA_ENABLED
#ifdef OP_KEY_FINAL_ENABLED
	OP_KEY_FINAL = OP_KEY_FIRST + 0x18,
#endif // OP_KEY_FINAL_ENABLED
#ifdef OP_KEY_KANJI_ENABLED
	OP_KEY_KANJI = OP_KEY_FIRST + 0x19,
#endif // OP_KEY_KANJI_ENABLED
#ifdef OP_KEY_ESCAPE_ENABLED
	OP_KEY_ESCAPE = OP_KEY_FIRST + 0x1b,
#endif // OP_KEY_ESCAPE_ENABLED
#ifdef OP_KEY_CONVERT_ENABLED
	OP_KEY_CONVERT = OP_KEY_FIRST + 28,
#endif // OP_KEY_CONVERT_ENABLED
#ifdef OP_KEY_NONCONVERT_ENABLED
	OP_KEY_NONCONVERT = OP_KEY_FIRST + 29,
#endif // OP_KEY_NONCONVERT_ENABLED
#ifdef OP_KEY_ACCEPT_ENABLED
	OP_KEY_ACCEPT = OP_KEY_FIRST + 30,
#endif // OP_KEY_ACCEPT_ENABLED
#ifdef OP_KEY_MODECHANGE_ENABLED
	OP_KEY_MODECHANGE = OP_KEY_FIRST + 31,
#endif // OP_KEY_MODECHANGE_ENABLED
#ifdef OP_KEY_SPACE_ENABLED
	OP_KEY_SPACE = OP_KEY_FIRST + 0x20,
#endif // OP_KEY_SPACE_ENABLED
#ifdef OP_KEY_PAGEUP_ENABLED
	OP_KEY_PAGEUP = OP_KEY_FIRST + 33,
#endif // OP_KEY_PAGEUP_ENABLED
#ifdef OP_KEY_PAGEDOWN_ENABLED
	OP_KEY_PAGEDOWN = OP_KEY_FIRST + 34,
#endif // OP_KEY_PAGEDOWN_ENABLED
#ifdef OP_KEY_END_ENABLED
	OP_KEY_END = OP_KEY_FIRST + 35,
#endif // OP_KEY_END_ENABLED
#ifdef OP_KEY_HOME_ENABLED
	OP_KEY_HOME = OP_KEY_FIRST + 36,
#endif // OP_KEY_HOME_ENABLED
#ifdef OP_KEY_LEFT_ENABLED
	OP_KEY_LEFT = OP_KEY_FIRST + 37,
#endif // OP_KEY_LEFT_ENABLED
#ifdef OP_KEY_UP_ENABLED
	OP_KEY_UP = OP_KEY_FIRST + 38,
#endif // OP_KEY_UP_ENABLED
#ifdef OP_KEY_RIGHT_ENABLED
	OP_KEY_RIGHT = OP_KEY_FIRST + 39,
#endif // OP_KEY_RIGHT_ENABLED
#ifdef OP_KEY_DOWN_ENABLED
	OP_KEY_DOWN = OP_KEY_FIRST + 40,
#endif // OP_KEY_DOWN_ENABLED
#ifdef OP_KEY_SELECT_ENABLED
	OP_KEY_SELECT = OP_KEY_FIRST + 41,
#endif // OP_KEY_SELECT_ENABLED
#ifdef OP_KEY_PRINT_ENABLED
	OP_KEY_PRINT = OP_KEY_FIRST + 42,
#endif // OP_KEY_PRINT_ENABLED
#ifdef OP_KEY_EXECUTE_ENABLED
	OP_KEY_EXECUTE = OP_KEY_FIRST + 43,
#endif // OP_KEY_EXECUTE_ENABLED
#ifdef OP_KEY_PRINTSCREEN_ENABLED
	OP_KEY_PRINTSCREEN = OP_KEY_FIRST + 0x2c,
#endif // OP_KEY_PRINTSCREEN_ENABLED
#ifdef OP_KEY_INSERT_ENABLED
	OP_KEY_INSERT = OP_KEY_FIRST + 45,
#endif // OP_KEY_INSERT_ENABLED
#ifdef OP_KEY_DELETE_ENABLED
	OP_KEY_DELETE = OP_KEY_FIRST + 46,
#endif // OP_KEY_DELETE_ENABLED
#ifdef OP_KEY_HELP_ENABLED
	OP_KEY_HELP = OP_KEY_FIRST + 47,
#endif // OP_KEY_HELP_ENABLED
#ifdef OP_KEY_0_ENABLED
	OP_KEY_0 = OP_KEY_FIRST + 0x30,
#endif // OP_KEY_0_ENABLED
#ifdef OP_KEY_1_ENABLED
	OP_KEY_1 = OP_KEY_FIRST + 49,
#endif // OP_KEY_1_ENABLED
#ifdef OP_KEY_2_ENABLED
	OP_KEY_2 = OP_KEY_FIRST + 50,
#endif // OP_KEY_2_ENABLED
#ifdef OP_KEY_3_ENABLED
	OP_KEY_3 = OP_KEY_FIRST + 51,
#endif // OP_KEY_3_ENABLED
#ifdef OP_KEY_4_ENABLED
	OP_KEY_4 = OP_KEY_FIRST + 52,
#endif // OP_KEY_4_ENABLED
#ifdef OP_KEY_5_ENABLED
	OP_KEY_5 = OP_KEY_FIRST + 53,
#endif // OP_KEY_5_ENABLED
#ifdef OP_KEY_6_ENABLED
	OP_KEY_6 = OP_KEY_FIRST + 54,
#endif // OP_KEY_6_ENABLED
#ifdef OP_KEY_7_ENABLED
	OP_KEY_7 = OP_KEY_FIRST + 55,
#endif // OP_KEY_7_ENABLED
#ifdef OP_KEY_8_ENABLED
	OP_KEY_8 = OP_KEY_FIRST + 56,
#endif // OP_KEY_8_ENABLED
#ifdef OP_KEY_9_ENABLED
	OP_KEY_9 = OP_KEY_FIRST + 0x39,
#endif // OP_KEY_9_ENABLED
#ifdef OP_KEY_A_ENABLED
	OP_KEY_A = OP_KEY_FIRST + 0x41,
#endif // OP_KEY_A_ENABLED
#ifdef OP_KEY_B_ENABLED
	OP_KEY_B = OP_KEY_FIRST + 66,
#endif // OP_KEY_B_ENABLED
#ifdef OP_KEY_C_ENABLED
	OP_KEY_C = OP_KEY_FIRST + 67,
#endif // OP_KEY_C_ENABLED
#ifdef OP_KEY_D_ENABLED
	OP_KEY_D = OP_KEY_FIRST + 68,
#endif // OP_KEY_D_ENABLED
#ifdef OP_KEY_E_ENABLED
	OP_KEY_E = OP_KEY_FIRST + 69,
#endif // OP_KEY_E_ENABLED
#ifdef OP_KEY_F_ENABLED
	OP_KEY_F = OP_KEY_FIRST + 70,
#endif // OP_KEY_F_ENABLED
#ifdef OP_KEY_G_ENABLED
	OP_KEY_G = OP_KEY_FIRST + 71,
#endif // OP_KEY_G_ENABLED
#ifdef OP_KEY_H_ENABLED
	OP_KEY_H = OP_KEY_FIRST + 72,
#endif // OP_KEY_H_ENABLED
#ifdef OP_KEY_I_ENABLED
	OP_KEY_I = OP_KEY_FIRST + 73,
#endif // OP_KEY_I_ENABLED
#ifdef OP_KEY_J_ENABLED
	OP_KEY_J = OP_KEY_FIRST + 74,
#endif // OP_KEY_J_ENABLED
#ifdef OP_KEY_K_ENABLED
	OP_KEY_K = OP_KEY_FIRST + 75,
#endif // OP_KEY_K_ENABLED
#ifdef OP_KEY_L_ENABLED
	OP_KEY_L = OP_KEY_FIRST + 76,
#endif // OP_KEY_L_ENABLED
#ifdef OP_KEY_M_ENABLED
	OP_KEY_M = OP_KEY_FIRST + 77,
#endif // OP_KEY_M_ENABLED
#ifdef OP_KEY_N_ENABLED
	OP_KEY_N = OP_KEY_FIRST + 78,
#endif // OP_KEY_N_ENABLED
#ifdef OP_KEY_O_ENABLED
	OP_KEY_O = OP_KEY_FIRST + 79,
#endif // OP_KEY_O_ENABLED
#ifdef OP_KEY_P_ENABLED
	OP_KEY_P = OP_KEY_FIRST + 80,
#endif // OP_KEY_P_ENABLED
#ifdef OP_KEY_Q_ENABLED
	OP_KEY_Q = OP_KEY_FIRST + 81,
#endif // OP_KEY_Q_ENABLED
#ifdef OP_KEY_R_ENABLED
	OP_KEY_R = OP_KEY_FIRST + 82,
#endif // OP_KEY_R_ENABLED
#ifdef OP_KEY_S_ENABLED
	OP_KEY_S = OP_KEY_FIRST + 83,
#endif // OP_KEY_S_ENABLED
#ifdef OP_KEY_T_ENABLED
	OP_KEY_T = OP_KEY_FIRST + 84,
#endif // OP_KEY_T_ENABLED
#ifdef OP_KEY_U_ENABLED
	OP_KEY_U = OP_KEY_FIRST + 85,
#endif // OP_KEY_U_ENABLED
#ifdef OP_KEY_V_ENABLED
	OP_KEY_V = OP_KEY_FIRST + 86,
#endif // OP_KEY_V_ENABLED
#ifdef OP_KEY_W_ENABLED
	OP_KEY_W = OP_KEY_FIRST + 87,
#endif // OP_KEY_W_ENABLED
#ifdef OP_KEY_X_ENABLED
	OP_KEY_X = OP_KEY_FIRST + 88,
#endif // OP_KEY_X_ENABLED
#ifdef OP_KEY_Y_ENABLED
	OP_KEY_Y = OP_KEY_FIRST + 89,
#endif // OP_KEY_Y_ENABLED
#ifdef OP_KEY_Z_ENABLED
	OP_KEY_Z = OP_KEY_FIRST + 0x5a,
#endif // OP_KEY_Z_ENABLED
#ifdef OP_KEY_WINDOW_ENABLED
	OP_KEY_WINDOW = OP_KEY_FIRST + 0x5b,
#endif // OP_KEY_WINDOW_ENABLED
#ifdef OP_KEY_MAC_CTRL_ENABLED
	OP_KEY_MAC_CTRL = OP_KEY_FIRST + 0x5c,
#endif // OP_KEY_MAC_CTRL_ENABLED
#ifdef OP_KEY_CONTEXT_MENU_ENABLED
	OP_KEY_CONTEXT_MENU = OP_KEY_FIRST + 0x5d,
#endif // OP_KEY_CONTEXT_MENU_ENABLED
#ifdef OP_KEY_SLEEP_ENABLED
	OP_KEY_SLEEP = OP_KEY_FIRST + 0x5f,
#endif // OP_KEY_SLEEP_ENABLED
#ifdef OP_KEY_NUMPAD0_ENABLED
	OP_KEY_NUMPAD0 = OP_KEY_FIRST + 0x60,
#endif // OP_KEY_NUMPAD0_ENABLED
#ifdef OP_KEY_NUMPAD1_ENABLED
	OP_KEY_NUMPAD1 = OP_KEY_FIRST + 97,
#endif // OP_KEY_NUMPAD1_ENABLED
#ifdef OP_KEY_NUMPAD2_ENABLED
	OP_KEY_NUMPAD2 = OP_KEY_FIRST + 98,
#endif // OP_KEY_NUMPAD2_ENABLED
#ifdef OP_KEY_NUMPAD3_ENABLED
	OP_KEY_NUMPAD3 = OP_KEY_FIRST + 99,
#endif // OP_KEY_NUMPAD3_ENABLED
#ifdef OP_KEY_NUMPAD4_ENABLED
	OP_KEY_NUMPAD4 = OP_KEY_FIRST + 100,
#endif // OP_KEY_NUMPAD4_ENABLED
#ifdef OP_KEY_NUMPAD5_ENABLED
	OP_KEY_NUMPAD5 = OP_KEY_FIRST + 101,
#endif // OP_KEY_NUMPAD5_ENABLED
#ifdef OP_KEY_NUMPAD6_ENABLED
	OP_KEY_NUMPAD6 = OP_KEY_FIRST + 102,
#endif // OP_KEY_NUMPAD6_ENABLED
#ifdef OP_KEY_NUMPAD7_ENABLED
	OP_KEY_NUMPAD7 = OP_KEY_FIRST + 103,
#endif // OP_KEY_NUMPAD7_ENABLED
#ifdef OP_KEY_NUMPAD8_ENABLED
	OP_KEY_NUMPAD8 = OP_KEY_FIRST + 104,
#endif // OP_KEY_NUMPAD8_ENABLED
#ifdef OP_KEY_NUMPAD9_ENABLED
	OP_KEY_NUMPAD9 = OP_KEY_FIRST + 105,
#endif // OP_KEY_NUMPAD9_ENABLED
#ifdef OP_KEY_MULTIPLY_ENABLED
	OP_KEY_MULTIPLY = OP_KEY_FIRST + 106,
#endif // OP_KEY_MULTIPLY_ENABLED
#ifdef OP_KEY_ADD_ENABLED
	OP_KEY_ADD = OP_KEY_FIRST + 107,
#endif // OP_KEY_ADD_ENABLED
#ifdef OP_KEY_SEPARATOR_ENABLED
	OP_KEY_SEPARATOR = OP_KEY_FIRST + 108,
#endif // OP_KEY_SEPARATOR_ENABLED
#ifdef OP_KEY_SUBTRACT_ENABLED
	OP_KEY_SUBTRACT = OP_KEY_FIRST + 109,
#endif // OP_KEY_SUBTRACT_ENABLED
#ifdef OP_KEY_DECIMAL_ENABLED
	OP_KEY_DECIMAL = OP_KEY_FIRST + 110,
#endif // OP_KEY_DECIMAL_ENABLED
#ifdef OP_KEY_DIVIDE_ENABLED
	OP_KEY_DIVIDE = OP_KEY_FIRST + 111,
#endif // OP_KEY_DIVIDE_ENABLED
#ifdef OP_KEY_F1_ENABLED
	OP_KEY_F1 = OP_KEY_FIRST + 112,
#endif // OP_KEY_F1_ENABLED
#ifdef OP_KEY_F2_ENABLED
	OP_KEY_F2 = OP_KEY_FIRST + 113,
#endif // OP_KEY_F2_ENABLED
#ifdef OP_KEY_F3_ENABLED
	OP_KEY_F3 = OP_KEY_FIRST + 114,
#endif // OP_KEY_F3_ENABLED
#ifdef OP_KEY_F4_ENABLED
	OP_KEY_F4 = OP_KEY_FIRST + 115,
#endif // OP_KEY_F4_ENABLED
#ifdef OP_KEY_F5_ENABLED
	OP_KEY_F5 = OP_KEY_FIRST + 116,
#endif // OP_KEY_F5_ENABLED
#ifdef OP_KEY_F6_ENABLED
	OP_KEY_F6 = OP_KEY_FIRST + 117,
#endif // OP_KEY_F6_ENABLED
#ifdef OP_KEY_F7_ENABLED
	OP_KEY_F7 = OP_KEY_FIRST + 118,
#endif // OP_KEY_F7_ENABLED
#ifdef OP_KEY_F8_ENABLED
	OP_KEY_F8 = OP_KEY_FIRST + 119,
#endif // OP_KEY_F8_ENABLED
#ifdef OP_KEY_F9_ENABLED
	OP_KEY_F9 = OP_KEY_FIRST + 120,
#endif // OP_KEY_F9_ENABLED
#ifdef OP_KEY_F10_ENABLED
	OP_KEY_F10 = OP_KEY_FIRST + 121,
#endif // OP_KEY_F10_ENABLED
#ifdef OP_KEY_F11_ENABLED
	OP_KEY_F11 = OP_KEY_FIRST + 122,
#endif // OP_KEY_F11_ENABLED
#ifdef OP_KEY_F12_ENABLED
	OP_KEY_F12 = OP_KEY_FIRST + 123,
#endif // OP_KEY_F12_ENABLED
#ifdef OP_KEY_F13_ENABLED
	OP_KEY_F13 = OP_KEY_FIRST + 124,
#endif // OP_KEY_F13_ENABLED
#ifdef OP_KEY_F14_ENABLED
	OP_KEY_F14 = OP_KEY_FIRST + 125,
#endif // OP_KEY_F14_ENABLED
#ifdef OP_KEY_F15_ENABLED
	OP_KEY_F15 = OP_KEY_FIRST + 126,
#endif // OP_KEY_F15_ENABLED
#ifdef OP_KEY_F16_ENABLED
	OP_KEY_F16 = OP_KEY_FIRST + 127,
#endif // OP_KEY_F16_ENABLED
#ifdef OP_KEY_F17_ENABLED
	OP_KEY_F17 = OP_KEY_FIRST + 128,
#endif // OP_KEY_F17_ENABLED
#ifdef OP_KEY_F18_ENABLED
	OP_KEY_F18 = OP_KEY_FIRST + 129,
#endif // OP_KEY_F18_ENABLED
#ifdef OP_KEY_F19_ENABLED
	OP_KEY_F19 = OP_KEY_FIRST + 130,
#endif // OP_KEY_F19_ENABLED
#ifdef OP_KEY_F20_ENABLED
	OP_KEY_F20 = OP_KEY_FIRST + 131,
#endif // OP_KEY_F20_ENABLED
#ifdef OP_KEY_F21_ENABLED
	OP_KEY_F21 = OP_KEY_FIRST + 132,
#endif // OP_KEY_F21_ENABLED
#ifdef OP_KEY_F22_ENABLED
	OP_KEY_F22 = OP_KEY_FIRST + 133,
#endif // OP_KEY_F22_ENABLED
#ifdef OP_KEY_F23_ENABLED
	OP_KEY_F23 = OP_KEY_FIRST + 134,
#endif // OP_KEY_F23_ENABLED
#ifdef OP_KEY_F24_ENABLED
	OP_KEY_F24 = OP_KEY_FIRST + 0x87,
#endif // OP_KEY_F24_ENABLED
#ifdef OP_KEY_NUM_LOCK_ENABLED
	OP_KEY_NUM_LOCK = OP_KEY_FIRST + 0x90,
#endif // OP_KEY_NUM_LOCK_ENABLED
#ifdef OP_KEY_SCROLL_LOCK_ENABLED
	OP_KEY_SCROLL_LOCK = OP_KEY_FIRST + 145,
#endif // OP_KEY_SCROLL_LOCK_ENABLED
#ifdef OP_KEY_META_ENABLED
	OP_KEY_META = OP_KEY_FIRST + 0x97,
#endif // OP_KEY_META_ENABLED
#ifdef OP_KEY_OEM_1_ENABLED
	OP_KEY_OEM_1 = OP_KEY_FIRST + 0xba,
#endif // OP_KEY_OEM_1_ENABLED
#ifdef OP_KEY_OEM_1_ENABLED
	OP_KEY_SEMICOLON = OP_KEY_OEM_1,
#endif // OP_KEY_OEM_1_ENABLED
#ifdef OP_KEY_OEM_PLUS_ENABLED
	OP_KEY_OEM_PLUS = OP_KEY_FIRST + 187,
#endif // OP_KEY_OEM_PLUS_ENABLED
#ifdef OP_KEY_OEM_PLUS_ENABLED
	OP_KEY_PLUS = OP_KEY_OEM_PLUS,
#endif // OP_KEY_OEM_PLUS_ENABLED
#ifdef OP_KEY_OEM_COMMA_ENABLED
	OP_KEY_OEM_COMMA = OP_KEY_FIRST + 188,
#endif // OP_KEY_OEM_COMMA_ENABLED
#ifdef OP_KEY_OEM_COMMA_ENABLED
	OP_KEY_COMMA = OP_KEY_OEM_COMMA,
#endif // OP_KEY_OEM_COMMA_ENABLED
#ifdef OP_KEY_OEM_MINUS_ENABLED
	OP_KEY_OEM_MINUS = OP_KEY_FIRST + 189,
#endif // OP_KEY_OEM_MINUS_ENABLED
#ifdef OP_KEY_OEM_MINUS_ENABLED
	OP_KEY_MINUS = OP_KEY_OEM_MINUS,
#endif // OP_KEY_OEM_MINUS_ENABLED
#ifdef OP_KEY_OEM_PERIOD_ENABLED
	OP_KEY_OEM_PERIOD = OP_KEY_FIRST + 190,
#endif // OP_KEY_OEM_PERIOD_ENABLED
#ifdef OP_KEY_OEM_PERIOD_ENABLED
	OP_KEY_PERIOD = OP_KEY_OEM_PERIOD,
#endif // OP_KEY_OEM_PERIOD_ENABLED
#ifdef OP_KEY_OEM_2_ENABLED
	OP_KEY_OEM_2 = OP_KEY_FIRST + 191,
#endif // OP_KEY_OEM_2_ENABLED
#ifdef OP_KEY_OEM_2_ENABLED
	OP_KEY_SLASH = OP_KEY_OEM_2,
#endif // OP_KEY_OEM_2_ENABLED
#ifdef OP_KEY_OEM_3_ENABLED
	OP_KEY_OEM_3 = OP_KEY_FIRST + 0xc0,
#endif // OP_KEY_OEM_3_ENABLED
#ifdef OP_KEY_OEM_3_ENABLED
	OP_KEY_TICK = OP_KEY_OEM_3,
#endif // OP_KEY_OEM_3_ENABLED
#ifdef OP_KEY_OEM_4_ENABLED
	OP_KEY_OEM_4 = OP_KEY_FIRST + 0xdb,
#endif // OP_KEY_OEM_4_ENABLED
#ifdef OP_KEY_OEM_4_ENABLED
	OP_KEY_OPEN_BRACKET = OP_KEY_OEM_4,
#endif // OP_KEY_OEM_4_ENABLED
#ifdef OP_KEY_OEM_5_ENABLED
	OP_KEY_OEM_5 = OP_KEY_FIRST + 220,
#endif // OP_KEY_OEM_5_ENABLED
#ifdef OP_KEY_OEM_5_ENABLED
	OP_KEY_OPEN_BACKSLASH = OP_KEY_OEM_5,
#endif // OP_KEY_OEM_5_ENABLED
#ifdef OP_KEY_OEM_6_ENABLED
	OP_KEY_OEM_6 = OP_KEY_FIRST + 221,
#endif // OP_KEY_OEM_6_ENABLED
#ifdef OP_KEY_OEM_6_ENABLED
	OP_KEY_CLOSE_BRACKET = OP_KEY_OEM_6,
#endif // OP_KEY_OEM_6_ENABLED
#ifdef OP_KEY_OEM_7_ENABLED
	OP_KEY_OEM_7 = OP_KEY_FIRST + 222,
#endif // OP_KEY_OEM_7_ENABLED
#ifdef OP_KEY_OEM_7_ENABLED
	OP_KEY_QUOTE = OP_KEY_OEM_7,
#endif // OP_KEY_OEM_7_ENABLED
#ifdef OP_KEY_OEM_8_ENABLED
	OP_KEY_OEM_8 = OP_KEY_FIRST + 223,
#endif // OP_KEY_OEM_8_ENABLED
#ifdef OP_KEY_OEM_102_ENABLED
	OP_KEY_OEM_102 = OP_KEY_FIRST + 0xe2,
#endif // OP_KEY_OEM_102_ENABLED
#ifdef OP_KEY_PROCESSKEY_ENABLED
	OP_KEY_PROCESSKEY = OP_KEY_FIRST + 0xe5,
#endif // OP_KEY_PROCESSKEY_ENABLED
#ifdef OP_KEY_UNICODE_ENABLED
	OP_KEY_UNICODE = OP_KEY_FIRST + 0xe7,
#endif // OP_KEY_UNICODE_ENABLED
#ifdef OP_KEY_FIRST_EXTENDED_ENABLED
	OP_KEY_FIRST_EXTENDED = OP_KEY_FIRST + 0x100,
#endif // OP_KEY_FIRST_EXTENDED_ENABLED
#ifdef OP_KEY_FIRST_INTERNAL_ENABLED
	OP_KEY_FIRST_INTERNAL = OP_KEY_FIRST + 0x5fe0,
#endif // OP_KEY_FIRST_INTERNAL_ENABLED
#ifdef OP_KEY_MOUSE_BUTTON_1_ENABLED
	OP_KEY_MOUSE_BUTTON_1 = OP_KEY_FIRST + 24545,
#endif // OP_KEY_MOUSE_BUTTON_1_ENABLED
#ifdef OP_KEY_MOUSE_BUTTON_2_ENABLED
	OP_KEY_MOUSE_BUTTON_2 = OP_KEY_FIRST + 24546,
#endif // OP_KEY_MOUSE_BUTTON_2_ENABLED
#ifdef OP_KEY_MOUSE_BUTTON_3_ENABLED
	OP_KEY_MOUSE_BUTTON_3 = OP_KEY_FIRST + 24547,
#endif // OP_KEY_MOUSE_BUTTON_3_ENABLED
#ifdef OP_KEY_MOUSE_BUTTON_4_ENABLED
	OP_KEY_MOUSE_BUTTON_4 = OP_KEY_FIRST + 24548,
#endif // OP_KEY_MOUSE_BUTTON_4_ENABLED
#ifdef OP_KEY_MOUSE_BUTTON_5_ENABLED
	OP_KEY_MOUSE_BUTTON_5 = OP_KEY_FIRST + 24549,
#endif // OP_KEY_MOUSE_BUTTON_5_ENABLED
#ifdef OP_KEY_MOUSE_BUTTON_6_ENABLED
	OP_KEY_MOUSE_BUTTON_6 = OP_KEY_FIRST + 24550,
#endif // OP_KEY_MOUSE_BUTTON_6_ENABLED
#ifdef OP_KEY_MOUSE_BUTTON_7_ENABLED
	OP_KEY_MOUSE_BUTTON_7 = OP_KEY_FIRST + 24551,
#endif // OP_KEY_MOUSE_BUTTON_7_ENABLED
#ifdef OP_KEY_MOUSE_BUTTON_8_ENABLED
	OP_KEY_MOUSE_BUTTON_8 = OP_KEY_FIRST + 24552,
#endif // OP_KEY_MOUSE_BUTTON_8_ENABLED
#ifdef OP_KEY_MOUSE_BUTTON_9_ENABLED
	OP_KEY_MOUSE_BUTTON_9 = OP_KEY_FIRST + 24553,
#endif // OP_KEY_MOUSE_BUTTON_9_ENABLED
#ifdef OP_KEY_GESTURE_UP_ENABLED
	OP_KEY_GESTURE_UP = OP_KEY_FIRST + 24554,
#endif // OP_KEY_GESTURE_UP_ENABLED
#ifdef OP_KEY_GESTURE_RIGHT_ENABLED
	OP_KEY_GESTURE_RIGHT = OP_KEY_FIRST + 24555,
#endif // OP_KEY_GESTURE_RIGHT_ENABLED
#ifdef OP_KEY_GESTURE_DOWN_ENABLED
	OP_KEY_GESTURE_DOWN = OP_KEY_FIRST + 24556,
#endif // OP_KEY_GESTURE_DOWN_ENABLED
#ifdef OP_KEY_GESTURE_LEFT_ENABLED
	OP_KEY_GESTURE_LEFT = OP_KEY_FIRST + 24557,
#endif // OP_KEY_GESTURE_LEFT_ENABLED
#ifdef OP_KEY_GESTURE_UP_LEFT_ENABLED
	OP_KEY_GESTURE_UP_LEFT = OP_KEY_FIRST + 24558,
#endif // OP_KEY_GESTURE_UP_LEFT_ENABLED
#ifdef OP_KEY_GESTURE_UP_RIGHT_ENABLED
	OP_KEY_GESTURE_UP_RIGHT = OP_KEY_FIRST + 24559,
#endif // OP_KEY_GESTURE_UP_RIGHT_ENABLED
#ifdef OP_KEY_GESTURE_DOWN_LEFT_ENABLED
	OP_KEY_GESTURE_DOWN_LEFT = OP_KEY_FIRST + 24560,
#endif // OP_KEY_GESTURE_DOWN_LEFT_ENABLED
#ifdef OP_KEY_GESTURE_DOWN_RIGHT_ENABLED
	OP_KEY_GESTURE_DOWN_RIGHT = OP_KEY_FIRST + 24561,
#endif // OP_KEY_GESTURE_DOWN_RIGHT_ENABLED
#ifdef OP_KEY_FLIP_BACK_ENABLED
	OP_KEY_FLIP_BACK = OP_KEY_FIRST + 24562,
#endif // OP_KEY_FLIP_BACK_ENABLED
#ifdef OP_KEY_FLIP_FORWARD_ENABLED
	OP_KEY_FLIP_FORWARD = OP_KEY_FIRST + 24563,
#endif // OP_KEY_FLIP_FORWARD_ENABLED
#ifdef OP_KEY_LAST_INTERNAL_ENABLED
	OP_KEY_LAST_INTERNAL = OP_KEY_FIRST + 24564,
#endif // OP_KEY_LAST_INTERNAL_ENABLED
#ifdef OP_KEY_F25_ENABLED
	OP_KEY_F25 = OP_KEY_FIRST_EXTENDED + 19,
#endif // OP_KEY_F25_ENABLED
#ifdef OP_KEY_F26_ENABLED
	OP_KEY_F26 = OP_KEY_FIRST_EXTENDED + 20,
#endif // OP_KEY_F26_ENABLED
#ifdef OP_KEY_F27_ENABLED
	OP_KEY_F27 = OP_KEY_FIRST_EXTENDED + 21,
#endif // OP_KEY_F27_ENABLED
#ifdef OP_KEY_F28_ENABLED
	OP_KEY_F28 = OP_KEY_FIRST_EXTENDED + 22,
#endif // OP_KEY_F28_ENABLED
#ifdef OP_KEY_F29_ENABLED
	OP_KEY_F29 = OP_KEY_FIRST_EXTENDED + 23,
#endif // OP_KEY_F29_ENABLED
#ifdef OP_KEY_F30_ENABLED
	OP_KEY_F30 = OP_KEY_FIRST_EXTENDED + 24,
#endif // OP_KEY_F30_ENABLED
#ifdef OP_KEY_F31_ENABLED
	OP_KEY_F31 = OP_KEY_FIRST_EXTENDED + 25,
#endif // OP_KEY_F31_ENABLED
#ifdef OP_KEY_F32_ENABLED
	OP_KEY_F32 = OP_KEY_FIRST_EXTENDED + 26,
#endif // OP_KEY_F32_ENABLED
#ifdef OP_KEY_F33_ENABLED
	OP_KEY_F33 = OP_KEY_FIRST_EXTENDED + 27,
#endif // OP_KEY_F33_ENABLED
#ifdef OP_KEY_F34_ENABLED
	OP_KEY_F34 = OP_KEY_FIRST_EXTENDED + 28,
#endif // OP_KEY_F34_ENABLED
#ifdef OP_KEY_F35_ENABLED
	OP_KEY_F35 = OP_KEY_FIRST_EXTENDED + 29,
#endif // OP_KEY_F35_ENABLED
#ifdef OP_KEY_F36_ENABLED
	OP_KEY_F36 = OP_KEY_FIRST_EXTENDED + 30,
#endif // OP_KEY_F36_ENABLED
#ifdef OP_KEY_VOLUMEUP_ENABLED
	OP_KEY_VOLUMEUP = OP_KEY_FIRST_EXTENDED + 31,
#endif // OP_KEY_VOLUMEUP_ENABLED
#ifdef OP_KEY_VOLUMEDOWN_ENABLED
	OP_KEY_VOLUMEDOWN = OP_KEY_FIRST_EXTENDED + 32,
#endif // OP_KEY_VOLUMEDOWN_ENABLED
#ifdef OP_KEY_MENU_ENABLED
	OP_KEY_MENU = OP_KEY_FIRST_EXTENDED + 33,
#endif // OP_KEY_MENU_ENABLED
#ifdef OP_KEY_PLAY_ENABLED
	OP_KEY_PLAY = OP_KEY_FIRST_EXTENDED + 34,
#endif // OP_KEY_PLAY_ENABLED
#ifdef OP_KEY_NEXT_ENABLED
	OP_KEY_NEXT = OP_KEY_FIRST_EXTENDED + 35,
#endif // OP_KEY_NEXT_ENABLED
#ifdef OP_KEY_PREVIOUS_ENABLED
	OP_KEY_PREVIOUS = OP_KEY_FIRST_EXTENDED + 36,
#endif // OP_KEY_PREVIOUS_ENABLED
#ifdef OP_KEY_FASTFORWARD_ENABLED
	OP_KEY_FASTFORWARD = OP_KEY_FIRST_EXTENDED + 37,
#endif // OP_KEY_FASTFORWARD_ENABLED
#ifdef OP_KEY_REWIND_ENABLED
	OP_KEY_REWIND = OP_KEY_FIRST_EXTENDED + 38,
#endif // OP_KEY_REWIND_ENABLED
#ifdef OP_KEY_STOP_ENABLED
	OP_KEY_STOP = OP_KEY_FIRST_EXTENDED + 39,
#endif // OP_KEY_STOP_ENABLED
#ifdef OP_KEY_REDO_ENABLED
	OP_KEY_REDO = OP_KEY_FIRST_EXTENDED + 40,
#endif // OP_KEY_REDO_ENABLED
#ifdef OP_KEY_UNDO_ENABLED
	OP_KEY_UNDO = OP_KEY_FIRST_EXTENDED + 41,
#endif // OP_KEY_UNDO_ENABLED
#ifdef OP_KEY_PROPERITES_ENABLED
	OP_KEY_PROPERITES = OP_KEY_FIRST_EXTENDED + 42,
#endif // OP_KEY_PROPERITES_ENABLED
#ifdef OP_KEY_FRONT_ENABLED
	OP_KEY_FRONT = OP_KEY_FIRST_EXTENDED + 43,
#endif // OP_KEY_FRONT_ENABLED
#ifdef OP_KEY_LEFT_TAB_ENABLED
	OP_KEY_LEFT_TAB = OP_KEY_FIRST_EXTENDED + 44,
#endif // OP_KEY_LEFT_TAB_ENABLED
#ifdef OP_KEY_XF86XK_MON_BRIGHTNESS_UP_ENABLED
	OP_KEY_XF86XK_MON_BRIGHTNESS_UP = OP_KEY_FIRST_EXTENDED + 45,
#endif // OP_KEY_XF86XK_MON_BRIGHTNESS_UP_ENABLED
#ifdef OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN_ENABLED
	OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN = OP_KEY_FIRST_EXTENDED + 46,
#endif // OP_KEY_XF86XK_MON_BRIGHTNESS_DOWN_ENABLED
#ifdef OP_KEY_XF86XK_KBD_LIGHT_ON_OFF_ENABLED
	OP_KEY_XF86XK_KBD_LIGHT_ON_OFF = OP_KEY_FIRST_EXTENDED + 47,
#endif // OP_KEY_XF86XK_KBD_LIGHT_ON_OFF_ENABLED
#ifdef OP_KEY_XF86XK_KBD_BRIGHTNESS_UP_ENABLED
	OP_KEY_XF86XK_KBD_BRIGHTNESS_UP = OP_KEY_FIRST_EXTENDED + 48,
#endif // OP_KEY_XF86XK_KBD_BRIGHTNESS_UP_ENABLED
#ifdef OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN_ENABLED
	OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN = OP_KEY_FIRST_EXTENDED + 49,
#endif // OP_KEY_XF86XK_KBD_BRIGHTNESS_DOWN_ENABLED
#ifdef OP_KEY_XF86XK_STANDBY_ENABLED
	OP_KEY_XF86XK_STANDBY = OP_KEY_FIRST_EXTENDED + 50,
#endif // OP_KEY_XF86XK_STANDBY_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_LOWER_VOLUME_ENABLED
	OP_KEY_XF86XK_AUDIO_LOWER_VOLUME = OP_KEY_FIRST_EXTENDED + 51,
#endif // OP_KEY_XF86XK_AUDIO_LOWER_VOLUME_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_MUTE_ENABLED
	OP_KEY_XF86XK_AUDIO_MUTE = OP_KEY_FIRST_EXTENDED + 52,
#endif // OP_KEY_XF86XK_AUDIO_MUTE_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_RAISE_VOLUME_ENABLED
	OP_KEY_XF86XK_AUDIO_RAISE_VOLUME = OP_KEY_FIRST_EXTENDED + 53,
#endif // OP_KEY_XF86XK_AUDIO_RAISE_VOLUME_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_PLAY_ENABLED
	OP_KEY_XF86XK_AUDIO_PLAY = OP_KEY_FIRST_EXTENDED + 54,
#endif // OP_KEY_XF86XK_AUDIO_PLAY_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_STOP_ENABLED
	OP_KEY_XF86XK_AUDIO_STOP = OP_KEY_FIRST_EXTENDED + 55,
#endif // OP_KEY_XF86XK_AUDIO_STOP_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_PREV_ENABLED
	OP_KEY_XF86XK_AUDIO_PREV = OP_KEY_FIRST_EXTENDED + 56,
#endif // OP_KEY_XF86XK_AUDIO_PREV_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_NEXT_ENABLED
	OP_KEY_XF86XK_AUDIO_NEXT = OP_KEY_FIRST_EXTENDED + 57,
#endif // OP_KEY_XF86XK_AUDIO_NEXT_ENABLED
#ifdef OP_KEY_XF86XK_HOME_PAGE_ENABLED
	OP_KEY_XF86XK_HOME_PAGE = OP_KEY_FIRST_EXTENDED + 58,
#endif // OP_KEY_XF86XK_HOME_PAGE_ENABLED
#ifdef OP_KEY_XF86XK_MAIL_ENABLED
	OP_KEY_XF86XK_MAIL = OP_KEY_FIRST_EXTENDED + 59,
#endif // OP_KEY_XF86XK_MAIL_ENABLED
#ifdef OP_KEY_XF86XK_START_ENABLED
	OP_KEY_XF86XK_START = OP_KEY_FIRST_EXTENDED + 60,
#endif // OP_KEY_XF86XK_START_ENABLED
#ifdef OP_KEY_XF86XK_SEARCH_ENABLED
	OP_KEY_XF86XK_SEARCH = OP_KEY_FIRST_EXTENDED + 61,
#endif // OP_KEY_XF86XK_SEARCH_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_RECORD_ENABLED
	OP_KEY_XF86XK_AUDIO_RECORD = OP_KEY_FIRST_EXTENDED + 62,
#endif // OP_KEY_XF86XK_AUDIO_RECORD_ENABLED
#ifdef OP_KEY_XF86XK_CALCULATOR_ENABLED
	OP_KEY_XF86XK_CALCULATOR = OP_KEY_FIRST_EXTENDED + 63,
#endif // OP_KEY_XF86XK_CALCULATOR_ENABLED
#ifdef OP_KEY_XF86XK_MEMO_ENABLED
	OP_KEY_XF86XK_MEMO = OP_KEY_FIRST_EXTENDED + 64,
#endif // OP_KEY_XF86XK_MEMO_ENABLED
#ifdef OP_KEY_XF86XK_TO_DO_LIST_ENABLED
	OP_KEY_XF86XK_TO_DO_LIST = OP_KEY_FIRST_EXTENDED + 65,
#endif // OP_KEY_XF86XK_TO_DO_LIST_ENABLED
#ifdef OP_KEY_XF86XK_CALENDAR_ENABLED
	OP_KEY_XF86XK_CALENDAR = OP_KEY_FIRST_EXTENDED + 66,
#endif // OP_KEY_XF86XK_CALENDAR_ENABLED
#ifdef OP_KEY_XF86XK_POWER_DOWN_ENABLED
	OP_KEY_XF86XK_POWER_DOWN = OP_KEY_FIRST_EXTENDED + 67,
#endif // OP_KEY_XF86XK_POWER_DOWN_ENABLED
#ifdef OP_KEY_XF86XK_CONTRAST_ADJUST_ENABLED
	OP_KEY_XF86XK_CONTRAST_ADJUST = OP_KEY_FIRST_EXTENDED + 68,
#endif // OP_KEY_XF86XK_CONTRAST_ADJUST_ENABLED
#ifdef OP_KEY_XF86XK_ROCKER_UP_ENABLED
	OP_KEY_XF86XK_ROCKER_UP = OP_KEY_FIRST_EXTENDED + 69,
#endif // OP_KEY_XF86XK_ROCKER_UP_ENABLED
#ifdef OP_KEY_XF86XK_ROCKER_DOWN_ENABLED
	OP_KEY_XF86XK_ROCKER_DOWN = OP_KEY_FIRST_EXTENDED + 70,
#endif // OP_KEY_XF86XK_ROCKER_DOWN_ENABLED
#ifdef OP_KEY_XF86XK_ROCKER_ENTER_ENABLED
	OP_KEY_XF86XK_ROCKER_ENTER = OP_KEY_FIRST_EXTENDED + 71,
#endif // OP_KEY_XF86XK_ROCKER_ENTER_ENABLED
#ifdef OP_KEY_XF86XK_BACK_ENABLED
	OP_KEY_XF86XK_BACK = OP_KEY_FIRST_EXTENDED + 72,
#endif // OP_KEY_XF86XK_BACK_ENABLED
#ifdef OP_KEY_XF86XK_FORWARD_ENABLED
	OP_KEY_XF86XK_FORWARD = OP_KEY_FIRST_EXTENDED + 73,
#endif // OP_KEY_XF86XK_FORWARD_ENABLED
#ifdef OP_KEY_XF86XK_STOP_ENABLED
	OP_KEY_XF86XK_STOP = OP_KEY_FIRST_EXTENDED + 74,
#endif // OP_KEY_XF86XK_STOP_ENABLED
#ifdef OP_KEY_XF86XK_REFRESH_ENABLED
	OP_KEY_XF86XK_REFRESH = OP_KEY_FIRST_EXTENDED + 75,
#endif // OP_KEY_XF86XK_REFRESH_ENABLED
#ifdef OP_KEY_XF86XK_POWER_OFF_ENABLED
	OP_KEY_XF86XK_POWER_OFF = OP_KEY_FIRST_EXTENDED + 76,
#endif // OP_KEY_XF86XK_POWER_OFF_ENABLED
#ifdef OP_KEY_XF86XK_WAKE_UP_ENABLED
	OP_KEY_XF86XK_WAKE_UP = OP_KEY_FIRST_EXTENDED + 77,
#endif // OP_KEY_XF86XK_WAKE_UP_ENABLED
#ifdef OP_KEY_XF86XK_EJECT_ENABLED
	OP_KEY_XF86XK_EJECT = OP_KEY_FIRST_EXTENDED + 78,
#endif // OP_KEY_XF86XK_EJECT_ENABLED
#ifdef OP_KEY_XF86XK_SCREEN_SAVER_ENABLED
	OP_KEY_XF86XK_SCREEN_SAVER = OP_KEY_FIRST_EXTENDED + 79,
#endif // OP_KEY_XF86XK_SCREEN_SAVER_ENABLED
#ifdef OP_KEY_XF86XK_WWW_ENABLED
	OP_KEY_XF86XK_WWW = OP_KEY_FIRST_EXTENDED + 80,
#endif // OP_KEY_XF86XK_WWW_ENABLED
#ifdef OP_KEY_XF86XK_FAVORITES_ENABLED
	OP_KEY_XF86XK_FAVORITES = OP_KEY_FIRST_EXTENDED + 81,
#endif // OP_KEY_XF86XK_FAVORITES_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_PAUSE_ENABLED
	OP_KEY_XF86XK_AUDIO_PAUSE = OP_KEY_FIRST_EXTENDED + 82,
#endif // OP_KEY_XF86XK_AUDIO_PAUSE_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_MEDIA_ENABLED
	OP_KEY_XF86XK_AUDIO_MEDIA = OP_KEY_FIRST_EXTENDED + 83,
#endif // OP_KEY_XF86XK_AUDIO_MEDIA_ENABLED
#ifdef OP_KEY_XF86XK_MY_COMPUTER_ENABLED
	OP_KEY_XF86XK_MY_COMPUTER = OP_KEY_FIRST_EXTENDED + 84,
#endif // OP_KEY_XF86XK_MY_COMPUTER_ENABLED
#ifdef OP_KEY_XF86XK_VENDOR_HOME_ENABLED
	OP_KEY_XF86XK_VENDOR_HOME = OP_KEY_FIRST_EXTENDED + 85,
#endif // OP_KEY_XF86XK_VENDOR_HOME_ENABLED
#ifdef OP_KEY_XF86XK_LIGHT_BULB_ENABLED
	OP_KEY_XF86XK_LIGHT_BULB = OP_KEY_FIRST_EXTENDED + 86,
#endif // OP_KEY_XF86XK_LIGHT_BULB_ENABLED
#ifdef OP_KEY_XF86XK_SHOP_ENABLED
	OP_KEY_XF86XK_SHOP = OP_KEY_FIRST_EXTENDED + 87,
#endif // OP_KEY_XF86XK_SHOP_ENABLED
#ifdef OP_KEY_XF86XK_HISTORY_ENABLED
	OP_KEY_XF86XK_HISTORY = OP_KEY_FIRST_EXTENDED + 88,
#endif // OP_KEY_XF86XK_HISTORY_ENABLED
#ifdef OP_KEY_XF86XK_OPEN_URL_ENABLED
	OP_KEY_XF86XK_OPEN_URL = OP_KEY_FIRST_EXTENDED + 89,
#endif // OP_KEY_XF86XK_OPEN_URL_ENABLED
#ifdef OP_KEY_XF86XK_ADD_FAVORITE_ENABLED
	OP_KEY_XF86XK_ADD_FAVORITE = OP_KEY_FIRST_EXTENDED + 90,
#endif // OP_KEY_XF86XK_ADD_FAVORITE_ENABLED
#ifdef OP_KEY_XF86XK_HOT_LINKS_ENABLED
	OP_KEY_XF86XK_HOT_LINKS = OP_KEY_FIRST_EXTENDED + 91,
#endif // OP_KEY_XF86XK_HOT_LINKS_ENABLED
#ifdef OP_KEY_XF86XK_BRIGHTNESS_ADJUST_ENABLED
	OP_KEY_XF86XK_BRIGHTNESS_ADJUST = OP_KEY_FIRST_EXTENDED + 92,
#endif // OP_KEY_XF86XK_BRIGHTNESS_ADJUST_ENABLED
#ifdef OP_KEY_XF86XK_FINANCE_ENABLED
	OP_KEY_XF86XK_FINANCE = OP_KEY_FIRST_EXTENDED + 93,
#endif // OP_KEY_XF86XK_FINANCE_ENABLED
#ifdef OP_KEY_XF86XK_COMMUNITY_ENABLED
	OP_KEY_XF86XK_COMMUNITY = OP_KEY_FIRST_EXTENDED + 94,
#endif // OP_KEY_XF86XK_COMMUNITY_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_REWIND_ENABLED
	OP_KEY_XF86XK_AUDIO_REWIND = OP_KEY_FIRST_EXTENDED + 95,
#endif // OP_KEY_XF86XK_AUDIO_REWIND_ENABLED
#ifdef OP_KEY_XF86XK_BACK_FORWARD_ENABLED
	OP_KEY_XF86XK_BACK_FORWARD = OP_KEY_FIRST_EXTENDED + 96,
#endif // OP_KEY_XF86XK_BACK_FORWARD_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH0_ENABLED
	OP_KEY_XF86XK_LAUNCH0 = OP_KEY_FIRST_EXTENDED + 97,
#endif // OP_KEY_XF86XK_LAUNCH0_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH1_ENABLED
	OP_KEY_XF86XK_LAUNCH1 = OP_KEY_FIRST_EXTENDED + 98,
#endif // OP_KEY_XF86XK_LAUNCH1_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH2_ENABLED
	OP_KEY_XF86XK_LAUNCH2 = OP_KEY_FIRST_EXTENDED + 99,
#endif // OP_KEY_XF86XK_LAUNCH2_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH3_ENABLED
	OP_KEY_XF86XK_LAUNCH3 = OP_KEY_FIRST_EXTENDED + 100,
#endif // OP_KEY_XF86XK_LAUNCH3_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH4_ENABLED
	OP_KEY_XF86XK_LAUNCH4 = OP_KEY_FIRST_EXTENDED + 101,
#endif // OP_KEY_XF86XK_LAUNCH4_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH5_ENABLED
	OP_KEY_XF86XK_LAUNCH5 = OP_KEY_FIRST_EXTENDED + 102,
#endif // OP_KEY_XF86XK_LAUNCH5_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH6_ENABLED
	OP_KEY_XF86XK_LAUNCH6 = OP_KEY_FIRST_EXTENDED + 103,
#endif // OP_KEY_XF86XK_LAUNCH6_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH7_ENABLED
	OP_KEY_XF86XK_LAUNCH7 = OP_KEY_FIRST_EXTENDED + 104,
#endif // OP_KEY_XF86XK_LAUNCH7_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH8_ENABLED
	OP_KEY_XF86XK_LAUNCH8 = OP_KEY_FIRST_EXTENDED + 105,
#endif // OP_KEY_XF86XK_LAUNCH8_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH9_ENABLED
	OP_KEY_XF86XK_LAUNCH9 = OP_KEY_FIRST_EXTENDED + 106,
#endif // OP_KEY_XF86XK_LAUNCH9_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH_A_ENABLED
	OP_KEY_XF86XK_LAUNCH_A = OP_KEY_FIRST_EXTENDED + 107,
#endif // OP_KEY_XF86XK_LAUNCH_A_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH_B_ENABLED
	OP_KEY_XF86XK_LAUNCH_B = OP_KEY_FIRST_EXTENDED + 108,
#endif // OP_KEY_XF86XK_LAUNCH_B_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH_C_ENABLED
	OP_KEY_XF86XK_LAUNCH_C = OP_KEY_FIRST_EXTENDED + 109,
#endif // OP_KEY_XF86XK_LAUNCH_C_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH_D_ENABLED
	OP_KEY_XF86XK_LAUNCH_D = OP_KEY_FIRST_EXTENDED + 110,
#endif // OP_KEY_XF86XK_LAUNCH_D_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH_E_ENABLED
	OP_KEY_XF86XK_LAUNCH_E = OP_KEY_FIRST_EXTENDED + 111,
#endif // OP_KEY_XF86XK_LAUNCH_E_ENABLED
#ifdef OP_KEY_XF86XK_LAUNCH_F_ENABLED
	OP_KEY_XF86XK_LAUNCH_F = OP_KEY_FIRST_EXTENDED + 112,
#endif // OP_KEY_XF86XK_LAUNCH_F_ENABLED
#ifdef OP_KEY_XF86XK_APPLICATION_LEFT_ENABLED
	OP_KEY_XF86XK_APPLICATION_LEFT = OP_KEY_FIRST_EXTENDED + 113,
#endif // OP_KEY_XF86XK_APPLICATION_LEFT_ENABLED
#ifdef OP_KEY_XF86XK_APPLICATION_RIGHT_ENABLED
	OP_KEY_XF86XK_APPLICATION_RIGHT = OP_KEY_FIRST_EXTENDED + 114,
#endif // OP_KEY_XF86XK_APPLICATION_RIGHT_ENABLED
#ifdef OP_KEY_XF86XK_BOOK_ENABLED
	OP_KEY_XF86XK_BOOK = OP_KEY_FIRST_EXTENDED + 115,
#endif // OP_KEY_XF86XK_BOOK_ENABLED
#ifdef OP_KEY_XF86XK_CD_ENABLED
	OP_KEY_XF86XK_CD = OP_KEY_FIRST_EXTENDED + 116,
#endif // OP_KEY_XF86XK_CD_ENABLED
#ifdef OP_KEY_XF86XK_CLOSE_ENABLED
	OP_KEY_XF86XK_CLOSE = OP_KEY_FIRST_EXTENDED + 117,
#endif // OP_KEY_XF86XK_CLOSE_ENABLED
#ifdef OP_KEY_XF86XK_COPY_ENABLED
	OP_KEY_XF86XK_COPY = OP_KEY_FIRST_EXTENDED + 118,
#endif // OP_KEY_XF86XK_COPY_ENABLED
#ifdef OP_KEY_XF86XK_CUT_ENABLED
	OP_KEY_XF86XK_CUT = OP_KEY_FIRST_EXTENDED + 119,
#endif // OP_KEY_XF86XK_CUT_ENABLED
#ifdef OP_KEY_XF86XK_DISPLAY_ENABLED
	OP_KEY_XF86XK_DISPLAY = OP_KEY_FIRST_EXTENDED + 120,
#endif // OP_KEY_XF86XK_DISPLAY_ENABLED
#ifdef OP_KEY_XF86XK_DOS_ENABLED
	OP_KEY_XF86XK_DOS = OP_KEY_FIRST_EXTENDED + 121,
#endif // OP_KEY_XF86XK_DOS_ENABLED
#ifdef OP_KEY_XF86XK_DOCUMENTS_ENABLED
	OP_KEY_XF86XK_DOCUMENTS = OP_KEY_FIRST_EXTENDED + 122,
#endif // OP_KEY_XF86XK_DOCUMENTS_ENABLED
#ifdef OP_KEY_XF86XK_EXCEL_ENABLED
	OP_KEY_XF86XK_EXCEL = OP_KEY_FIRST_EXTENDED + 123,
#endif // OP_KEY_XF86XK_EXCEL_ENABLED
#ifdef OP_KEY_XF86XK_EXPLORER_ENABLED
	OP_KEY_XF86XK_EXPLORER = OP_KEY_FIRST_EXTENDED + 124,
#endif // OP_KEY_XF86XK_EXPLORER_ENABLED
#ifdef OP_KEY_XF86XK_GAME_ENABLED
	OP_KEY_XF86XK_GAME = OP_KEY_FIRST_EXTENDED + 125,
#endif // OP_KEY_XF86XK_GAME_ENABLED
#ifdef OP_KEY_XF86XK_GO_ENABLED
	OP_KEY_XF86XK_GO = OP_KEY_FIRST_EXTENDED + 126,
#endif // OP_KEY_XF86XK_GO_ENABLED
#ifdef OP_KEY_XF86XK_I_TOUCH_ENABLED
	OP_KEY_XF86XK_I_TOUCH = OP_KEY_FIRST_EXTENDED + 127,
#endif // OP_KEY_XF86XK_I_TOUCH_ENABLED
#ifdef OP_KEY_XF86XK_LOG_OFF_ENABLED
	OP_KEY_XF86XK_LOG_OFF = OP_KEY_FIRST_EXTENDED + 128,
#endif // OP_KEY_XF86XK_LOG_OFF_ENABLED
#ifdef OP_KEY_XF86XK_MARKET_ENABLED
	OP_KEY_XF86XK_MARKET = OP_KEY_FIRST_EXTENDED + 129,
#endif // OP_KEY_XF86XK_MARKET_ENABLED
#ifdef OP_KEY_XF86XK_MEETING_ENABLED
	OP_KEY_XF86XK_MEETING = OP_KEY_FIRST_EXTENDED + 130,
#endif // OP_KEY_XF86XK_MEETING_ENABLED
#ifdef OP_KEY_XF86XK_MENU_KB_ENABLED
	OP_KEY_XF86XK_MENU_KB = OP_KEY_FIRST_EXTENDED + 131,
#endif // OP_KEY_XF86XK_MENU_KB_ENABLED
#ifdef OP_KEY_XF86XK_MENU_PB_ENABLED
	OP_KEY_XF86XK_MENU_PB = OP_KEY_FIRST_EXTENDED + 132,
#endif // OP_KEY_XF86XK_MENU_PB_ENABLED
#ifdef OP_KEY_XF86XK_MY_SITES_ENABLED
	OP_KEY_XF86XK_MY_SITES = OP_KEY_FIRST_EXTENDED + 133,
#endif // OP_KEY_XF86XK_MY_SITES_ENABLED
#ifdef OP_KEY_XF86XK_NEW_ENABLED
	OP_KEY_XF86XK_NEW = OP_KEY_FIRST_EXTENDED + 134,
#endif // OP_KEY_XF86XK_NEW_ENABLED
#ifdef OP_KEY_XF86XK_NEWS_ENABLED
	OP_KEY_XF86XK_NEWS = OP_KEY_FIRST_EXTENDED + 135,
#endif // OP_KEY_XF86XK_NEWS_ENABLED
#ifdef OP_KEY_XF86XK_OFFICE_HOME_ENABLED
	OP_KEY_XF86XK_OFFICE_HOME = OP_KEY_FIRST_EXTENDED + 136,
#endif // OP_KEY_XF86XK_OFFICE_HOME_ENABLED
#ifdef OP_KEY_XF86XK_OPEN_ENABLED
	OP_KEY_XF86XK_OPEN = OP_KEY_FIRST_EXTENDED + 137,
#endif // OP_KEY_XF86XK_OPEN_ENABLED
#ifdef OP_KEY_XF86XK_OPTION_ENABLED
	OP_KEY_XF86XK_OPTION = OP_KEY_FIRST_EXTENDED + 138,
#endif // OP_KEY_XF86XK_OPTION_ENABLED
#ifdef OP_KEY_XF86XK_PASTE_ENABLED
	OP_KEY_XF86XK_PASTE = OP_KEY_FIRST_EXTENDED + 139,
#endif // OP_KEY_XF86XK_PASTE_ENABLED
#ifdef OP_KEY_XF86XK_PHONE_ENABLED
	OP_KEY_XF86XK_PHONE = OP_KEY_FIRST_EXTENDED + 140,
#endif // OP_KEY_XF86XK_PHONE_ENABLED
#ifdef OP_KEY_XF86XK_REPLY_ENABLED
	OP_KEY_XF86XK_REPLY = OP_KEY_FIRST_EXTENDED + 141,
#endif // OP_KEY_XF86XK_REPLY_ENABLED
#ifdef OP_KEY_XF86XK_RELOAD_ENABLED
	OP_KEY_XF86XK_RELOAD = OP_KEY_FIRST_EXTENDED + 142,
#endif // OP_KEY_XF86XK_RELOAD_ENABLED
#ifdef OP_KEY_XF86XK_ROTATE_WINDOWS_ENABLED
	OP_KEY_XF86XK_ROTATE_WINDOWS = OP_KEY_FIRST_EXTENDED + 143,
#endif // OP_KEY_XF86XK_ROTATE_WINDOWS_ENABLED
#ifdef OP_KEY_XF86XK_ROTATION_PB_ENABLED
	OP_KEY_XF86XK_ROTATION_PB = OP_KEY_FIRST_EXTENDED + 144,
#endif // OP_KEY_XF86XK_ROTATION_PB_ENABLED
#ifdef OP_KEY_XF86XK_ROTATION_KB_ENABLED
	OP_KEY_XF86XK_ROTATION_KB = OP_KEY_FIRST_EXTENDED + 145,
#endif // OP_KEY_XF86XK_ROTATION_KB_ENABLED
#ifdef OP_KEY_XF86XK_SAVE_ENABLED
	OP_KEY_XF86XK_SAVE = OP_KEY_FIRST_EXTENDED + 146,
#endif // OP_KEY_XF86XK_SAVE_ENABLED
#ifdef OP_KEY_XF86XK_SCROLL_UP_ENABLED
	OP_KEY_XF86XK_SCROLL_UP = OP_KEY_FIRST_EXTENDED + 147,
#endif // OP_KEY_XF86XK_SCROLL_UP_ENABLED
#ifdef OP_KEY_XF86XK_SCROLL_DOWN_ENABLED
	OP_KEY_XF86XK_SCROLL_DOWN = OP_KEY_FIRST_EXTENDED + 148,
#endif // OP_KEY_XF86XK_SCROLL_DOWN_ENABLED
#ifdef OP_KEY_XF86XK_SCROLL_CLICK_ENABLED
	OP_KEY_XF86XK_SCROLL_CLICK = OP_KEY_FIRST_EXTENDED + 149,
#endif // OP_KEY_XF86XK_SCROLL_CLICK_ENABLED
#ifdef OP_KEY_XF86XK_SEND_ENABLED
	OP_KEY_XF86XK_SEND = OP_KEY_FIRST_EXTENDED + 150,
#endif // OP_KEY_XF86XK_SEND_ENABLED
#ifdef OP_KEY_XF86XK_SPELL_ENABLED
	OP_KEY_XF86XK_SPELL = OP_KEY_FIRST_EXTENDED + 151,
#endif // OP_KEY_XF86XK_SPELL_ENABLED
#ifdef OP_KEY_XF86XK_SPLIT_SCREEN_ENABLED
	OP_KEY_XF86XK_SPLIT_SCREEN = OP_KEY_FIRST_EXTENDED + 152,
#endif // OP_KEY_XF86XK_SPLIT_SCREEN_ENABLED
#ifdef OP_KEY_XF86XK_SUPPORT_ENABLED
	OP_KEY_XF86XK_SUPPORT = OP_KEY_FIRST_EXTENDED + 153,
#endif // OP_KEY_XF86XK_SUPPORT_ENABLED
#ifdef OP_KEY_XF86XK_TASK_PANE_ENABLED
	OP_KEY_XF86XK_TASK_PANE = OP_KEY_FIRST_EXTENDED + 154,
#endif // OP_KEY_XF86XK_TASK_PANE_ENABLED
#ifdef OP_KEY_XF86XK_TERMINAL_ENABLED
	OP_KEY_XF86XK_TERMINAL = OP_KEY_FIRST_EXTENDED + 155,
#endif // OP_KEY_XF86XK_TERMINAL_ENABLED
#ifdef OP_KEY_XF86XK_TOOLS_ENABLED
	OP_KEY_XF86XK_TOOLS = OP_KEY_FIRST_EXTENDED + 156,
#endif // OP_KEY_XF86XK_TOOLS_ENABLED
#ifdef OP_KEY_XF86XK_TRAVEL_ENABLED
	OP_KEY_XF86XK_TRAVEL = OP_KEY_FIRST_EXTENDED + 157,
#endif // OP_KEY_XF86XK_TRAVEL_ENABLED
#ifdef OP_KEY_XF86XK_USER_PB_ENABLED
	OP_KEY_XF86XK_USER_PB = OP_KEY_FIRST_EXTENDED + 158,
#endif // OP_KEY_XF86XK_USER_PB_ENABLED
#ifdef OP_KEY_XF86XK_USER1KB_ENABLED
	OP_KEY_XF86XK_USER1KB = OP_KEY_FIRST_EXTENDED + 159,
#endif // OP_KEY_XF86XK_USER1KB_ENABLED
#ifdef OP_KEY_XF86XK_USER2KB_ENABLED
	OP_KEY_XF86XK_USER2KB = OP_KEY_FIRST_EXTENDED + 160,
#endif // OP_KEY_XF86XK_USER2KB_ENABLED
#ifdef OP_KEY_XF86XK_VIDEO_ENABLED
	OP_KEY_XF86XK_VIDEO = OP_KEY_FIRST_EXTENDED + 161,
#endif // OP_KEY_XF86XK_VIDEO_ENABLED
#ifdef OP_KEY_XF86XK_WHEEL_BUTTON_ENABLED
	OP_KEY_XF86XK_WHEEL_BUTTON = OP_KEY_FIRST_EXTENDED + 162,
#endif // OP_KEY_XF86XK_WHEEL_BUTTON_ENABLED
#ifdef OP_KEY_XF86XK_WORD_ENABLED
	OP_KEY_XF86XK_WORD = OP_KEY_FIRST_EXTENDED + 163,
#endif // OP_KEY_XF86XK_WORD_ENABLED
#ifdef OP_KEY_XF86XK_XFER_ENABLED
	OP_KEY_XF86XK_XFER = OP_KEY_FIRST_EXTENDED + 164,
#endif // OP_KEY_XF86XK_XFER_ENABLED
#ifdef OP_KEY_XF86XK_ZOOM_IN_ENABLED
	OP_KEY_XF86XK_ZOOM_IN = OP_KEY_FIRST_EXTENDED + 165,
#endif // OP_KEY_XF86XK_ZOOM_IN_ENABLED
#ifdef OP_KEY_XF86XK_ZOOM_OUT_ENABLED
	OP_KEY_XF86XK_ZOOM_OUT = OP_KEY_FIRST_EXTENDED + 166,
#endif // OP_KEY_XF86XK_ZOOM_OUT_ENABLED
#ifdef OP_KEY_XF86XK_AWAY_ENABLED
	OP_KEY_XF86XK_AWAY = OP_KEY_FIRST_EXTENDED + 167,
#endif // OP_KEY_XF86XK_AWAY_ENABLED
#ifdef OP_KEY_XF86XK_MESSENGER_ENABLED
	OP_KEY_XF86XK_MESSENGER = OP_KEY_FIRST_EXTENDED + 168,
#endif // OP_KEY_XF86XK_MESSENGER_ENABLED
#ifdef OP_KEY_XF86XK_WEB_CAM_ENABLED
	OP_KEY_XF86XK_WEB_CAM = OP_KEY_FIRST_EXTENDED + 169,
#endif // OP_KEY_XF86XK_WEB_CAM_ENABLED
#ifdef OP_KEY_XF86XK_MAIL_FORWARD_ENABLED
	OP_KEY_XF86XK_MAIL_FORWARD = OP_KEY_FIRST_EXTENDED + 170,
#endif // OP_KEY_XF86XK_MAIL_FORWARD_ENABLED
#ifdef OP_KEY_XF86XK_PICTURES_ENABLED
	OP_KEY_XF86XK_PICTURES = OP_KEY_FIRST_EXTENDED + 171,
#endif // OP_KEY_XF86XK_PICTURES_ENABLED
#ifdef OP_KEY_XF86XK_MUSIC_ENABLED
	OP_KEY_XF86XK_MUSIC = OP_KEY_FIRST_EXTENDED + 172,
#endif // OP_KEY_XF86XK_MUSIC_ENABLED
#ifdef OP_KEY_XF86XK_BATTERY_ENABLED
	OP_KEY_XF86XK_BATTERY = OP_KEY_FIRST_EXTENDED + 173,
#endif // OP_KEY_XF86XK_BATTERY_ENABLED
#ifdef OP_KEY_XF86XK_BLUETOOTH_ENABLED
	OP_KEY_XF86XK_BLUETOOTH = OP_KEY_FIRST_EXTENDED + 174,
#endif // OP_KEY_XF86XK_BLUETOOTH_ENABLED
#ifdef OP_KEY_XF86XK_WLAN_ENABLED
	OP_KEY_XF86XK_WLAN = OP_KEY_FIRST_EXTENDED + 175,
#endif // OP_KEY_XF86XK_WLAN_ENABLED
#ifdef OP_KEY_XF86XK_UWB_ENABLED
	OP_KEY_XF86XK_UWB = OP_KEY_FIRST_EXTENDED + 176,
#endif // OP_KEY_XF86XK_UWB_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_FORWARD_ENABLED
	OP_KEY_XF86XK_AUDIO_FORWARD = OP_KEY_FIRST_EXTENDED + 177,
#endif // OP_KEY_XF86XK_AUDIO_FORWARD_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_REPEAT_ENABLED
	OP_KEY_XF86XK_AUDIO_REPEAT = OP_KEY_FIRST_EXTENDED + 178,
#endif // OP_KEY_XF86XK_AUDIO_REPEAT_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_RANDOM_PLAY_ENABLED
	OP_KEY_XF86XK_AUDIO_RANDOM_PLAY = OP_KEY_FIRST_EXTENDED + 179,
#endif // OP_KEY_XF86XK_AUDIO_RANDOM_PLAY_ENABLED
#ifdef OP_KEY_XF86XK_SUBTITLE_ENABLED
	OP_KEY_XF86XK_SUBTITLE = OP_KEY_FIRST_EXTENDED + 180,
#endif // OP_KEY_XF86XK_SUBTITLE_ENABLED
#ifdef OP_KEY_XF86XK_AUDIO_CYCLE_TRACK_ENABLED
	OP_KEY_XF86XK_AUDIO_CYCLE_TRACK = OP_KEY_FIRST_EXTENDED + 181,
#endif // OP_KEY_XF86XK_AUDIO_CYCLE_TRACK_ENABLED
#ifdef OP_KEY_XF86XK_CYCLE_ANGLE_ENABLED
	OP_KEY_XF86XK_CYCLE_ANGLE = OP_KEY_FIRST_EXTENDED + 182,
#endif // OP_KEY_XF86XK_CYCLE_ANGLE_ENABLED
#ifdef OP_KEY_XF86XK_FRAME_BACK_ENABLED
	OP_KEY_XF86XK_FRAME_BACK = OP_KEY_FIRST_EXTENDED + 183,
#endif // OP_KEY_XF86XK_FRAME_BACK_ENABLED
#ifdef OP_KEY_XF86XK_FRAME_FORWARD_ENABLED
	OP_KEY_XF86XK_FRAME_FORWARD = OP_KEY_FIRST_EXTENDED + 184,
#endif // OP_KEY_XF86XK_FRAME_FORWARD_ENABLED
#ifdef OP_KEY_XF86XK_TIME_ENABLED
	OP_KEY_XF86XK_TIME = OP_KEY_FIRST_EXTENDED + 185,
#endif // OP_KEY_XF86XK_TIME_ENABLED
#ifdef OP_KEY_XF86XK_VIEW_ENABLED
	OP_KEY_XF86XK_VIEW = OP_KEY_FIRST_EXTENDED + 186,
#endif // OP_KEY_XF86XK_VIEW_ENABLED
#ifdef OP_KEY_XF86XK_TOP_MENU_ENABLED
	OP_KEY_XF86XK_TOP_MENU = OP_KEY_FIRST_EXTENDED + 187,
#endif // OP_KEY_XF86XK_TOP_MENU_ENABLED
#ifdef OP_KEY_XF86XK_RED_ENABLED
	OP_KEY_XF86XK_RED = OP_KEY_FIRST_EXTENDED + 188,
#endif // OP_KEY_XF86XK_RED_ENABLED
#ifdef OP_KEY_XF86XK_GREEN_ENABLED
	OP_KEY_XF86XK_GREEN = OP_KEY_FIRST_EXTENDED + 189,
#endif // OP_KEY_XF86XK_GREEN_ENABLED
#ifdef OP_KEY_XF86XK_YELLOW_ENABLED
	OP_KEY_XF86XK_YELLOW = OP_KEY_FIRST_EXTENDED + 190,
#endif // OP_KEY_XF86XK_YELLOW_ENABLED
#ifdef OP_KEY_XF86XK_BLUE_ENABLED
	OP_KEY_XF86XK_BLUE = OP_KEY_FIRST_EXTENDED + 191,
#endif // OP_KEY_XF86XK_BLUE_ENABLED
#ifdef OP_KEY_XF86XK_SUSPEND_ENABLED
	OP_KEY_XF86XK_SUSPEND = OP_KEY_FIRST_EXTENDED + 192,
#endif // OP_KEY_XF86XK_SUSPEND_ENABLED
#ifdef OP_KEY_XF86XK_HIBERNATE_ENABLED
	OP_KEY_XF86XK_HIBERNATE = OP_KEY_FIRST_EXTENDED + 193,
#endif // OP_KEY_XF86XK_HIBERNATE_ENABLED
#ifdef OP_KEY_MAC_CTRL_LEFT_ENABLED
	OP_KEY_MAC_CTRL_LEFT = OP_KEY_FIRST + 0x5b,
#endif // OP_KEY_MAC_CTRL_LEFT_ENABLED
#ifdef OP_KEY_MAC_CTRL_RIGHT_ENABLED
	OP_KEY_MAC_CTRL_RIGHT = OP_KEY_FIRST + 0x5d,
#endif // OP_KEY_MAC_CTRL_RIGHT_ENABLED
#ifdef OP_KEY_SWIPE_UP_ENABLED
	OP_KEY_SWIPE_UP = OP_KEY_FIRST_EXTENDED + 94,
#endif // OP_KEY_SWIPE_UP_ENABLED
#ifdef OP_KEY_SWIPE_DOWN_ENABLED
	OP_KEY_SWIPE_DOWN = OP_KEY_FIRST_EXTENDED + 95,
#endif // OP_KEY_SWIPE_DOWN_ENABLED
#ifdef OP_KEY_SWIPE_LEFT_ENABLED
	OP_KEY_SWIPE_LEFT = OP_KEY_FIRST_EXTENDED + 96,
#endif // OP_KEY_SWIPE_LEFT_ENABLED
#ifdef OP_KEY_SWIPE_RIGHT_ENABLED
	OP_KEY_SWIPE_RIGHT = OP_KEY_FIRST_EXTENDED + 97,
#endif // OP_KEY_SWIPE_RIGHT_ENABLED
#ifdef OP_KEY_BACK_ENABLED
	OP_KEY_BACK = OP_KEY_FIRST_EXTENDED + 194,
#endif // OP_KEY_BACK_ENABLED
#ifdef OP_KEY_CONTEXT1_ENABLED
	OP_KEY_CONTEXT1 = OP_KEY_FIRST_EXTENDED + 195,
#endif // OP_KEY_CONTEXT1_ENABLED
#ifdef OP_KEY_CONTEXT2_ENABLED
	OP_KEY_CONTEXT2 = OP_KEY_FIRST_EXTENDED + 196,
#endif // OP_KEY_CONTEXT2_ENABLED
#ifdef OP_KEY_CONTEXT3_ENABLED
	OP_KEY_CONTEXT3 = OP_KEY_FIRST_EXTENDED + 197,
#endif // OP_KEY_CONTEXT3_ENABLED
#ifdef OP_KEY_CONTEXT4_ENABLED
	OP_KEY_CONTEXT4 = OP_KEY_FIRST_EXTENDED + 198,
#endif // OP_KEY_CONTEXT4_ENABLED
#ifdef OP_KEY_YES_ENABLED
	OP_KEY_YES = OP_KEY_FIRST_EXTENDED + 199,
#endif // OP_KEY_YES_ENABLED
#ifdef OP_KEY_NO_ENABLED
	OP_KEY_NO = OP_KEY_FIRST_EXTENDED + 200,
#endif // OP_KEY_NO_ENABLED
#ifdef OP_KEY_CALL_ENABLED
	OP_KEY_CALL = OP_KEY_FIRST_EXTENDED + 201,
#endif // OP_KEY_CALL_ENABLED
#ifdef OP_KEY_HANGUP_ENABLED
	OP_KEY_HANGUP = OP_KEY_FIRST_EXTENDED + 202,
#endif // OP_KEY_HANGUP_ENABLED
#ifdef OP_KEY_HK_TOGGLE_ENABLED
	OP_KEY_HK_TOGGLE = OP_KEY_FIRST + 0xF2,
#endif // OP_KEY_HK_TOGGLE_ENABLED
#ifdef OP_KEY_KATAKANA_ENABLED
	OP_KEY_KATAKANA = OP_KEY_FIRST + 0x0103,
#endif // OP_KEY_KATAKANA_ENABLED
#ifdef OP_KEY_HIRAGANA_ENABLED
	OP_KEY_HIRAGANA = OP_KEY_FIRST + 0x0104,
#endif // OP_KEY_HIRAGANA_ENABLED
#ifdef OP_KEY_CHANNELDOWN_ENABLED
	OP_KEY_CHANNELDOWN = OP_KEY_FIRST_EXTENDED + 194,
#endif // OP_KEY_CHANNELDOWN_ENABLED
#ifdef OP_KEY_CHANNELUP_ENABLED
	OP_KEY_CHANNELUP = OP_KEY_FIRST_EXTENDED + 195,
#endif // OP_KEY_CHANNELUP_ENABLED
#ifdef OP_KEY_MUTE_ENABLED
	OP_KEY_MUTE = OP_KEY_FIRST_EXTENDED + 196,
#endif // OP_KEY_MUTE_ENABLED
#ifdef OP_KEY_RECORD_ENABLED
	OP_KEY_RECORD = OP_KEY_FIRST_EXTENDED + 197,
#endif // OP_KEY_RECORD_ENABLED
	OP_KEY_LAST_EXTENDED = OP_KEY_FIRST_EXTENDED + 203,

	OP_KEY_FIRST_INTERNAL_EXTENDED = OP_KEY_FIRST + 0x3500,

#if defined _WML_SUPPORT_ && defined ACCESS_KEYS_SUPPORT
	OP_KEY_FIRST_DO_UNSPECIFIED,
	OP_KEY_LAST_DO_UNSPECIFIED = OP_KEY_FIRST_DO_UNSPECIFIED + 0x1ff,
#endif // _WML_SUPPORT_ && ACCESS_KEYS_SUPPORT

	OP_KEY_LAST_INTERNAL_EXTENDED
	/**< Last key of internally-allocated key ranges. These
	     ranges are kept for legacy and are not exposed via
	     the key system. */
};

/** Valid key predicate.
 *
 *  The input manager will verify that injected key events do
 *  use key codes that are valid and ignore attempts to
 *  inject keys outside the recognized ranges.
 *
 *  Four blocks of keys:
 *    - the predefined keys: [OP_KEY_FIRST, OP_KEY_FIRST_EXTENDED)
 *    - the extended keys:   [OP_KEY_FIRST_EXTENDED, OP_KEY_LAST_EXTENDED)
 *    - the internal keys:   [OP_KEY_FIRST_INTERNAL, OP_KEY_LAST_INTERNAL)
 *    - the pre-allocated, internal ranges:   [OP_KEY_FIRST_INTERNAL_EXTENDED, OP_KEY_LAST_INTERNAL_EXTENDED)
 *      (Voice, WML)
 */
#define IS_OP_KEY(key) \
  (key >= OP_KEY_FIRST && key < OP_KEY_FIRST_EXTENDED || \
   key >= OP_KEY_FIRST_EXTENDED && key < OP_KEY_LAST_EXTENDED || \
   key >= OP_KEY_FIRST_INTERNAL && key < OP_KEY_LAST_INTERNAL || \
   key >= OP_KEY_FIRST_INTERNAL_EXTENDED && key < OP_KEY_LAST_INTERNAL_EXTENDED)

#define IS_OP_KEY_MODIFIER(key) (OpKey::IsModifier(key))
#define IS_OP_KEY_FLIP(key) (OpKey::IsFlip(key))
#ifdef MOUSE_SUPPORT
#define IS_OP_KEY_MOUSE_BUTTON(key) (OpKey::IsMouseButton(key))
#else // MOUSE_SUPPORT
#define IS_OP_KEY_MOUSE_BUTTON(key) (FALSE)
#endif // MOUSE_SUPPORT
#define IS_OP_KEY_GESTURE(key) (OpKey::IsGesture(key))

/**
 * Opera virtual keys.
 *
 * The OpKey class defines a type (OpKey::Code) representing virtual keycodes,
 * along with operations for mapping from these unique key identifiers and
 * their key labels.
 *
 * The implementation of these operations is derived from the effective key
 * system for your build; see modules/hardcore/keys/README.txt.
 *
 * Mouse buttons, gestures are also handled by way of virtual keycodes.
 */
class OpKey
{
public:
	typedef OpVirtualKey Code;

	static const uni_char *ToString(OpKey::Code key);
	/**< Return the key name associated with 'code', or NULL
	     if unknown. */

	static OpKey::Code FromString(const uni_char *str);
	/**< For the given key name, return its key code. The key names
	     are exactly those defined by the key system configuration,
	     no default translation from some assumed keyboard configuration
	     to a key code.

	     If an unknown name, a key value of OP_KEY_FIRST is returned. */

	static OpKey::Code FromASCIIToKeyCode(char ch, ShiftKeyState &modifiers);
	/**< Map the US-ASCII character 'ch' to the virtual key and shift key state
	     required to produce it on a keyboard with a US layout.

	     If 'ch' is not in the recognized range, OP_KEY_FIRST is returned.
	     Only to be used in controlled circumstances when you do know that a
	     key is produced with a keyboard having a US keyboard layout. */

	static BOOL IsInValueSet(OpKey::Code key);
	/**< Returns TRUE if the virtual key's mapped key name (as specified
	     through the key system configuration files) is the key's
	     character value. e.g., for a key like OP_KEY_SHIFT, it would
	     be TRUE; for OP_KEY_A, it would be FALSE.

	     See hardcore/documentation/module.keys.txt for instructions on
	     how to map a key into the "value set". */

	static uni_char CharValue(OpKey::Code key);
	/**< Return the explicit character value mapped to the given key.
	     The character value is used when mapping a key's DOM event to
	     its corresponding 'charCode', and is normally derived from the
	     character value actually produced by the key. If the key
	     doesn't produce a character value, or some other value needs
	     to be reported, an explicit character value may be supplied
	     via the key system. That is the value returned by this
	     method.

	     If no explicit character value associated with the key, returns
	     0. */

	static BOOL IsModifier(OpKey::Code key);
	/**< Returns TRUE if the virtual key represents a modifier/shift key. */

	static BOOL IsFunctionKey(OpKey::Code key);
	/**< Returns TRUE if the virtual key represents a "function" key. The
	     notion of "function" key is wider than the row of keys found
	     above the standard area on a western keyboard; any key that
	     don't produce a character value (but whose primary purpose is
	     to act as a function key, to quote DOM Level3.) */

#ifdef MOUSE_SUPPORT
	static BOOL IsMouseButton(OpKey::Code key);
	/**< Returns TRUE if the virtual key represents a mouse button. */
#endif // MOUSE_SUPPORT

	static BOOL IsGesture(OpKey::Code key);
	/**< Returns TRUE if the virtual key represents a gesture. */

	static BOOL IsFlip(OpKey::Code key);
	/**< Returns TRUE if the virtual key is a flip key. */

	/** Enumeration giving some information about where
	    the key is located. DOM Level3 Events wants to know,
	    and is used to disambiguate keyboard keys with
	    same virtual key but appearing at multiple positions
	    (e.g., left and right Shift.) */
	enum Location
	{
		LOCATION_STANDARD = 0,
		LOCATION_LEFT,
		LOCATION_RIGHT,
		LOCATION_NUMPAD,
		LOCATION_MOBILE,
		LOCATION_JOYSTICK
	};

	static Location ToLocation(OpKey::Code key);
	/** Return where the virtual key is situated. If an unknown
	    key code, returns LOCATION_STANDARD. */
};

#endif // !OPKEY_AUTO_H
