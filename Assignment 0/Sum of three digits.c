#include<stdio.h>
void main()
{
	int no=345,sum,no1,no2,no3,q;
	no1=no%10;                      //no1=345%10=5
	q=no/10;                       //q=345/10=34
	no2=q%10;                     //no2=34%10=4
	no3=q/10;                    //no3=34/10=3
	sum=no1+no2+no3;
	printf("The sum of given three digits is: %d",sum);
}