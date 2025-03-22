// Pointers in C
// This program demonstrates the basics of pointers: declaration, initialization, and dereferencing.

#include <stdio.h>  // Standard Input-Output library

int main() {
    int num = 10;      // Normal integer variable
    int *ptr = &num;   // Pointer variable storing the address of num

    // Printing values using the variable and pointer
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);  // %p is used for printing addresses
    printf("Value stored in pointer ptr: %p\n", ptr);
    printf("Value at address stored in ptr (*ptr): %d\n", *ptr);  // Dereferencing the pointer

    // Modifying value using pointer
    *ptr = 20;
    printf("\nAfter modifying value using pointer:\n");
    printf("New value of num: %d\n", num);  // Value of num is changed through pointer

    return 0;  // Returning 0 indicates successful execution
}
