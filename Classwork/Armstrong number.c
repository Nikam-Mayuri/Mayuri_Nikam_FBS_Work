#include<stdio.h>
void main()
{
	int no;
	printf("\nEnter a number:");
	scanf("%d",&no);
	int count=0;
	while(no>0)
	{
		count++;
		no=no/10;
	}
	int temp;
	no=temp;
	int sum=0,rem;
	int res;
	while(no>0)
	{
		rem=no%10;
		for(int i=1;i<=count;i++)
	{

		res=res*rem;
		sum=sum+res;
		no=no/10;
	}
		}
	if(sum==temp)
	{
		printf("\nIt is an armstrong number",temp);
	}
	else
	{
		printf("\nIt is not an armstrong number",temp);
	}
}