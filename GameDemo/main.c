#include<Windows.h>
#include<SDL.h>

#include"libs.h"
#include"sgfgame.h"

int WINAPI WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow
) 
{
	//≥ı ºªØ”Œœ∑øÚº‹
	SystemModule* pModule =  initGameModule();
	if (!pModule) {
		return -1;
	}

	//‘›Õ£3√Î SDL_Delay(3000);

	runGame(pModule);

	return 0;
}