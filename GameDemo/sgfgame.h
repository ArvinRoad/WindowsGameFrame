#pragma once

typedef struct SystemModule SystemModule;

//��ʼ����Ϸģ��
SystemModule* initGameModule();

//������Ϸ�ӿ�ѭ��
void runGame(SystemModule*);