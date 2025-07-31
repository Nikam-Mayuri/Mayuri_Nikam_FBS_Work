#include<stdio.h>
void main()
{
	int a=10,b=20,c=30,d=40;
	int x=a++ + --b + c++ + ++d;
	printf("\n%d\n%d\n%d\n%d\n%d",a,b,c,d,x);
}