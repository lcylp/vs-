//二维数组行列互换
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
	int b[3][2];
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++){
			b[j][i] = a[i][j];
		}
//		printf("\n");
	}
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 2; j++){
			printf("%d", b[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}