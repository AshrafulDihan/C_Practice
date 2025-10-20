//
// Created by ashra on 12/08/2025.
//

#include<stdio.h>
int main() {
    int var;
    int *ptr;
    int **pptr;
    var =100;

    ptr = &var;
    pptr = &ptr;


    printf("Value of var = %d\n",var);//100
    printf("Address of var = %x\n",&var);//address of var
    printf("Value of ptr = %d\n",*ptr); //100
    printf("Address of ptr = %x\n",ptr);//address of var store in ptr
    printf("Address of pptr = %x\n",pptr); //address of pptr
    printf("Value of pptr = %d\n",**pptr);//100


    *ptr = 199;//Go to the memory location stored inside p and access the value there"
    //Look at the address stored in ptr.
    // Go to that address
    // Store the value - 199
    // in that location
    printf("\nNew value of var = %d\n", var);

    return 0;
}
