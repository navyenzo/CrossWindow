#pragma once

#ifdef XWIN_WIN32
#include "../Win32/Win32Window.h"
#elif defined(XWIN_UWP)
#include "../UWP/UWPWindow.h"
#elif defined(XWIN_COCOA)
#include "../Cocoa/CocoaWindow.h"
#elif defined(XWIN_XCB)
#include "../XCB/XCBWindow.h"
#elif defined(XWIN_XLIB)
#include "../XLib/XLibWindow.h"
#elif defined(XWIN_ANDROID)
#include "../Android/AndroidWindow.h"
#elif defined(XWIN_UIKIT)
#include "../UIKit/UIKitWindow.h"
#elif defined(XWIN_WASM)
#include "../WASM/WASMWindow.h"
#elif defined(XWIN_NOOP)
#include "../Noop/NoopWindow.h"
#endif

#include <memory>

namespace xwin
{
typedef std::shared_ptr<Window> WindowPtr;
typedef std::weak_ptr<Window> WindowWeakPtr;
}

