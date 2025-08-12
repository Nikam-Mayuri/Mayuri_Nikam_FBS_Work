#include <stdio.h>

int main() {
    int n, i, j;
    int num = 1; // Starting number

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {        // Rows
        for (j = 1; j <= i; j++) {    // Numbers in each row
            printf("%d ", num);
            num++;                    // Increment number
        }
        printf("\n");                 // New line after each row
    }

    return 0;
}
