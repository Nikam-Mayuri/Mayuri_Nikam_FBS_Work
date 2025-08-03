#include<stdio.h>
void main()
{
	int no,i=2,status=0;    //no=13
	printf("Enter the number: ");
	scanf("%d",&no);
	while(i<no)          //i<13  because number can be divisible by one and itself. so, starting from 2.i=2.
	{
		if(no%i==0)
		{
			status=1;
			printf("\nNumber is not a prime number.");
			break;                    //if it is working no need to iterate again so using break.
		}
		i++;
	}
	if(status==0)
	{
		printf("\nNumber is a prime number.");
	}
	
	
}

