#include<stdio.h>
void main()
{
	int n1,n2,n3;
	char operator;
	printf("\nPlease enter first number:",n1);
	scanf(" %d",&n1);
	printf("\nPlease enter second number:",n2);
	scanf(" %d",&n2);
	printf("\nPlease choose an operator from these options: (+,-,/,*)");
	scanf(" %c",&operator);
	if(operator=='+')
	{
		n3=n1+n2;
		printf("\nAddition of given numbers is:%d",n3);
	}
	else if(operator=='-')
	{
		n3=n1-n2;
		printf("\nSubtraction of given numbers is:%d",n3);
	}
	else if(operator=='/')
	{
		n3=n1/n2;
		printf("\nDivision of given numbers is:%d",n3);
	}
	else if(operator=='*')
	{
		n3=n1*n2;
		printf("\nMultiplication of given numbers is:%d",n3);
	
	}

		else
	{
		printf("Invalid choice");
	}


}