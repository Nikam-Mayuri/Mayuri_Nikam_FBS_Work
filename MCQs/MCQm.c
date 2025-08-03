#include<stdio.h>
void main()
{
	int p=0,q=0;
	if(p++&&q++)
	{
		printf("%d%d",p,q);
	}
	else
	{
		printf("%d%d",++p,++q);
	}
}