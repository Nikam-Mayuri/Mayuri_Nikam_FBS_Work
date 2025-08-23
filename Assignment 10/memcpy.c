#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "World";
    char dest[20] = "Hello ";
    memcpy(dest + 6, src, strlen(src)+1);  // Copy into dest
    printf("Result: %s\n", dest);
    return 0;
}
