#include <stdio.h>

char* checkCategory();  // Function declaration

void main() {
    char *result = checkCategory();
    printf("Category: %s\n", result);
}

char* checkCategory() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 12)
        return "Child";
    else if (age <= 19)
        return "Teenager";
    else if (age <= 59)
        return "Adult";
    else
        return "Senior";
}
