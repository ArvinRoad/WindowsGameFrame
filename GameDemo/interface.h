#pragma once

//初始化游戏
// < 0 ,初始化失败，框架直接退出; = 0 ，继续运行
int initGame();

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
