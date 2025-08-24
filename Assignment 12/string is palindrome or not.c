#include <stdio.h>

// function declaration
int isPalindrome(char str[]);

int main() {
    char s[100];

    // input string
    printf("Enter a string: ");
    scanf("%s", s);

    // call function
    if (isPalindrome(s))
        printf("The string is a Palindrome.\n");
    else
        printf("The string is NOT a Palindrome.\n");

    return 0;
}

// function definition
int isPalindrome(char str[]) {
    int start = 0, end = 0;

    // find length
    while (str[end] != '\0') {
        end++;
    }
    end--; // last character index

    // check palindrome
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // not palindrome
        }
        start++;
        end--;
    }
    return 1; // palindrome
}
