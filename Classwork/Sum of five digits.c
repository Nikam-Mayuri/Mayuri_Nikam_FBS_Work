#include<stdio.h>
void main()
{
	int no=12345, no1,no2,no3,no4,no5,q,q1,q2,sum;
	no1=no%10;                                  //no1=12345%10=5
	q=no/10;                                    //q=12345/10=1234
	no2=q%10;                                   //no2=1234%10=4
	q1=q/10;                                   //q1=1234/10=123
	no3=q1%10;                                //no3=123%10=3
	q2=q1/10;                                 //q2=123/10=12
	no4=q2%10;                               //no4=12%10=2
	no5=q2/10;                                //no5=12/10=1
	sum=no1+no2+no3+no4+no5;                  //5+4+3+2+1
	printf("The sum of given five digits is: %d",sum);
}