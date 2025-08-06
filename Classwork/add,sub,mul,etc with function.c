#include<stdio.h>
void add();
void substract();                             //function declaration
void mul();
void div();
void mod();
void main()
{
	
char operator;
	
	add();
	substract();
	mul();                                 //function call
	div();
	mod();
}
void add()                                  //function definition
{
	int n1,n2,n3;
	printf("\nPlease enter first number:",n1);
	scanf(" %d",&n1);
	printf("\nPlease enter second number:",n2);
	scanf(" %d",&n2);
		n3=n1+n2;
		printf("\nAddition of given numbers is:%d",n3);
}
void substract()
{
		int n1,n2,n3;
	printf("\nPlease enter first number:",n1);
	scanf(" %d",&n1);
	printf("\nPlease enter second number:",n2);
	scanf(" %d",&n2);
		n3=n1-n2;
		printf("\nSubtraction of given numbers is:%d",n3);
}
void mul()
{
		int n1,n2,n3;
	printf("\nPlease enter first number:",n1);
	scanf(" %d",&n1);
	printf("\nPlease enter second number:",n2);
	scanf(" %d",&n2);
		n3=n1*n2;
		printf("\nMultiplication of given numbers is:%d",n3);
	
}
void div()
{
int n1,n2,n3;
	printf("\nPlease enter first number:",n1);
	scanf(" %d",&n1);
	printf("\nPlease enter second number:",n2);
	scanf(" %d",&n2);
	n3=n1/n2;
		printf("\nDivision of given numbers is:%d",n3);	
}
void mod()
{
	int n1,n2,n3;
	printf("\nPlease enter first number:",n1);
	scanf(" %d",&n1);
	printf("\nPlease enter second number:",n2);
	scanf(" %d",&n2);
	n3=n1%n2;
		printf("\nMod operation:%d",n3);
}