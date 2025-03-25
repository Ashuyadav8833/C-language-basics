// Unions in C
// This program demonstrates defining, initializing, and using unions.

#include <stdio.h>  // Standard Input-Output library
#include <string.h> // Library for string functions

// Defining a union
union Data {
    int intValue;       // Integer variable
    float floatValue;   // Float variable
    char stringValue[20]; // Character array for string storage
};

int main() {
    // Declaring a union variable
    union Data data;

    // Assigning an integer value
    data.intValue = 10;
    printf("Integer Value: %d\n", data.intValue);

    // Assigning a float value (overwrites previous value)
    data.floatValue = 20.5;
    printf("Float Value: %.2f\n", data.floatValue);

    // Assigning a string value (overwrites previous value)
    strcpy(data.stringValue, "Hello, C!");
    printf("String Value: %s\n", data.stringValue);

    // Demonstrating memory sharing
    printf("\nMemory Size of union Data: %lu bytes\n", sizeof(data));

    return 0;  // Returning 0 indicates successful execution
}
