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
	int ret = initGameModule();
	if (ret < 0) {
		return -1;
	}

	//‘›Õ£3√Î
	SDL_Delay(3000);

	uninitGameModule();

	return 0;
}