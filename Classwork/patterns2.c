#include<stdio.h>
void main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=7;j++)
		{
			if(i==1||i==15||j==1||j==17)
			{
			
			printf("* ");
		}
		else
		{
			printf(" ");
		}
		}
		printf("\n");
	}
}