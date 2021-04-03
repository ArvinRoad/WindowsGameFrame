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


//��ʼ����Ϸ
// < 0 ,��ʼ��ʧ�ܣ����ֱ���˳�; = 0 ����������
int initGame(UserModule* pModule);

//����ʼ��
void uninitGame();

//��Դ����
int loadGameResource();

//�¼���Ӧ
void processGameEvent();

//��Ϸ���º���(д��)
// < 0 ,�˳�; = 0 �� ����;
int updateGame();

//��Ϸ��Ⱦ����(ֻ��)
void renderGame();
