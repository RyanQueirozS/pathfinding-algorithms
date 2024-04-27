#include <raylib.h>
#include <stdbool.h>

#include "../include/engine.hh"

void Engine::Run(Vector2 screenSpec) {
    this->screenSpec = screenSpec;
    // SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(screenSpec.x, screenSpec.y, "Pathfinder");
    ResizeGrid();

    SetTargetFPS(60);
    SetWindowPosition(0, 0);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(BACKGROUND_COLOR);
        DrawGrid();

        EndDrawing();
    }
    CloseWindow();
}

void Engine::ResizeGrid() {
    grid.resize(cells.y);
    for (int i = 0; i < grid.size(); ++i) {
        grid[i].resize(cells.x);
    }
}

void Engine::DrawGrid() {
    screenSpec.x = GetScreenWidth();
    screenSpec.y = GetScreenHeight();

    Cell cell = Cell{
        .width = int(screenSpec.x / cells.x),
        .height = int(screenSpec.y / cells.y)};

    for (int y = 0; y < screenSpec.y; y += cell.height) {
        for (int x = 0; x < screenSpec.x; x += cell.width) {
            DrawRectangle(x, y, cell.width * 0.9, cell.height * 0.9, FOREGROUND_COLOR);
        }
    }
}
