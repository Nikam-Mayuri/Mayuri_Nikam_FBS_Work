#include<stdio.h>
void main()
{
	int no;
	printf("Enter a number: ");
	scanf("%d",&no);
	if(no==0)
	{
		printf("This is a neutral number.");
	}
	else if(no>0)
	{
		printf("This is a positive number.");
	}
	else
	{
		printf("This is a negative number.");
	}
}