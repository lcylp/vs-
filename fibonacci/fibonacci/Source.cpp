//fibonacci数列：F1=1，F2=1，Fn=F（n-1）+F(n-2)
//有一对兔子，从出生后第三个月起每个月都生一对兔子。小兔子长到第三个月后又生一对兔子，假设所有兔子都不死，问每个月的兔子总数为多少？
//思路：循环输出每个月的兔子数量
#include<stdio.h>
#include<stdlib.h>
int main(){
	int f1 = 1, f2 = 1, f3;
	printf("%10d\n%10d\n", f1, f2);
	for (int i = 0; i <= 40; i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		printf("%10d\n",f3);
	}
	system("pause");
	return 0;
}

