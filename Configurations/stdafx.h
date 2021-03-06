////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2015 Putta Khunchalee
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
////////////////////////////////////////////////////////////////////////////////
#pragma once

// Compilation Controlling Header Files:

#include "targetver.h"

// Windows Header Files:

#define WIN32_LEAN_AND_MEAN

#include <windows.h>

#include <olectl.h>
#include <xmllite.h>

// ATL & WTL Header Files:

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS
#define _ATL_FREE_THREADED
#define _WTL_NO_CSTRING
#define _WTL_NO_WTYPES

#include <atlbase.h>
#include <atlstr.h>
#include <atltypes.h>
#include <atlcoll.h>
#include <atlapp.h>

extern CServerAppModule _Module;

#include <atlmisc.h>
