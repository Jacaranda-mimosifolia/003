#include<stdio.h>
int main()
{
	int i=0,n=10;
	for(;;)
	{
		i++;
		if(i==6)//1234578910
			continue;//跳过本次循环 
		printf("%d",i);
		if(i==n)
			break;//终止全部循环 
	}
}
