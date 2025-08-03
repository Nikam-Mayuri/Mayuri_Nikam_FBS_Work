#include<stdio.h>
void main()
{
	int i=5,j=0;
	if(--i&&++j)
	{
		printf("%d%d",i--,j++);
	}
	else
	{
		printf("%d%d",++i,--j);
	}
}