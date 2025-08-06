#include <stdio.h>

char* checkDivisibility(int num);  // Function declaration

void main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    char *result = checkDivisibility(number);
    printf("%s\n", result);
}

char* checkDivisibility(int num) {
    if (num % 3 == 0 && num % 5 == 0)
        return "Divisible by both";
    else if (num % 3 == 0)
        return "Divisible by 3 but not by 5";
    else if (num % 5 == 0)
        return "Divisible by 5 but not by 3";
    else
        return "Divisible by None";
}
