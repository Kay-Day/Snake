#include <SDL.h>
#include <iostream>

int main() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        return 1;
    }
    SDL_Quit();
    std::cout << "SDL Initialized Successfully!" << std::endl;
    return 0;
}
