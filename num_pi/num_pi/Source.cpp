//pi=4(1-1/3+1/5-1/7....直到某一项的绝对值小于1e-6为止
//deno:分母，sign：符号位，//sum：和,term:整个分数
//注意要保持数据类型的一致性！！！
#include<stdio.h>
#include<math.h>
//#include<conio.h>
#include<stdlib.h>
int main()
{
	double sum=0.0;
	double deno = 1.0;
	int sign = 1;
	double term = 1.0;
	while (fabs(term) >= 1e-6){
		sum += term;
		deno += 2;
		sign = -sign;
		term = sign / deno;
	}
	sum = sum * 4.0;
	printf("pi=%10.8f\n",sum);	
	system("pause");
	return 0;
}     
