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
void uninitGame(const SystemModule* pModule) {
	SDL_Log("uninitGame()");
}

//资源加载
int loadGameResource(const SystemModule* pModule) {
	SDL_Log("loadGameResource()");
	return 0;
}

//事件响应
void processGameEvent(const SDL_Event* event) {
	SDL_Log("processGameEvent() %d",event->type);
}

//游戏更新函数(写入)
int updateGame(const SystemModule* pModule) {
	SDL_Log("updateGame()");
	return 0;
}

//游戏渲染函数(只读)
void renderGame(const SystemModule* pModule) {
	SDL_Rect rt = { 10,10,200,200 };
	SDL_SetRenderDrawColor(pModule->renderer, 255, 0, 0, 0);
	SDL_RenderDrawRect(pModule->renderer, &rt);
	SDL_SetRenderDrawColor(pModule->renderer, 0, 0, 0, 0);
	SDL_Log("renderGame()");
}
