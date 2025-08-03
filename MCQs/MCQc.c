#include<stdio.h>
void main()
{
	int a=0;
	if(printf("")||a++)                       
	{
		printf("if block executed");
	}
	else
	{
		printf("else block executed");         //else block will be run
	}
}