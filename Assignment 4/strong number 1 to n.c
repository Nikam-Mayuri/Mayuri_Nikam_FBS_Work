#include<stdio.h>

int main() {
    int n, i, num, rem, fact, sum, j;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d are:\n", n);

    for(i = 1; i <= n; i++) {
        num = i;
        sum = 0;

        while(num > 0) {
            rem = num % 10;

            // Calculate factorial of digit
            fact = 1;
            for(j = 1; j <= rem; j++) {
                fact *= j;
            }

            sum += fact;
            num /= 10;
        }

        if(sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
