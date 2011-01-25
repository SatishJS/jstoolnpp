//this file a header file of JSMinNpp
//Copyright (C) 2010-2010 Sun Junwen
//
//This program is free software; you can redistribute it and/or
//modify it under the terms of the GNU General Public License
//as published by the Free Software Foundation; either
//version 2 of the License, or (at your option) any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along with this program; if not, write to the Free Software
//Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

#ifndef NPP_TOOLS_H
#define NPP_TOOLS_H

#include "resource.h"

//#define IDD_ABOUTBOX 250
//
//#ifndef IDC_STATIC 
//#define IDC_STATIC -1
//#endif

const int nbFunc = 7;

HINSTANCE _hInst;
NppData nppData;
FuncItem funcItem[nbFunc];

bool bLoadedOption;

bool bPutCR; // 是否输出 \r\n
char chIndent; // 缩进用的字符
int nChPerInd; // 每个缩进使用几个字符

void jsMinCurrent();
void jsMinNew();
void jsMin(bool bNewFile = false);
void jsFormat();

void checkUpdate();
void about();

#endif //NPP_TOOLS_H
