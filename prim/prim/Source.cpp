//判断一个数是否为素数
#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("%d", '*');
	int num;
	scanf_s("%d", &num);
	int i;
	int i_max;
	if (num % 2 == 0){
		i_max = num / 2;
	}
	else{
		i_max = (num + 1) / 2;
	}
	for (i = 2; i <= i_max; i++){
		if (num % i == 0){
			printf("%d not prime!", num);
			break;
		}
		else{
			if (i == i_max){
				printf("%d is prime!", num);
				
			}
		}
	}
	system("pause");

	return 0;
}