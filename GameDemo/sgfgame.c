#include"sgfgame.h"
#include"SDL.h"
#include<Windows.h>
#include"interface.h"

SDL_Window* window = NULL;

void uninitGameModule(){
	SDL_DestroyWindow(window);
	SDL_Quit();

	uninitGame();
}

int initGameModule() {

	if (initGame() < 0) {
		uninitGame();
		return -1;
	}

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

void runGame() {
	SDL_Event event;
	while (1) {
		if (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				break;
			}
			else {
				//TODO

			}
		}
		else{
			//TODO
		}
	}
	uninitGameModule();
}