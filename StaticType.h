#define _CRT_SECURE_NO_WARNINGS
#ifndef _SATICTYPE_H_

#define _SATICTYPE_H_

//��������ݴ洢�ṹ
typedef struct Matrix {
	//��������������
	int row;
	int col;
	//�洢����ľ���Ԫ��
	double** cont;
}Matrix, * Pm;

//������������
#define maxcap 1005
Pm matrcont[maxcap];
int ans; //ͳ�ƾ������

#endif
