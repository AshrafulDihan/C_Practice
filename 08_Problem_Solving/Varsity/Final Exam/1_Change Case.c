//
// Created by ashra on 24/08/2025.
//
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str),stdin);  // easy input (not safe for huge strings, but fine for practice)

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // lowercase to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // uppercase to lowercase
        }
    }

    printf("Changed case string: %s\n", str);
    return 0;
}
