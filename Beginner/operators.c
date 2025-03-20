// Operators in C
// This program demonstrates different types of operators in C.

#include <stdio.h>  // Standard Input-Output library

int main() {
    // Arithmetic Operators
    int a = 10, b = 5;
    printf("Arithmetic Operators:\n");
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n\n", a, b, a % b); // %% prints %

    // Relational Operators
    printf("Relational Operators:\n");
    printf("%d > %d : %d\n", a, b, a > b);
    printf("%d < %d : %d\n", a, b, a < b);
    printf("%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n\n", a, b, a != b);

    // Logical Operators
    int x = 1, y = 0;
    printf("Logical Operators:\n");
    printf("x && y : %d\n", x && y); // AND operator
    printf("x || y : %d\n", x || y); // OR operator
    printf("!x : %d\n\n", !x);       // NOT operator

    // Assignment Operators
    printf("Assignment Operators:\n");
    int num = 10;
    printf("num = %d\n", num);
    num += 5;  // Equivalent to num = num + 5
    printf("num += 5: %d\n", num);
    num *= 2;  // Equivalent to num = num * 2
    printf("num *= 2: %d\n", num);

    return 0;  // Returning 0 indicates successful execution
}
