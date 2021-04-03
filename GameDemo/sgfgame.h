#pragma once

typedef struct SystemModule SystemModule;

//初始化游戏模块
SystemModule* initGameModule();

//运行游戏视口循环
void runGame(SystemModule*);