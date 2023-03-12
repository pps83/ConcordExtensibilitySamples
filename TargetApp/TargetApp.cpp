// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

// TargetApp.cpp : Example application which will be debuggeed

#include <iostream>
#include <windows.h>
#include "../../../src/symbol.h"

int wmain(int argc, WCHAR* argv[])
{
    Symbol0* sym2_spy0 = new Symbol0("spy");
    Symbol0 sym2_nylda0("NYLD.A");
    Symbol0 sym2_unknown0;

    Symbol1* sym2_spy1 = new Symbol1("spy");
    Symbol1 sym2_nylda1("NYLD.A");
    Symbol1 sym2_unknown1;

    Symbol2* sym2_spy2 = new Symbol2("spy");
    Symbol2 sym2_nylda2("NYLD.A");
    Symbol2 sym2_unknown2;

    std::vector<Symbol0> syms0 = { Symbol0("SPY"), Symbol0("aapl") };
    std::vector<Symbol1> syms1 = { Symbol1("SPY"), Symbol1("aapl") };
    std::vector<Symbol2> syms2 = { Symbol2("SPY"), Symbol2("aapl") };

    __debugbreak(); // program will stop here. Evaluate 'sym2_spy', 'sym2_nylda' and 'sym2_unknown' in the locals or watch window.
    std::cout << "Test complete\n";

    return 0;
}
