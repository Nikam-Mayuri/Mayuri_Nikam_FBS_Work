#include <stdio.h>

void add();
int main() {
    add();  // Function call
    return 0;
}
void add()

 {  // Function without parameters & return type
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);
}

