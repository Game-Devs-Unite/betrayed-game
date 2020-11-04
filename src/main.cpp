#include <SDL2/SDL.h>
#include "IO/IO.h"
#include <cstdio>

int main(int argc, char **argv) {

  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    printf("ERROR: could notta initialize SDL.\n");
    return -1;
  }

  SDL_Window *w =
      SDL_CreateWindow("Hello SDL", SDL_WINDOWPOS_CENTERED,
                       SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_VULKAN);

  if (!w) {
    printf("ERROR: could not create SDL window\n");
    return -1;
  }

  bool quit = false;
  SDL_Event e;
  while (!quit) {
    while (SDL_PollEvent(&e)) {
      if (e.type == SDL_QUIT)
        quit = true;
    }
  }

  return 0;
}
