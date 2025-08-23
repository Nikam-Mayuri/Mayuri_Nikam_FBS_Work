#include <stdio.h>
#include <stdlib.h>   // for malloc
void addArrays(int*, int*, int*, int );
void printArray(int*, int );
int main() 
{
    int n;

    printf("Enter size of arrays: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    int *arr1 = (int*) malloc(n * sizeof(int));
    int *arr2 = (int*) malloc(n * sizeof(int));
    int *sum  = (int*) malloc(n * sizeof(int));

    if (arr1 == NULL || arr2 == NULL || sum == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter %d elements for first array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements for second array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Function call
    addArrays(arr1, arr2, sum, n);

    printf("Resultant (sum) array:\n");
    printArray(sum, n);

    
}
// Function to add two arrays
void addArrays(int *arr1, int *arr2, int *sum, int n) 
{
    for (int i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
}

// Function to print array
void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}