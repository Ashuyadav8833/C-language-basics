// Pointer Arithmetic in C
// This program demonstrates pointer arithmetic operations.

#include <stdio.h>  // Standard Input-Output library

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Array of integers
    int *ptr = arr;  // Pointer pointing to the first element of the array

    printf("Using Pointer Arithmetic:\n");
    
    // Printing array elements using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        printf("Element %d: Value = %d, Address = %p\n", i, *ptr, ptr);
        ptr++;  // Move to the next integer in memory
    }

    // Resetting pointer to the start of the array
    ptr = arr;

    // Pointer increment and decrement
    printf("\nDemonstrating Pointer Increment and Decrement:\n");
    printf("Original address: %p, Value: %d\n", ptr, *ptr);
    ptr++;  // Move to the next element
    printf("After ptr++: Address = %p, Value = %d\n", ptr, *ptr);
    ptr--;  // Move back to the original element
    printf("After ptr--: Address = %p, Value = %d\n", ptr, *ptr);

    // Pointer subtraction
    int *ptr2 = &arr[4];  // Pointer pointing to the last element
    int difference = ptr2 - ptr;  // Finding the difference between two pointers
    printf("\nPointer Difference: ptr2 - ptr = %d (Number of elements between them)\n", difference);

    return 0;  // Returning 0 indicates successful execution
}
