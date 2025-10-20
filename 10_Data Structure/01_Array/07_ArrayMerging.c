//
// Created by ashra on 17/10/2025.\
//

#include<stdio.h>
int main() {
    int arr1[5] = {10,20,30,40,00};
    int arr2[5] = {50,60,70,80,90};
    int merge[9];

    int k=0;
    // copy arr1
    for (int i=0; i<5; i++) {
        merge[k++]= arr1[i];
    }
    // copy arr1

    for (int i=0; i<5; i++) {
        merge[k++] = arr2[i];
    }
    //print array
    for (int i=0; i<9; i++) {
        printf("%d  ",merge[i]);
    }

    return 0;
}