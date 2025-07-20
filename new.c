//
// Created by ashra on 20/07/2025.
//
//
// Created by ashra on 26/05/2025.
//
#include <stdio.h>

int main() {
    unsigned int a = 10;
    unsigned int b = 9;

    printf("a = %u, b = %u\n", a, b);

    printf("a & b  = %u\n", a & b); // and manee multiplying
    printf("a | b  = %u\n", a | b); // or mane ekta on hoile ei on
    printf("a ^ b  = %u\n", a ^ b); // exor er jonno same 2 ta bimnary number same hole output 1 other wise 0
    printf("~a     = %u\n", ~a);
    printf("b << 1 = %u\n", b << 1);
    printf("b >> 1 = %u\n", b >> 1);

    return 0;
}
