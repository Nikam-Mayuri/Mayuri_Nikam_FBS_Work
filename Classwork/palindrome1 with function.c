#include<stdio.h>
void pali();
void main()
{
	pali();
}
void pali()
{
	int n, reversed = 0, temp, digit;

    
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Reverse the number
    while (n > 0)
	 {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    
    if (temp == reversed) 
	{
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
}