//fibonacci���У�F1=1��F2=1��Fn=F��n-1��+F(n-2)
//��һ�����ӣ��ӳ��������������ÿ���¶���һ�����ӡ�С���ӳ����������º�����һ�����ӣ������������Ӷ���������ÿ���µ���������Ϊ���٣�
//˼·��ѭ�����ÿ���µ���������
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

