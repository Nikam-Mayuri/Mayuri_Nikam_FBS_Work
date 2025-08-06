#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num, sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += digit * digit * digit;  // For 3-digit numbers
        num /= 10;
    }
    return sum == original;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (isArmstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is NOT an Armstrong number.\n", n);
    
    return 0;
}
