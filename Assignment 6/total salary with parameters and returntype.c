#include <stdio.h>

float calculateTotalSalary(float basic)
{
    float da, ta, hra;
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

    return basic + da + ta + hra;
}

int main()
{
    float basic, total;
    printf("Enter basic salary: ");
    scanf("%f", &basic);

    total = calculateTotalSalary(basic);

    printf("Total Salary = %.2f\n", total);
    return 0;
}
