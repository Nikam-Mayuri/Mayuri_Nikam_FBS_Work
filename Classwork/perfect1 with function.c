#include<stdio.h>
int per();            //returning int value hence, int used.
int main()
{
	per();
}
int per()
{
	 int n, i, j, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 and %d are:\n", n);

    for(i = 1; i <= n; i++) {
        sum = 0;

        for(j = 1; j < i; j++) {
            if(i % j == 0) {
                sum += j;
            }
        }

        if(sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}