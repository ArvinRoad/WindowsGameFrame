#pragma once

//��ʼ����Ϸ
// < 0 ,��ʼ��ʧ�ܣ����ֱ���˳�; = 0 ����������
int initGame();

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
