// Functions in C
// This program demonstrates function declaration, definition, and calling.

#include <stdio.h>  // Standard Input-Output library

// Function prototype (declaration)
int add(int a, int b);
void greet();  // Function with no return type

int main() {
    // Calling a function without parameters
    greet();

    // Calling a function with parameters and using its return value
    int num1 = 10, num2 = 20;
    int sum = add(num1, num2);
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;  // Returning 0 indicates successful execution
}

// Function definition (returns an integer)
int add(int a, int b) {
    return a + b;  // Returns sum of two numbers
}

// Function definition (void function with no return)
void greet() {
    printf("Hello! Welcome to learning functions in C.\n");
}
