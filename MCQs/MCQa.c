#include<stdio.h>
void main()
{
	int a=1;
	if(printf("")&&a++)                                //printf has 0 so, false.&& will not check a++. so if is false it will run else block.
	{
		printf("if block executed");
	}
	else
	{
		printf("else block executed");
	}
}