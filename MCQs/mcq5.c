#include<stdio.h>
void main()
{
	int a=printf("one"), b=printf("two"), c=a||b;
	printf("%d",c);
}