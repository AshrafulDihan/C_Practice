//
// Created by ashra on 24/08/2025.
//
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a sentence: ");
    gets(str);  // simple input

    int i = 0, words = 0;
    int inWord = 0; // flag to check if we are inside a word

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (inWord == 0) { // new word starts
                words++;
                inWord = 1;
            }
        } else {
            inWord = 0; // space ends a word
        }
        i++;
    }

    printf("Number of words: %d\n", words);
    return 0;
}
