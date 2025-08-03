#include<stdio.h>
void main()
{
	int t1,t2,t3;
	printf("Enter three sides of a triangle:");
	scanf("%d,%d,%d",&t1,&t2,&t3);
if(t1==t2&&t2==t3)
{
	printf("Equilateral trinagle");
}
else if(t1==t2||t2==t3||t1==t3)
{
	printf("Isosceles triangle");
}
else
{
	printf("Scalene triangle");
}
}
