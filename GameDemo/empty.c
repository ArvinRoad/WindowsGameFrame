#include "interface.h"

#define GAME_WIN_NAME "Empty Game"

//初始化游戏
int initGame(UserModule* pModule) {
	if (pModule) {
		strcpy_s(pModule->title, strlen(GAME_WIN_NAME) + 1, GAME_WIN_NAME);
		pModule->winSize.cx = 400;
		pModule->winSize.cy = 300;
		pModule->style = SDL_WINDOW_RESIZABLE;
	}
	return 0;
}

//反初始化
void uninitGame() {
	SDL_Log("uninitGame()");
}

//资源加载
int loadGameResource() {
	SDL_Log("loadGameResource()");
	return 0;
}

//事件响应
void processGameEvent() {
	SDL_Log("processGameEvent()");
}

//游戏更新函数(写入)
int updateGame() {
	SDL_Log("updateGame()");
	return 0;
}

//游戏渲染函数(只读)
void renderGame() {
	SDL_Log("renderGame()");
}
