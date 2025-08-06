#include<stdio.h>
void UL();                                     //function declaration
void main()
{
	UL();                                      //function call
}
void UL()                                         //Function definition
{
	char c;
	printf("Enter the character:");
	scanf("%c",&c);
	if(c>='A'&&c<='Z')
	{
		printf("Uppercase");
	}
	else
	{
		printf("Lowercase");
	}
}