// Bit Manipulation in C
// This program demonstrates bitwise operators like AND, OR, XOR, NOT, and bit shifting.

#include <stdio.h>  // Standard Input-Output library

int main() {
    unsigned int a = 5, b = 9; // Binary: a = 0101, b = 1001

    // Bitwise AND (&)
    printf("a & b = %d\n", a & b); // 0101 & 1001 = 0001 (1)

    // Bitwise OR (|)
    printf("a | b = %d\n", a | b); // 0101 | 1001 = 1101 (13)

    // Bitwise XOR (^)
    printf("a ^ b = %d\n", a ^ b); // 0101 ^ 1001 = 1100 (12)

    // Bitwise NOT (~)
    printf("~a = %d\n", ~a);  // Inverts all bits (two’s complement representation)

    // Left Shift (<<)
    printf("b << 1 = %d\n", b << 1); // 1001 << 1 = 10010 (18)

    // Right Shift (>>)
    printf("b >> 1 = %d\n", b >> 1); // 1001 >> 1 = 0100 (4)

    return 0;  // Returning 0 indicates successful execution
}
