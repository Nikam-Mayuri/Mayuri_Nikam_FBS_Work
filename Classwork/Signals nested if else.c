#include<stdio.h>
void main()
{
	int signal=2;    //or you can accept it from user.
	
	if(signal==0)
	{
		printf("Stop");
	}
	else if(signal==1)
	{
		printf("Low speed");
	}
	else if(signal==2)
	{
		printf("Start");
	}
}