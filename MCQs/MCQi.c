#include<stdio.h>
void main()
{
	int m=0,n=0;
	if(m++||++n)
	{
		printf("%d%d",m,n);
	}
	else
	{
		printf("%d%d",m,n);
	}
}

//m=0,n=0
//m++=0||++n=1
//anyone of the condition of || is true so if block so,
//m=1,n=1
//output 11 