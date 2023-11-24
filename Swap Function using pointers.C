/*Swap Function Using Pointers:
Write a C function to swap the values of two integers using pointers.*/

#include <stdio.h>

    void swap(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
 }

    int main()
    {
        int x = 5, y = 10;

        printf("x = %d, y = %d\n", x, y);

        swap(&x, &y);

        printf("x = %d, y = %d\n", x, y);


    return 0;

}
