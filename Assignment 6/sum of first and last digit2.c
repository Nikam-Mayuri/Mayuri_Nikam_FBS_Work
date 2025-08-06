#include <stdio.h>

void sumFirstLast(int num) {
    int last = num % 10;
    int first = num;

    while (first >= 10) {
        first /= 10;
    }

    printf("Sum of first and last digit: %d\n", first + last);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    sumFirstLast(n);
    return 0;
}
