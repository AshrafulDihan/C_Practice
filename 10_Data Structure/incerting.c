//
// Created by ashra on 22/09/2025.
//

#include<stdio.h>
int main() {
    int n, i, j;
    printf("Enter the first array size: ");
    scanf("%d",&n);

    int arr[n] ;

    printf("Enter the first array elements: ");
    for (i =0 ; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int position, value;

    printf("Enter the value: ");
    scanf("%d", &value);

    printf("Enter the position: ");
    scanf("%d", &position);

    if (position<0 || position>n) {
        printf("Please enter the valid position!!");
        return 0;
    }

    for (i = n; i> position; i--) {
        arr[i] = arr[i-1];
    }

    arr[position] = value;

    printf("Now final array: ");
    for (i = 0 ; i<n+1; i++) {
        printf("%d  ",arr[i]);
    }

    return 0;
}