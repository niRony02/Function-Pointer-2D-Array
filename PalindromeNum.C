/*Palindrome: Write a C program to check
whether a number is palindrome or not*/

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int n) {
    int reversed = 0, remainder, original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    return original == reversed;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n)) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }


    return 0;

}
