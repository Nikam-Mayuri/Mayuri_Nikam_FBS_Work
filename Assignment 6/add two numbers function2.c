#include <stdio.h>

void add(int , int );
int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    add(num1, num2);  // Function call
    return 0;
}
void add(int a, int b)
 {  // Function with parameters & no return type
    printf("Sum = %d\n", a + b);
}

