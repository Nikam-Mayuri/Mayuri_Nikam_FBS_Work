#include<stdio.h>
void main()
{
	int a=10,b=20,temp;
	temp=a;
	a=b;
	b=temp;
	printf("a=%d",a);
	printf("\nb=%d",b);
}