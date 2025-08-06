#include <stdio.h>

void getResult();  // Function declaration

void main() {
    getResult();
}

void getResult() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks > 75)
        printf("Result: Distinction\n");
    else if (marks > 65)
        printf("Result: First Class\n");
    else if (marks > 55)
        printf("Result: Second Class\n");
    else if (marks >= 40)
        printf("Result: Pass Class\n");
    else
        printf("Result: Fail\n");
}
