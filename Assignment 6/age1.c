#include <stdio.h>

char* checkCategory(int age);  // Function declaration

void main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    
    char *result = checkCategory(age);
    printf("Category: %s\n", result);
}

char* checkCategory(int age) {
    if (age < 12)
        return "Child";
    else if (age <= 19)
        return "Teenager";
    else if (age <= 59)
        return "Adult";
    else
        return "Senior";
}
