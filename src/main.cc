#include <stdlib.h>

#include "../include/engine.hh"

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;
    float screen_width = 600;
    float screen_height = 400;
    if (argc > 2) {
        screen_width = strtol(argv[1], NULL, 10);
        screen_height = strtol(argv[2], NULL, 10);
    }
    Engine engine{};
    engine.Run(Vector2{screen_width, screen_height});
}
