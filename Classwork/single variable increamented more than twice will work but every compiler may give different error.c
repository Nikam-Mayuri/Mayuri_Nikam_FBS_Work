#include<stdio.h>
void main()
{
	int a=10,b=20;
	int x=a++ + b++ + --a + a++;
	printf("%d",x);
}