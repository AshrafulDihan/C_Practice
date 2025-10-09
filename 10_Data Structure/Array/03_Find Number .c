//
// Created by ashra on 08/10/2025.
//
//Find a Specific Number in an Array

#include<stdio.h>
int main() {
    int n, search_num, found=0;
    printf("Enter the array size: ");
    scanf("%d",&n);

    int arr[n];
    //Take array elements
    printf("Enter %d elements: ", n);
    int i=0;
    while (i<n) {
        scanf("%d", &arr[i]);
        i++;
    }

    // Input number to search
    printf("Enter the number to search: ");
    scanf("%d",&search_num);

    //Search the number and print all indexes
    i=0;
    while (i<n) {
        if (search_num == arr[i]) {
            printf("%d Found in %d number index.\n",search_num, i);
            found = 1;
            //  break; // If we use break just showing first index.
        }
        i++;
    }
    if (found ==0) {
        printf("Not found\n");
    }
    return 0;
}
