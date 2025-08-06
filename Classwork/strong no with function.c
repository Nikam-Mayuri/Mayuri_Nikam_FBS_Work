#include<stdio.h>
void s();
void main()
{
int n;
	printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d are:\n", n);
    s();
}
void s()
{
	int n,rem;
	 for(int i = 1; i <= n; i++) {
       int num = i;
        int sum = 0;

        while(num > 0) {
            rem = num % 10;

            // Calculate factorial of digit
            int fact = 1;
            for(int j = 1; j <= rem; j++) {
                fact *= j;
            }

            sum += fact;
            num /= 10;
        }

        if(sum == i) {
            printf("%d ", i);
        }
    }
}