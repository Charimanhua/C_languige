#include"func.h"
//����һ��m*n����
Pm Matcreate_1() {
	printf("��������������������:>\n");
	int row, col;
	int ret = scanf("%d %d", &row, &col);
	if (row <= 0 || col <= 0) {
		printf("�Ƿ��������У�����ʧ��!\n");
		return;
	}
	if (ans >= maxcap) {
		printf("��������,����ʧ��!\n");
		return;
	}
	//�ڶ��������ڴ洴������
	Pm tmp = (Pm)malloc(sizeof(Matrix));
	if (tmp == NULL) {
		//�ж��Ƿ�����ɹ�
		return;
	}
	tmp->col = col;
	tmp->row = row;
	//tmp->cont��һ��double**����,ָ��row��double*����
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
	printf("������%d*%d����Ԫ��:>\n", row, col);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			int ret = scanf("%lf", &(tmp->cont[i][j]));
		}
	}
	printf("\n------�����ɹ�-----\n");
	return tmp;
}
