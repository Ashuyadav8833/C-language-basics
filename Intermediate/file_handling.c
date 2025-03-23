// File Handling in C
// This program demonstrates file writing and reading operations.

#include <stdio.h>   // Standard Input-Output library
#include <stdlib.h>  // Library for exit function

int main() {
    FILE *file;  // File pointer declaration
    char text[100];

    // Writing to a file
    file = fopen("example.txt", "w");  // Open file in write mode
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter text to write to the file: ");
    fgets(text, sizeof(text), stdin);  // Read input with spaces
    fprintf(file, "%s", text);  // Write to file

    fclose(file);  // Close the file after writing
    printf("Text successfully written to example.txt\n");

    // Reading from a file
    file = fopen("example.txt", "r");  // Open file in read mode
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nReading from the file:\n");
    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text);  // Print file content
    }

    fclose(file);  // Close the file after reading
    return 0;  // Returning 0 indicates successful execution
}
