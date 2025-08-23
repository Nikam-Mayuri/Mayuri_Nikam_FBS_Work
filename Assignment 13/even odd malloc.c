#include <stdio.h>
#include<stdlib.h>
void findOddEven(int*, int);
void main() 
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

   int *arr = (int*) malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findOddEven(arr, n);  // function call

    
}
void findOddEven(int* arr, int n)
 {
    printf("Even numbers: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd numbers: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

