#include <stdio.h>

int main() {
    char buffer[100];   // destination string
    int roll = 101;
    char name[] = "Alice";
    float marks = 87.5;

    // store formatted output into buffer
    sprintf(buffer, "Roll: %d, Name: %s, Marks: %.2f", roll, name, marks);

    // print the string
    printf("%s\n", buffer);

    return 0;
}
