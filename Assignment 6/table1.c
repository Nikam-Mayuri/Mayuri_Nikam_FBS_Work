#include <stdio.h>

int printTable(int n); // Function declaration

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printTable(num);   // Function call
    return 0;
}

int printTable(int n) { // Function definition
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 1; // Return any value as function has return type
}
