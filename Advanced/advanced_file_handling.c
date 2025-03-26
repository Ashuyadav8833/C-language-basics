// Advanced File Handling in C
// This program demonstrates reading, writing, and appending in a file.

#include <stdio.h>  // Standard Input-Output library
#include <stdlib.h> // Library for exit function

int main() {
    FILE *file;
    char text[100];

    // Writing to a file
    file = fopen("data.txt", "w");  // Open file in write mode
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fprintf(file, "This is the first line in the file.\n");
    fprintf(file, "Learning advanced file handling in C.\n");
    fclose(file);
    printf("Data successfully written to data.txt\n");

    // Appending to the file
    file = fopen("data.txt", "a");  // Open file in append mode
    if (file == NULL) {
        printf("Error opening file for appending!\n");
        return 1;
    }
    fprintf(file, "This is an appended line.\n");
    fclose(file);
    printf("New data successfully appended to data.txt\n");

    // Reading from the file
    file = fopen("data.txt", "r");  // Open file in read mode
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("\nReading from the file:\n");
    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text);
    }
    fclose(file);

    return 0;  // Returning 0 indicates successful execution
}
