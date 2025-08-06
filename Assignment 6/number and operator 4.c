#include <stdio.h>

void calculate();  // Function declaration

void main()
{
    calculate();
}

void calculate()
{
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch (op)
    {
        case '+': printf("Result: %d\n", a + b); break;
        case '-': printf("Result: %d\n", a - b); break;
        case '*': printf("Result: %d\n", a * b); break;
        case '/': printf("Result: %.2f\n", (float)a / b); break;
        case '%': printf("Result: %d\n", a % b); break;
        default: printf("Invalid operator\n");
    }
}
