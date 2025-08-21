#include <stdio.h>
void findCommon(int arr1[],int,int arr2[],int);
void main() 
{
    int n1, n2;

    
   printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements for first array: ", n1);
    for (int i = 0; i < n1; i++) 
	{
        scanf("%d", &arr1[i]);
    }

   
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements for second array: ", n2);
    for (int i = 0; i < n2; i++) 
	{
        scanf("%d", &arr2[i]);
    }

    
    findCommon(arr1, n1, arr2, n2);

   
}


void findCommon(int arr1[], int n1, int arr2[], int n2) 
{
    printf("Common elements: ");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;  // avoid printing same element multiple times if repeated in arr2
            }
        }
    }
    printf("\n");
}

