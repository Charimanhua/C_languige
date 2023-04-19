#define _CRT_SECURE_NO_WARNINGS
#ifndef _SATICTYPE_H_

#define _SATICTYPE_H_

//矩阵的数据存储结构
typedef struct Matrix {
	//定义矩阵的行与列
	int row;
	int col;
	//存储矩阵的具体元素
	double** cont;
}Matrix, * Pm;

//矩阵的最大容量
#define maxcap 1005
Pm matrcont[maxcap];
int ans; //统计矩阵个数

#endif
