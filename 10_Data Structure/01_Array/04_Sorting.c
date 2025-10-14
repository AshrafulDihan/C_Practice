//
// Created by ashra on 13/10/2025.
//
#include<stdio.h>

int main() {
    int arrSize, temp;
    //Scan the array size
    printf("Enter the array size: ");
    scanf("%d",&arrSize);

    // Check if the entered array size is zero or negative.
    if (arrSize<=0) {
        printf("Invalid array size!!\n");
        return 0; // stop program safely
    }


    int arr[arrSize];

    //Scan array elements
    printf("Enter the array elements: ");
    int i = 0;
    while (i<arrSize) {
        scanf("%d",&arr[i]);
        i++;
    }
//Sort descending order
    for (int j=0; j<arrSize; j++) {
        i =0;
        while (i < arrSize-1) {
            if (arr[i] < arr[i+1]) {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            i++;
        }
    }

    //Print Descending order
    printf("Descending order: ");
    i=0;
    while (i<arrSize) {
        printf("%d  ",arr[i]);
    i++;
    }
    printf("\n");

    //Sort ascending Order
    int j=0;
    while (j<arrSize) {
        i=0;
        while (i<arrSize-1) {
            if (arr[i] > arr[i+1]) {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            i++;
        }
        j++;
    }

//Print Ascending Order
    printf("Ascending order: ");
    i=0;
    while (i<arrSize) {
        printf("%d ",arr[i]);
        i++;
    }

    printf("\n");

    return 0;
}