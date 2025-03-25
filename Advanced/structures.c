// Structures in C
// This program demonstrates defining, initializing, and using structures.

#include <stdio.h>  // Standard Input-Output library
#include <string.h> // Library for string functions

// Defining a structure for a Student
struct Student {
    int roll_no;       // Integer to store roll number
    char name[50];     // Character array to store name
    float marks;       // Float to store marks
};

int main() {
    // Declaring a structure variable
    struct Student student1;

    // Assigning values to structure members
    student1.roll_no = 101;
    strcpy(student1.name, "Ashu");  // Using strcpy() to copy string
    student1.marks = 92.5;

    // Printing structure details
    printf("Student Details:\n");
    printf("Roll No: %d\n", student1.roll_no);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks);

    // Array of structures
    struct Student students[2] = {
        {102, "Rahul", 88.0},
        {103, "Sneha", 95.5}
    };

    printf("\nStudent Records:\n");
    for (int i = 0; i < 2; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n",
               students[i].roll_no, students[i].name, students[i].marks);
    }

    return 0;  // Returning 0 indicates successful execution
}
