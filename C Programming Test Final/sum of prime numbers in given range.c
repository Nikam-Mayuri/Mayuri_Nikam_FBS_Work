#include <stdio.h>
void main() 
{
    int start,end,i,j,sum=0,isPrime;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    for(i=start;i<=end;i++) 
	{
        if(i<=1) //0 and 1 are not prime numbers hence, we are skipping them.
		{
            continue; 
        }

        isPrime=1; 

       
        for(j=2;j<i;j++) 
		{
            if(i%j==0) 
		{
                isPrime=0; 
                break;
            }
        }

        if(isPrime==1) 
		{
            sum=sum+i; 
        }
    }

    printf("Sum of prime numbers between %d and %d = %d\n", start, end, sum);

}
