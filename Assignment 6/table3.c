#include <stdio.h>

int printTable(); // Function declaration

int main() {
    printTable();  // Function call
    return 0;
}

int printTable() { // Function definition
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 1; // Returning dummy value
}
