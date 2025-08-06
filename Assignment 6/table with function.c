#include<stdio.h>
void table();
void main()
{
	table();
}
void table()
{
		int no=5,i=1,t;
	while(i<=10)
	{
		t=no*i;
		printf("\n%d",t);
		i++;
	}
}