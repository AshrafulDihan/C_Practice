//
// Created by ashra on 08/10/2025.
//
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int arr[n];

    int i=0;
    while (i<n) {
        scanf("%d",&arr[i]);
        i++;
    }

    int sum=0;
    i=0;
    while (i<n) {
        if (arr[i]%2==0) {
            sum+=arr[i];
        }
        i++;
    }

    printf("%d")

}