#pragma once

#include<Windows.h>
#include"SDL.h"

#define TITLE_MAX_LEN 512
//�û���������
typedef struct UserModule {
	char title[TITLE_MAX_LEN];		//�ӿڱ���
	SIZE winSize;					//�ӿڴ�С
	Uint32 style;					//�ӿ���ʽ
}UserModule;

//��� -> ��Ϸ
typedef struct SystemModule {
	SDL_Window* window;				//�ӿ�
	SDL_Renderer* renderer;			//��Ⱦ
}SystemModule;


//��ʼ����Ϸ
// < 0 ,��ʼ��ʧ�ܣ����ֱ���˳�; = 0 ����������
int initGame(UserModule* pModule);

//����ʼ��
void uninitGame(const SystemModule* pModule);

//��Դ����
int loadGameResource(const SystemModule* pModule);

//�¼���Ӧ
void processGameEvent(const SDL_Event* event);

//��Ϸ���º���(д��)
// < 0 ,�˳�; = 0 �� ����;
int updateGame(const SystemModule* pModule);

//��Ϸ��Ⱦ����(ֻ��)
void renderGame(const SystemModule* pModule);
