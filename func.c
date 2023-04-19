#include"func.h"
//创建一个m*n矩阵
Pm Matcreate_1() {
	printf("请输入矩阵的行数与列数:>\n");
	int row, col;
	int ret = scanf("%d %d", &row, &col);
	if (row <= 0 || col <= 0) {
		printf("非法的行与列，创建失败!\n");
		return;
	}
	if (ans >= maxcap) {
		printf("容量不足,创建失败!\n");
		return;
	}
	//在堆区申请内存创建矩阵
	Pm tmp = (Pm)malloc(sizeof(Matrix));
	if (tmp == NULL) {
		//判断是否申请成功
		return;
	}
	tmp->col = col;
	tmp->row = row;
	//tmp->cont是一个double**类型,指向row个double*数组
	tmp->cont = (double**)malloc(row * sizeof(double*));
	if (tmp->cont == NULL) {
		return;
	}
	for (int i = 0; i < row; i++) {
		tmp->cont[i] = (double*)malloc(col * sizeof(double));
		if (tmp->cont[i] == NULL) {
			return;
		}
	}
	printf("请输入%d*%d矩阵元素:>\n", row, col);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			int ret = scanf("%lf", &(tmp->cont[i][j]));
		}
	}
	printf("\n------创建成功-----\n");
	return tmp;
}
