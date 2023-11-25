#pragma once

#include <iostream>
#include "Sort.h"
#include "Sort.cpp"
#include "Fill.h"
#include "Fill.cpp"

using std::cin;
using std::cout;
using std::endl;

enum class FillType
{
    Random = 1,
    Upward,
    Downward,
};

enum class SortType
{
    Choice = 1,
    Swap,
};
