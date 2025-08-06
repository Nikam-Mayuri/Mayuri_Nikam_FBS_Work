#include <stdio.h>

const char* checkVotingEligibility(int age)
{
    return (age >= 18) ? "Eligible to vote" : "Not eligible to vote";
}

int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    printf("You are %s.\n", checkVotingEligibility(age));
    return 0;
}
