#include<stdio.h>
void main()
{
	int a=2,b=3;
	if(a--&&++b)
	{
		printf("%d%d",a,b);
	}
	else
	{
		printf("%d%d",++a,b--);
	}
	}