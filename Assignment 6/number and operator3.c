#include <stdio.h>

float calculate();  // Function declaration

void main()
{
    float result = calculate();
    printf("Result: %.2f\n", result);
}

float calculate()
{
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch (op)
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return (float)a / b;
        case '%': return a % b;
        default: printf("Invalid operator\n"); return 0;
    }
}
