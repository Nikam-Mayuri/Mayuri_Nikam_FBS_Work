#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {

        // Print spaces
        for (space = 1; space <= n - i; space++) {
            printf("  "); // double space for alignment
        }

        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}

