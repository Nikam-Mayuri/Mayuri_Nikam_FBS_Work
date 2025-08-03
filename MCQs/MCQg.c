#include<stdio.h>
void main()
{
	int x=0,y=1;
	if(x++||--y)            //output: 1 0
	{
		printf("%d%d",x,y);
	}
	else
	{
		printf("%d%d",x,y);
	}
}