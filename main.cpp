#include <SDL.h>
#include <iostream>

int main(int argc, char* argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL không thể khởi tạo! SDL Error: " << SDL_GetError() << std::endl;
        return -1;
    }

    SDL_Quit();
    return 0;
}
