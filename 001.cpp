#include<stdio.h>
int main()
{
	int i=0,n=10;
	for(;;)
	{
		i++;
		if(i==6)//1234578910
			continue;//��������ѭ�� 
		printf("%d",i);
		if(i==n)
			break;//��ֹȫ��ѭ�� 
	}
}
