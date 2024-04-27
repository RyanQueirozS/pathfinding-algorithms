#pragma once

#include <raylib.h>
#include "../lib/utils.hh"

struct Cell {
    Vector2 position;
    int width;
    int height;
};

class Engine {
   public:
    void Run(Vector2);

   private:
    void ResizeGrid();
    void DrawGrid();

   private:
    Grid<Cell> grid;
    Vector2 screenSpec;
    const Vector2 cells = Vector2{50, 30};  // NOTE: will be changed
};
