//
// Created by ashra on 14/10/2025.
//

// Program to insert an element at a specific position in an array

#include<stdio.h>

int main() {
    int n;
    printf("Enter the array size: ");
    scanf("%d",&n);

    // Declare array with one extra space for the new element
    int arr[n+1];

    //scan the elements
    printf("Enter the array elements: ");
    int i =0;
    while (i<n) {
        scanf("%d",&arr[i]);
        i++;
    }

    // Scan the value to insert and the position where it should be inserted
    int position, value;
    printf("Enter the number you can insert: ");
    scanf("%d",&value);
    printf("Enter the position you can insert: ");
    scanf("%d",&position);

    // Validate position (position must be between 0 and n)
    if (position>n || position<0) {
        printf("Please enter the valid position!!\n");
        return 0;
    }

    // Shift all elements from the position to the right
    // Start from the last element and move backwards to avoid overwriting data
    i = n;
    while (i>position) {
        arr[i] = arr[i-1];
        i--;
    }
    /*
   // we also can write that
    i = n-1;
    while(i>position){
          arr[i+1] = arr[i];
          i--;
         }
     */
    arr[position] = value;
    n++;

    printf("Final array: ");
    i=0;
    while (i<n) {
        printf("%d  ",arr[i]);
        i++;
    }
    return 0;
}