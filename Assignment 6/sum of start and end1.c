#include <stdio.h>

void findSum(int start, int end); // Function declaration

int main() {
    int start, end;
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter end number: ");
    scanf("%d", &end);

    findSum(start, end);  // Function call
    return 0;
}

void findSum(int start, int end) { // Function definition
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += i;
    }

    printf("Sum from %d to %d is: %d\n", start, end, sum);
}
