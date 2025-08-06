#include <stdio.h>

void printNumbers();  // Function declaration

void main() {
    printNumbers();   // Function call
}

void printNumbers() {  // Function definition
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
}
