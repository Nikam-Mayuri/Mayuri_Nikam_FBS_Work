#include<stdio.h>
void digit();                   //function declaration
void main()
{
	digit();                 //function call
}
void digit()                  //function definition
{
		int no,rem,temp,firstDigit;
	printf("Enter the number: ");
	scanf("%d",&no);
	rem=no%10;
temp = no;
	while(no>=10)
	{
			no=no/10;
	}
	  firstDigit = no;
	  printf("\n%d%d",firstDigit,rem);
}