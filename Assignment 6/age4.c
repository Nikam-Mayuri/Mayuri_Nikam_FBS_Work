#include <stdio.h>

void checkCategory();  // Function declaration

void main() {
    checkCategory();
}

void checkCategory() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 12)
        printf("Category: Child\n");
    else if (age <= 19)
        printf("Category: Teenager\n");
    else if (age <= 59)
        printf("Category: Adult\n");
    else
        printf("Category: Senior\n");
}
