#include<stdio.h>
void main()
{
	for(int i=1;i<=15;i++)
	{
		for(int j=1;j<=15;j++)
		{
			if(i==1||i==15||j==1||j==15||i==j||j==i||i+j==16)
			{
			
			printf("*");
		}
		else
		{
			printf(" ");
		}
		}
		printf("\n");
	}
}