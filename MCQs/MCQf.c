#include<stdio.h>
void main()
{
	int a=1,b=2;
	if(a--&&++b)                     //a=1, a-- means at first stage it will only 1 so, true so it will check ++b as well. b=2,++b=3. second stage while printing --a=0 b=3.
	{
		printf("%d%d",a,b);
	}
	else
	{
		printf("%d%d",a,b);
	}
}