#include <stdio.h>

void calculate(int a, int b, char op);  // Function declaration

void main()
{
    int num1, num2;
    char op;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    calculate(num1, num2, op);
}

void calculate(int a, int b, char op)
{
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
