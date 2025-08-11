#include <stdio.h>

int main()
{
    int start, end;

    // Input range
    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    // Loop through each number in the range
    for (int num = start; num <= end; num++)
    {
        printf("Factors of %d: ", num);

        // Find factors of the current number
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                printf("%d, ", i);
            }
        }
        printf("\n");
    }

    return 0;
}
