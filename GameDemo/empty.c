#include "interface.h"

//初始化游戏
int initGame() {
	SDL_Log("initGame()");
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
