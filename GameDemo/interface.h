#pragma once

#include<Windows.h>
#include"SDL.h"

#define TITLE_MAX_LEN 512
//用户输入数据
typedef struct UserModule {
	char title[TITLE_MAX_LEN];		//视口标题
	SIZE winSize;					//视口大小
	Uint32 style;					//视口样式
}UserModule;


//初始化游戏
// < 0 ,初始化失败，框架直接退出; = 0 ，继续运行
int initGame(UserModule* pModule);

//反初始化
void uninitGame();

//资源加载
int loadGameResource();

//事件响应
void processGameEvent();

//游戏更新函数(写入)
// < 0 ,退出; = 0 ， 继续;
int updateGame();

//游戏渲染函数(只读)
void renderGame();
