// Dynamic Memory Allocation in C
// This program demonstrates malloc(), calloc(), realloc(), and free().

#include <stdio.h>   // Standard Input-Output library
#include <stdlib.h>  // Library for memory allocation functions

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Using malloc() to allocate memory for 'n' integers
    int *arr = (int *)malloc(n * sizeof(int));
    
    if (arr == NULL) {  // Checking if memory allocation was successful
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nUsing malloc() - Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Storing values in allocated memory
    }

    printf("\nEntered numbers are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Printing stored values
    }
    printf("\n");

    // Using realloc() to resize the memory block
    printf("\nIncreasing size to %d elements...\n", n + 2);
    arr = (int *)realloc(arr, (n + 2) * sizeof(int));

    if (arr == NULL) {  // Checking if reallocation was successful
        printf("Memory reallocation failed!\n");
        return 1;
    }

    printf("Enter 2 more numbers:\n");
    for (int i = n; i < n + 2; i++) {
        scanf("%d", &arr[i]);  // Storing additional values
    }

    printf("\nUpdated numbers are:\n");
    for (int i = 0; i < n + 2; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Freeing allocated memory
    free(arr);
    printf("\nMemory successfully freed!\n");

    return 0;  // Returning 0 indicates successful execution
}
