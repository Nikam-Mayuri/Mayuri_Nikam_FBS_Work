#include<stdio.h>
void main()
{
	int a=0,b=5;
	if(a++&&++b)                    //a++ means 0 because a=0. condition false so, && will not go woth second condition which is ++b.output will be 15
	{
		printf("%d%d",a,b);
	}
	else
	{
		printf("%d%d",a,b);
	}
}