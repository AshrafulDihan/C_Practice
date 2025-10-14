//
// Created by ashra on 14/10/2025.
//

// Program to delete an element by value from an array

#include<stdio.h>

int main() {
    int n;
    printf("Enter the array size: ");
    scanf("%d",&n);

    // Declare array
    int arr[n];

    //scan the elements
    printf("Enter the array elements: ");
    int i =0;
    while (i<n) {
        scanf("%d",&arr[i]);
        i++;
    }

    // Scan the value to delete
    int position=-1, value; // position = -1 means not found yet
    printf("Enter the number you can delete: ");
    scanf("%d",&value);

    // Find the position (index) of the given value
    i=0;
    while (i<n) {
        if (arr[i]==value) {
            position = i; // store index where value is found
            break;         // stop after first match
        }
        i++;
    }

    // If value not found, print message and exit
    if (position == -1) {
        printf("Value not found in the array!\n");
        return 0;
    }

    // Shift all elements left from the position
    i = position;
    while (i<n-1) {
        arr[i] = arr[i+1];
        i++;
    }

    // Print the final array after deletion
    printf("Final array: ");
    i=0;
    while (i<n-1) {
        printf("%d  ",arr[i]);
        i++;
    }
    return 0;
}
