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
	//��ʼ����Ϸ���
	int ret = initGameModule();
	if (ret < 0) {
		return -1;
	}

	//��ͣ3��
	SDL_Delay(3000);

	uninitGameModule();

	return 0;
}