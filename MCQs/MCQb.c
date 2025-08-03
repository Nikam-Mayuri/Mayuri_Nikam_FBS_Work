#include<stdio.h>
void main()
{
	int a=1;
	if(printf("Hi")&&a++)                //printf has Hi means true so if block
	{
		printf("if block executed");           
	}
	else
	{
		printf("else block executed");
	}
}