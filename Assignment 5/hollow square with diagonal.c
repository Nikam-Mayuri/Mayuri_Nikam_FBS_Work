#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter size of square: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            // Print star for border or left diagonal
            if (i == 1 || i == n || j == 1 || j == n || j == i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
