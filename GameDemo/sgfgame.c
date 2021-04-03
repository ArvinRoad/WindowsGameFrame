#include"sgfgame.h"
#include"SDL.h"
#include<Windows.h>

SDL_Window* window = NULL;

void uninitGameModule(){
	SDL_DestroyWindow(window);
	SDL_Quit();
}

int initGameModule() {
	SDL_Init(SDL_INIT_EVERYTHING);
	window = SDL_CreateWindow(
		"An SDL2 window",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		640,
		480,
		SDL_WINDOW_OPENGL
	);
	if (!window) {
		return -1;
	}
	return 0;
}
