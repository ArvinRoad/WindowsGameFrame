#include"sgfgame.h"
#include"interface.h"

SDL_Window* window = NULL;

void uninitGameModule(){
	SDL_DestroyWindow(window);
	SDL_Quit();

	uninitGame();
}

int initGameModule() {

	UserModule userGame = { 0 };

	if (initGame(&userGame) < 0) {
		uninitGame();
		return -1;
	}

	SDL_Init(SDL_INIT_EVERYTHING);
	window = SDL_CreateWindow(
		userGame.title,
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		userGame.winSize.cx,
		userGame.winSize.cy,
		userGame.style
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