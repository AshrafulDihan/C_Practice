//
// Created by ashra on 08/10/2025.
//
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");//Scan the array size
    scanf("%d",&n);

    int arr[n];
//User input the array elements
    printf("Enter the array elements: ");
    int i=0;
    while (i<n) {
        scanf("%d",&arr[i]);
        i++;
    }
//Sum of all even number
    int sum=0;
    i=0;
    while (i<n) {
        if (arr[i]%2==0) {
            sum+=arr[i];
        }
        i++;
    }
    printf("Smu of all even number is : %d",sum);
    return 0;

}