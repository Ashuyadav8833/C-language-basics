// Control Flow Statements in C
// This program demonstrates if-else conditions and loops.

#include <stdio.h>  // Standard Input-Output library

int main() {
    // If-Else Statement
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);  // Taking user input

    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    // For Loop - Printing numbers from 1 to 5
    printf("\nFor Loop Example:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // While Loop - Printing numbers from 5 to 1
    printf("\nWhile Loop Example:\n");
    int count = 5;
    while (count > 0) {
        printf("%d ", count);
        count--;
    }
    printf("\n");

    // Do-While Loop - Ensures at least one execution
    printf("\nDo-While Loop Example:\n");
    int x = 0;
    do {
        printf("This will run at least once.\n");
    } while (x != 0);

    return 0;  // Returning 0 indicates successful execution
}
