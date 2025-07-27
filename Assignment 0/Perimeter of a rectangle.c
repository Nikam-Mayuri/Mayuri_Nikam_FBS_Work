#include<stdio.h>
void main()
{
	float length,width,sum,perimeter;
	printf("Please enter length of a rectangle:");
	scanf("%f",&length);
	printf("Please enter width of a rectangle:");
	scanf("%f",&width);
	sum=length*width;
	perimeter=2*sum;
	printf("\n The perimeter of a rectangle is %f", perimeter);
}