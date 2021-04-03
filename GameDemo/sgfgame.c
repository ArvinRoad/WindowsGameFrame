#include"sgfgame.h"
#include"interface.h"


static void uninitGameModule(SystemModule* sys){
	uninitGame();

	if (sys != NULL && sys->renderer) {
		SDL_DestroyRenderer(sys->renderer);
		sys->renderer = NULL;
	}
	if(sys != NULL && sys->window){
		SDL_DestroyWindow(sys->window);
		sys->window = NULL;
	}
	
	SDL_Quit();

	if (sys) {
		free(sys);
		sys = NULL;
	}
}

SystemModule* initGameModule() {
	SystemModule* pSys = malloc(sizeof(SystemModule));
	if (!pSys) {
		SDL_Log("malloc failed!");
		return NULL;
	}

	UserModule userGame = { 0 };

	if (initGame(&userGame) < 0) {
		uninitGame();
		return NULL;
	}

	SDL_Init(SDL_INIT_EVERYTHING);
	pSys->window = SDL_CreateWindow(
		userGame.title,
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		userGame.winSize.cx,
		userGame.winSize.cy,
		userGame.style
	);
	if (!pSys->window) {
		return NULL;
	}

	pSys->renderer = SDL_CreateRenderer(pSys->window, -1, SDL_RENDERER_ACCELERATED);
	if (!pSys->renderer) {
		uninitGame();
		return NULL;
	}

	if (loadGameResource() < 0) {
		uninitGame();
		return NULL;
	}
	return pSys;
}

void runGame(SystemModule* sys) {
	SDL_Event event;
	while (1) {
		if (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				break;
			}
			else {
				processGameEvent(&event);
			}
		}
		else{
			//¸üÐÂ
			if (updateGame() < 0)
				break;

			//ÓÎÏ·äÖÈ¾
			SDL_RenderClear(sys->renderer);
			renderGame(sys);
			SDL_RenderPresent(sys->renderer);

		}
	}
	uninitGameModule(sys);
}