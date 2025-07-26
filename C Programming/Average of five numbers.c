#include<stdio.h>
void main()
{
	int a,b,c,d,e,sum;
	double average;
	
printf("enter first number: ");
scanf("%d", &a);
printf("enter second number: ");
scanf("%d", &b);
printf("enter third number: ");
scanf("%d", &c);
printf("enter fourth number: ");
scanf("%d", &d);
printf("enter fifth number: ");
scanf("%d", &e);
sum=a+b+c+d+e;
average=sum/5;
printf("the average of the 5 numbers is: %lf\n", average);	

}