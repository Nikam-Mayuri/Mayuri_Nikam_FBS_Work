#include<stdio.h>
void main()
{
	int no=73485;
	int r1,sum=0;
	while(no>0)
	{
		r1=no%10;
		sum=sum+r1;
		no=no/10;
	}
	printf("Sum of five digits is: %d",sum);
}