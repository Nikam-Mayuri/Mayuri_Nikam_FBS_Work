#include <stdio.h>

int factorial() {
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int result = factorial();
    printf("Factorial is %d\n", result);
    return 0;
}
