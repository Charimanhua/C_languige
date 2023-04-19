#define _CRT_SECURE_NO_WARNINGS
#include"func.h"

//¿ªÊ¼Ê±¼ä:04-19--13:46
int main() {
	Pm a = Matcreate_1();
	printf("Êä³öÈçÏÂ:>\n");
	for (int i = 0; i < a->row; i++) {
		for (int j = 0; j < a->row; j++) {
			printf("%lf ", a->cont[i][j]);
		}
		printf("\n");
	}
	printf("ahhaha");
	return 0;
} 
