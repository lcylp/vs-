//��һ�У�3+1+3���ڶ��У�2+3+2��������1+5+1�������У�0+7+0��������=������:1+5+1��������=�ڶ���:2+3+2��������=��һ��3+1+3
#include<stdio.h>
#include<stdlib.h>
int main(){
	for (int i = 1; i <= 7; i = i + 2){
		for (int j = 1; j <= 7; j++){
			if (j <= (7 - i) / 2){
				printf(" ");
			}
			else if (j > (7 - i) / 2 && j <= i + (7 - i) / 2){
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
		for (int i = 5; i >=1; i = i -2){
			for (int j = 1; j <= 7; j++){
				if (j <= (7 - i) / 2){
					printf(" ");
				}
				else if (j>(7 - i) / 2 && j <= i + (7 - i) / 2){
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
	}
	system("pause");
	return 0;
}