#include<stdio.h>
void main()
{
	//f=(c*9/5)+32 ....Formula to convert temperature celsius to fahrenheit. note:Solve bracket first.9/5=1.8 hence, a=1.8
	int b=32;
	float no1, f,a=1.8, c=25.5;
	                                      
	no1=c*a;                                   // 1st operation multiplication ..no1= c*no1 ..no1= 25.5*no1
	f=no1+b;                                      // 2nd operation addition ..f=no1+32
	printf("Fahrenheit temperature is %f", f);
}0