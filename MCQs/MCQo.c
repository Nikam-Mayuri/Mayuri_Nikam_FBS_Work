#include<stdio.h>
void main()
{
	int m=0,n=1;
	if(m++||n--)
	{
		printf("%d%d",m--,--n);
	}
	else
	{
		printf("%d%d",++m,++n);
	}
}