#include<stdio.h>
void main()
{
	float maths=75.5,science=80,history=73.5,english=90,marathi=91,sum,divide,percentage;
	sum=maths+science+history+english+marathi;
	divide=sum/500;
	percentage=divide*100;
	printf("Total marks: %f",sum);
	printf("\nTotal percentage: %f",percentage);

}