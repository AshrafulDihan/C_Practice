//
// Created by ashra on 08/08/2025.
//
#include <stdio.h>
#include <string.h>

// Function example
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Variable declarations
    int i, j, n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    char str[100] = "Hello";
    int choice;

    // Single loop example
    printf("Single for loop: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Nested loop example (multiplication table)
    printf("Nested for loop:\n");
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= 3; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    // While loop example
    printf("While loop: ");
    i = 0;
    while(i < n) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    // Do-while loop example
    printf("Do-while loop: ");
    i = 0;
    do {
        printf("%d ", arr[i]);
        i++;
    } while(i < n);
    printf("\n");

    // String example
    printf("Original string: %s\n", str);
    strcat(str, " World"); // String concat
    printf("After strcat: %s\n", str);

    // If-else example
    if(n > 3) {
        printf("n is greater than 3\n");
    } else {
        printf("n is not greater than 3\n");
    }

    // Switch-case example
    printf("Enter a choice (1-3): ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Choice is 1\n");
        break;
        case 2:
            printf("Choice is 2\n");
        break;
        case 3:
            printf("Choice is 3\n");
        break;
        default:
            printf("Invalid choice\n");
    }

    // Function call example
    printf("Printing array using function: ");
    printArray(arr, n);

    return 0;
}


#include <stdio.h>
#include <string.h>
#include <math.h>   // For sqrt, pow
#define MAX 100     // Macro example

struct Student {
    char name[50];
    int age;
};

int main() {
    // Variables
    int i, j, n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
    char str[100];
    int choice;

    // String input
    printf("Enter a string: ");
    scanf(" %[^\n]", str); // takes input with spaces
    printf("You entered: %s\n", str);

    // Single for loop
    printf("Array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Nested loop (Matrix print)
    printf("Matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // While loop
    printf("While loop: ");
    i = 0;
    while(i < n) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    // Do-while loop
    printf("Do-while loop: ");
    i = 0;
    do {
        printf("%d ", arr[i]);
        i++;
    } while(i < n);
    printf("\n");

    // Break & Continue
    printf("Break & Continue example: ");
    for(i = 1; i <= 5; i++) {
        if(i == 3) continue; // skip 3
        if(i == 5) break;    // stop at 4
        printf("%d ", i);
    }
    printf("\n");

    // If-else
    if(n > 3) {
        printf("n is greater than 3\n");
    } else {
        printf("n is not greater than 3\n");
    }

    // Switch-case
    printf("Enter choice (1-3): ");
    scanf("%d", &choice);
    switch(choice) {
        case 1: printf("Choice 1 selected\n"); break;
        case 2: printf("Choice 2 selected\n"); break;
        case 3: printf("Choice 3 selected\n"); break;
        default: printf("Invalid choice\n");
    }

    // Macro usage
    printf("MAX = %d\n", MAX);

    // Math functions
    printf("Square root of 16: %.2f\n", sqrt(16));
    printf("2 to the power 3: %.2f\n", pow(2, 3));



    return 0;
}
