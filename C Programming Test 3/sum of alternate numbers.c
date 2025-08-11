#include <stdio.h>

int main() {
    int start, end, sum = 0, i;

    // Input range
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter end number: ");
    scanf("%d", &end);

    // Adding alternate numbers
    for (i = start; i <= end; i += 2) {
        sum += i;
    }

    // Display result
    printf("Sum = %d\n", sum);

    return 0;
}
