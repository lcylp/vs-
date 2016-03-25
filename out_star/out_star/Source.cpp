//第一行：3+1+3，第二行：2+3+2，第三行1+5+1，第四行：0+7+0，第五行=第三行:1+5+1，第六行=第二行:2+3+2，第七行=第一行3+1+3
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