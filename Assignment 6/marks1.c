#include <stdio.h>

char* getResult(int marks);  // Function declaration

void main() {
    int m;
    printf("Enter marks: ");
    scanf("%d", &m);

    char* result = getResult(m);
    printf("Result: %s\n", result);
}

char* getResult(int marks) {
    if (marks > 75)
        return "Distinction";
    else if (marks > 65)
        return "First Class";
    else if (marks > 55)
        return "Second Class";
    else if (marks >= 40)
        return "Pass Class";
    else
        return "Fail";
}
