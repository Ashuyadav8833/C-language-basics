// Arrays in C
// This program demonstrates the use of one-dimensional and two-dimensional arrays.

#include <stdio.h>  // Standard Input-Output library

int main() {
    // One-Dimensional Array
    int numbers[5] = {10, 20, 30, 40, 50};  // Array initialization

    printf("One-Dimensional Array Elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    // Two-Dimensional Array (Matrix)
    int matrix[2][2] = { {1, 2}, {3, 4} };  // 2x2 Matrix

    printf("\nTwo-Dimensional Array (Matrix) Elements:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);  // Printing matrix elements
        }
        printf("\n");
    }

    return 0;  // Returning 0 indicates successful execution
}
