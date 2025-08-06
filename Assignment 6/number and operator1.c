#include <stdio.h>

float calculate(int a, int b, char op);  // Function declaration

void main()
{
    int num1, num2;
    char op;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    float result = calculate(num1, num2, op);
    printf("Result: %.2f\n", result);
}

float calculate(int a, int b, char op)
{
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
