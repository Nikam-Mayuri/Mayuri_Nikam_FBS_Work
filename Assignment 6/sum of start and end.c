#include <stdio.h>

void findSum(); // Function declaration

int main() {
    findSum();   // Function call
    return 0;
}

void findSum() { // Function definition
    int start, end, sum = 0;
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter end number: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        sum += i;
    }

    printf("Sum from %d to %d is: %d\n", start, end, sum);
}
