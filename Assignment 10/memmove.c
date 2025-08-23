#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "ABCDEFG";
    memmove(str+2, str, 5); // Overlapping copy
    printf("After memmove: %s\n", str);
    return 0;
}
