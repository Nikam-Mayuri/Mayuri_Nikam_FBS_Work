#include <stdio.h>

// Function declaration (no parameters, returns float total salary)
float calculateSalary();

int main()
{
    float total;

    // Call the function and store total salary
    total = calculateSalary();

    // Display the result
    printf("Total Salary = %.2f\n", total);

    return 0;
}

// Function definition
float calculateSalary()
{
    float basic, da, ta, hra, total;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if (basic <= 5000)
    {
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    }
    else
    {
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }

    total = basic + da + ta + hra;
    return total;
}
