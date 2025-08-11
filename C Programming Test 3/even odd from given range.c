#include <stdio.h>

int main() {
    int start, end, i;

    // Input range
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter end number: ");
    scanf("%d", &end);

    // Check if start is even or odd and print accordingly
    if (start % 2 == 0) {
        printf("Even: ");
        for (i = start; i <= end; i++) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }
    } 
    else {
        printf("Odd: ");
        for (i = start; i <= end; i++) {
            if (i % 2 != 0) {
                printf("%d ", i);
            }
        }
    }

    printf("\n");
    return 0;
}
