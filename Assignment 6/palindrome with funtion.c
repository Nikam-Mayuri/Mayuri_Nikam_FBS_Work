#include<stdio.h>
void palindrome();
void main()
{
		
	palindrome();

}
void palindrome()
{
	
	int r1,r2,r3,q1,rev;
	int no=121;
	
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	r3=q1/10;
	rev=r1*100+r2*10+r3;
			if(no==rev)
	{
		printf("palindrome");
	}
	else
	{
		printf("non-palindrome");
	}
	
}