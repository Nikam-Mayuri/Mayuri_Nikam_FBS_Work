#include<stdio.h>
void main()
{
	int a=10,b=20;
	int c=a++||b++;
	printf("%d\n%d\n%d",a,b,c);
}