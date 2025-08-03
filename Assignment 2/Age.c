#include<stdio.h>
void main()
{
	int age;
	printf("Please enter your age: ");
	scanf("%d",&age);
	if(age<12)
	{
		printf("\nChild");
	}
	else if(age>=12&&age<=19)
	{
		printf("\nTeenager");
	}
	else if(age>=20&&age<=59)
	{
		printf("\nAdult");
	}
	else if(age>=60)
	{
		printf("\nSenior");
	}
}