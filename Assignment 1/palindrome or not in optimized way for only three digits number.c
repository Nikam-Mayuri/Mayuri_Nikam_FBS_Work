#include<stdio.h>
void main()
{
	int no=123;
	int Ld,Fd;                       //Last digit,first digit
	Ld=no%10;
	Fd=no/100;
	if(Fd==Ld)                     //more optimized way: if(no%10==no/100)....no need to take two variables like FD and LD.
	{
		printf("Palindrome");
	}
	else
	{
		printf("non-palindrome");
	}
}