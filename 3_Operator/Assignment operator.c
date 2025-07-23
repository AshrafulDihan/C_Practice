//
// Created by ashra on 26/05/2025.
//
#include <stdio.h>

int main() {
    int x = 10;

    printf("Main value: x = %d\n", x);
    printf("After x += 3: x = %d\n",x += 3);
    printf("After x -= 2: x = %d\n",  x -= 2);
    printf("After x *= 4: x = %d\n", x *= 4);
    printf("After x /= 3: x = %d\n", x /= 3);
    printf("After x %%= 3: x = %d\n", x %= 3);
    printf("After x ^= 3: x = %d\n", x ^= 3);

    return 0;
}