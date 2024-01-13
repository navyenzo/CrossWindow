#pragma once

#include <vector>

#include "Event.h"

#ifdef XWIN_WIN32
#include "../Win32/Win32EventQueue.h"
#elif defined(XWIN_UWP)
#include "../UWP/UWPEventQueue.h"
#elif defined(XWIN_COCOA)
#include "../Cocoa/CocoaEventQueue.h"
#elif defined(XWIN_XCB)
#include "../XCB/XCBEventQueue.h"
#elif defined(XWIN_XLIB)
#include "../XLib/XLibEventQueue.h"
#elif defined(XWIN_ANDROID)
#include "../Android/AndroidEventQueue.h"
#elif defined(XWIN_UIKIT)
#include "../UIKit/UIKitEventQueue.h"
#elif defined(XWIN_WASM)
#include "../WASM/WASMEventQueue.h"
#elif defined(XWIN_NOOP)
#include "../Noop/NoopEventQueue.h"
#endif
