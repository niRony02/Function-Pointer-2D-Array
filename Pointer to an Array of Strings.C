/*Pointer to an Array of Strings:
How would you declare and initialize a pointer
 to an array of strings in C?
*/

#include <stdio.h>

int main() {
    char *strings[] = {"Nahidul", "Islam", "Rony"};

    char **ptrToStr = strings;

    for (int i = 0; i < 3; i++) {
        printf("%s ", *(ptrToStr + i));
    }

    return 0;
}
