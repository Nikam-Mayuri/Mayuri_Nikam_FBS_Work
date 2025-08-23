#include <stdio.h>
#include <stdlib.h>   // for malloc
void printAlternate(int *, int );
int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    int *arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Function call
    printAlternate(arr, n);

    // Free allocated memory
    free(arr);

    return 0;
}

// Function to print alternate elements
void printAlternate(int *arr, int n) {
    printf("Alternate elements are:\n");
    for (int i = 0; i < n; i += 2) {   // step = 2
        printf("%d ", arr[i]);
    }
    printf("\n");
}
