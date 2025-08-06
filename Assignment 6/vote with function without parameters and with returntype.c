#include <stdio.h>

// Function declaration: no parameters, returns age
int getAge();

int main()
{
    int age;

    // Get age from function
    age = getAge();

    // Check voting eligibility
    if (age >= 18)
    {
        printf("You are eligible to vote.\n");
    }
    else
    {
        printf("You are NOT eligible to vote.\n");
    }

    return 0;
}

// Function definition
int getAge()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    return age;
}
