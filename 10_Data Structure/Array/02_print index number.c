//
// Created by ashra on 08/10/2025.
//
//Write a c program that take array size N
// and print all even numbers index.

#include<stdio.h>
int main() {
    int n;
    //scan the array size
    printf("Enter array size: ");
    scanf("%d",&n);

    int arr[n];
//scan the array elements
    printf("Enter the elements: ");
    int i= 0;
    while (i<n) {
        scanf("%d",&arr[i]);
        i++;
    }
//Check even number index
    printf("The even number index: ");
    i=0;
    while (i<n) {
        if (arr[i]%2 == 0) {
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}

