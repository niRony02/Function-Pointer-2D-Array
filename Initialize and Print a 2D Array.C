/*Initialize and Print a 2D Array: Write a C program to declare a 2D array of size 3x3,
initialize it with numbers from 1 to 9, and then print the array in a matrix format.*/

#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
