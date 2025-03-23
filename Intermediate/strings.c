// Strings in C
// This program demonstrates string declaration, input, output, and basic string functions.

#include <stdio.h>   // Standard Input-Output library
#include <string.h>  // Library for string functions

int main() {
    char str1[50];  // Declaring a character array (string)
    char str2[] = "Hello, C!";  // Initializing a string

    // Taking string input using scanf()
    printf("Enter a string (without spaces): ");
    scanf("%s", str1);  // Note: scanf() cannot take spaces in input

    // Displaying the entered string
    printf("\nYou entered: %s\n", str1);

    // Using strcpy() to copy one string to another
    char copy[50];
    strcpy(copy, str1);
    printf("Copied string: %s\n", copy);

    // Using strcat() to concatenate strings
    strcat(str1, " is awesome!");
    printf("After concatenation: %s\n", str1);

    // Using strlen() to find string length
    printf("Length of str2: %lu\n", strlen(str2));

    // Using strcmp() to compare strings
    if (strcmp(str1, str2) == 0) {
        printf("Both strings are equal.\n");
    } else {
        printf("Strings are different.\n");
    }

    return 0;  // Returning 0 indicates successful execution
}
