#include<stdio.h>
void main()
{
	int firstnumber,lastnumber,sum,no;
	printf("Enter the number: ");
	scanf("%d",&no);
	lastnumber=no%100;                                //first two digits and last two digits so,100. if last one digit and first digit then 10.if three digits last and first then 1000,etc.
firstnumber=no;
while(firstnumber>=100)
{
	firstnumber=firstnumber/10;
}
sum=firstnumber+lastnumber;
printf("\nFirst two digits from given number is: %d",firstnumber);
printf("\nLast two digits from given number is: %d",lastnumber);
printf("\nSum: %d",sum);
}
