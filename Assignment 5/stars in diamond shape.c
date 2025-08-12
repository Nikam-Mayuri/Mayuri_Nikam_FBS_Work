#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Upper half
    for (i = 1; i <= n; i++) {
        // Spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) {
        // Spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
