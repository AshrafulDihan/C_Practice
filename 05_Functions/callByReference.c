//
// Created by ashra on 17/08/2025.
//
#include<stdio.h>

// Function to modify values of two integers using pointers

void modifyValue(int *x, int *y){
    *x = 10;// Change the value of a (pointed by x) to 10
    // *y means the value stored at address y
    *y= 34;
}

int main() {
    int a =40;
    int b = 20;
    // Call function modifyValue and pass addresses of a and b
    modifyValue(&a , &b);

    printf("a= %d, b =%d\n",a ,b);
    return 0;
}