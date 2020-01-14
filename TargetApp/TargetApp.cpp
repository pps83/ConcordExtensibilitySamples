// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

// TargetApp.cpp : Example application which will be debuggeed

#include <iostream>
#include <windows.h>
#include "../../../src/symbol.h"

int wmain(int argc, WCHAR* argv[])
{
    Symbol2 sym2_spy("spy");
    Symbol2 sym2_nylda("NYLD.A");
    Symbol2 sym2_unknown;

    __debugbreak(); // program will stop here. Evaluate 'sym2_spy', 'sym2_nylda' and 'sym2_unknown' in the locals or watch window.
    std::cout << "Test complete\n";

    return 0;
}
