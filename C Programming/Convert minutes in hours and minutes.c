#include<stdio.h>
void main()
{
	int minutes,hour,min;
	printf("Enter time in minutes:");
	scanf("%d",&minutes);
	hour=minutes/60;
	min=minutes%60;
	printf("\n Time in hours and minutes is: %d hours %d minutes",hour,min);
}