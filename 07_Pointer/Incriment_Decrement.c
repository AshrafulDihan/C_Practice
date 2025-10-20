//
// Created by ashra on 12/08/2025.
//
#include<stdio.h>
int main(){

    int n=3;   // Number of elements in the array
    int var[]={10 , 100 ,200 };  // Integer array
    int i, *ptr;  // Loop variable 'i' and integer pointer 'ptr'
    ptr= var;  // Point 'ptr' to the first element of 'var'

    printf(".........Increment..........\n");
    for (i=0; i<n;i++) {
        printf("Address of var[%d] is = %x\n",i,ptr);
        printf("Value of var[%d] is = %d\n",i,*ptr);
        ptr++;  // moves the pointer to the next integer in memory.
    }
    printf("\n.........Decrement..........\n");

    ptr= &var[n-1]; // Point to the last element (var[2])
    for (i=n; i>0;i--) {
        printf("Address of var[%d] is = %x\n",i,ptr);
        printf("Value of var[%d] is = %d\n",i,*ptr);
        ptr--; // Move pointer to the previous integer
    }
    return 0;
  }