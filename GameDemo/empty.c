#include "interface.h"

//��ʼ����Ϸ
int initGame() {
	SDL_Log("initGame()");
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
