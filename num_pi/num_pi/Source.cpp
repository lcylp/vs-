//pi=4(1-1/3+1/5-1/7....ֱ��ĳһ��ľ���ֵС��1e-6Ϊֹ
//deno:��ĸ��sign������λ��//sum����,term:��������
//ע��Ҫ�����������͵�һ���ԣ�����
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
