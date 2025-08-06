#include <stdio.h>

void printNumbers(int n);  // Function declaration

void main() {
    printNumbers(10);   // Function call with parameter
}

void printNumbers(int n) {  // Function definition
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
}
