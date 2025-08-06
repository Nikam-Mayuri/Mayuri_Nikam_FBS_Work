#include<stdio.h>
void ts();
void main()
{
	ts();
}
void ts()
{
	double bs=8000;
	double da,ta,hra,ts;
	if(bs<=5000)
	{
		da=bs*0.10;
		ta=bs*0.15;
		hra=bs*0.20;
	}
	else
	{
		da=bs*0.15;
		ta=bs*0.25;
		hra=bs*0.30;
	}
	ts=bs+da+ta+hra;
	printf("Total salary is %f",ts);
}