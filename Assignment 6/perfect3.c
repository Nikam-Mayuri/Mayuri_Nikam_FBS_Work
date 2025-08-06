#include <stdio.h>

int isPerfect() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }

    return sum == num;
}

int main() {
    if (isPerfect())
        printf("It is a Perfect Number.\n");
    else
        printf("It is NOT a Perfect Number.\n");
    
    return 0;
}
