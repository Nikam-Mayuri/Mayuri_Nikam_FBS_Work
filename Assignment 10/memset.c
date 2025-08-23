#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "Hello";
    memset(str, '*', 3);  // Replace first 3 chars with '*'
    printf("After memset: %s\n", str);
    return 0;
}
