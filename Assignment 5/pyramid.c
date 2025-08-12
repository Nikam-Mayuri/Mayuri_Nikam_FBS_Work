#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print spaces
        for (space = 1; space <= n - i; space++) {
            printf("  "); // double space for better alignment
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
