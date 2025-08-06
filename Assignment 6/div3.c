#include <stdio.h>

char* checkDivisibility();  // Function declaration

void main() {
    char *result = checkDivisibility();
    printf("%s\n", result);
}

char* checkDivisibility() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
        return "Divisible by both";
    else if (num % 3 == 0)
        return "Divisible by 3 but not by 5";
    else if (num % 5 == 0)
        return "Divisible by 5 but not by 3";
    else
        return "Divisible by None";
}
