#include <stdio.h>

int add();
int main() {
    int sum = add();  // Function call
    printf("Sum = %d\n", sum);
    return 0;
}
 int add()
{  // Function without parameters but with return type
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    return a + b;
}

