#include "interface.h"

#define GAME_WIN_NAME "Empty Game"

//��ʼ����Ϸ
int initGame(UserModule* pModule) {
	if (pModule) {
		strcpy_s(pModule->title, strlen(GAME_WIN_NAME) + 1, GAME_WIN_NAME);
		pModule->winSize.cx = 400;
		pModule->winSize.cy = 300;
		pModule->style = SDL_WINDOW_RESIZABLE;
	}
	return 0;
}

//����ʼ��
void uninitGame() {
	SDL_Log("uninitGame()");
}

//��Դ����
int loadGameResource() {
	SDL_Log("loadGameResource()");
	return 0;
}

//�¼���Ӧ
void processGameEvent() {
	SDL_Log("processGameEvent()");
}

//��Ϸ���º���(д��)
int updateGame() {
	SDL_Log("updateGame()");
	return 0;
}

//��Ϸ��Ⱦ����(ֻ��)
void renderGame() {
	SDL_Log("renderGame()");
}
