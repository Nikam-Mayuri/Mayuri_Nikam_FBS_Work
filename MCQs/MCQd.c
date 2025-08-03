#include<stdio.h>
void main()
{
	int a=0;
	if(printf("FBS")||a++)              //|| first conditon is true is that is enough to print if block.
	{
		printf("if block");
	}
	else
	{
		printf("else block");
	}
}