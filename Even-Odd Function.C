/*Even-Odd Function: Write a C function
to check whether a number is odd or even.*/

#include <stdio.h>

void checkEvenOdd(int num) {
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
}

int main() {
    int N;
printf("Enter the number: ");
        scanf("%d", &N);

    checkEvenOdd(N);

    return 0;
}
