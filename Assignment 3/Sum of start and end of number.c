#include<stdio.h>
void main()
{
	int no,lastdigit,firstdigit,sum;
	printf("Please enter a number:");
	scanf("%d",&no);
	lastdigit=no%10;
	firstdigit=no;
	while(firstdigit>=10)
	{
		firstdigit=firstdigit/10;
		
		
	}
	sum=lastdigit+firstdigit;
	printf("\nFirst digit: %d",firstdigit);
	printf("\nLast digit: %d",lastdigit);
	printf("\nSum of first and last digit of the given number is: %d",sum);
}