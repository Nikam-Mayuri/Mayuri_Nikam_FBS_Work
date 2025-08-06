#include<stdio.h>
void ch1();
void ch2();
void ch3();
void ch4();
void ch5();
void ch6();
int main()
{
	int run = 1; // loop control

    while (run == 1)
    {
    	
	int choice;

	printf("\nPress 1.To check number is even or odd.");
	
	printf("\nPress 2.To check number is prime or not.");

	printf("\nPress 3.To check number is pallindrome or not.");
	
	printf("\nPress 4.To check number is positive, negative or zero.");
	
	printf("\nPress 5.To reverse a number.");
	
	printf("\nPress 6.To find sum of digits.");

	printf("\nEnter the choice:");
	scanf("%d",&choice);
	if(choice==1)
	{
		ch1();
	}
	
else if(choice==2)
{
	ch2();
}
else if(choice==3)
{
	ch3();
}
else if(choice==4)
{
	ch4();
}
else if(choice==5)
{
	ch5();
}
else if(choice==6)
{
	ch6();
}
else
{
		printf("\nInvalid choice.");
}

	// Ask to continue or exit
        printf("\n\nPress 1 to continue or 0 to exit: ");
        scanf("%d", &run);
    }
    printf("\nProgram exited.");
    return 0;
}
void ch1()
{
	int no;
	printf("\nEnter the number: ");
	scanf("%d",&no);
	
		if(no%2==0)
		{
			printf("\nEven number.");
		}
		else
		{
			printf("\nOdd number.");
		}
	}

void ch2()
{
	int no;
	printf("\nEnter the number: ");
	scanf("%d",&no);
		int i=2,status=0;
		while(i<no)
		{
			if(no%2==0)
			{
				status=1;
				printf("\nNot a prime number.");
				break;
			}
			i++;
		}
		if(status==0)
		{
			printf("\nPrime number.");
		}
	}

void ch3()
{
		int no;
	
	printf("\nEnter the number: ");
	scanf("%d",&no);
		int digit,temp,reversed=0;
		temp=no;
		while(no>0)
		{
			digit=no%10;
			reversed = reversed * 10 + digit;
			no=no/10;
		}
		if (temp == reversed) 
	{
        printf("Palindrome\n");
    } 
	else 
	{
        printf("Not Palindrome\n");
    }
	}

void ch4()
{
		int no;
	printf("\nEnter the number: ");
	scanf("%d",&no);
		if(no==0)
		{
			printf("\nNeutral");
		}
		else if(no>0)
		{
			printf("\nPositive");
		}
		else
		{
			printf("\nNegative");
		}
	}

void ch5()
{

		int temp,digit,reversed=0,no;
		printf("\nEnter the number: ");
	scanf("%d",&no);
		temp=no;
		int copy=no;
		while(copy!=0)
		{
			digit=copy%10;
			reversed=reversed*10+digit;
			copy=copy/10;
		}
	printf("\nOriginal number:%d\tReversed number:%d",temp,reversed);
	}

void ch6()
{
	
	
		int sum=0,digit,no;
		printf("\nEnter the number: ");
	scanf("%d",&no);
		int temp=no;
		int temp1=no;
		while(temp1>0)
		{
			digit=temp1%10;
			sum=sum+digit;
			temp1=temp1/10;
		}
		printf("Sum of digits:%d",sum);
	}
