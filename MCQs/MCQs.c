#include<stdio.h>
void main()
{
	int a=5;
	if(a++&&a==0)
	{
		printf("Chennai %d",a);
	}
	else
	{
		printf("Mumbai %d",a);
	}
}