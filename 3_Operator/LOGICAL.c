//
// Created by ashra on 26/05/2025.
//
#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 10;

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    printf("(a == c) && (b > a) : %d\n", (a == c) && (b > a));   // Logical AND
    printf("(a == c) || (b < a) : %d\n", (a == c) || (b < a));   // Logical OR
    printf("!(a == b)           : %d\n", !(a == b));             // Logical NOT

    return 0;
}
