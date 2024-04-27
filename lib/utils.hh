#pragma once

#include <raylib.h>
#include <vector>

template <class T>
using Grid = std::vector<std::vector<T>>;

const Color BACKGROUND_COLOR = Color{
    .r = 20,
    .g = 20,
    .b = 20,
    .a = 255,
};
const Color FOREGROUND_COLOR = Color{
    .r = 50,
    .g = 50,
    .b = 50,
    .a = 255,
};
