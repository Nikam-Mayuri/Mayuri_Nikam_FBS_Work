#include <stdio.h>

// function declaration
char* mystrnstr(const char *haystack, const char *needle, int n);

int main() {
    char str[] = "Hello World";
    char sub[] = "World";

    char *result = mystrnstr(str, sub, 11);  // search within first 11 chars

    if (result != NULL)
        printf("Substring found: %s\n", result);
    else
        printf("Substring not found.\n");

    return 0;
}

// function definition
char* mystrnstr(const char *haystack, const char *needle, int n) {
    int i, j;

    if (*needle == '\0')   // empty needle always matches
        return (char*)haystack;

    for (i = 0; haystack[i] != '\0' && i < n; i++) {
        // try matching needle from this position
        for (j = 0; needle[j] != '\0'; j++) {
            if (i + j >= n || haystack[i + j] != needle[j])
                break;
        }
        if (needle[j] == '\0')   // full match found
            return (char*)(haystack + i);
    }

    return NULL; // not found
}
