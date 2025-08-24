#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *pos;

    // input string
    printf("Enter a string: ");
    scanf("%s", str);   // simple (single word input)

    // find all occurrences of 'a' and replace with '$'
    pos = strchr(str, 'a');   // find first 'a'
    while (pos != NULL) {
        *pos = '$';           // replace
        pos = strchr(pos + 1, 'a');  // find next 'a'
    }

    // print updated string
    printf("Updated string: %s\n", str);

    return 0;
}
