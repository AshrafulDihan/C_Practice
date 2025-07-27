//
// Created by ashra on 27/07/2025.
//
#include<stdio.h>
int main() {
    int num,i;
    int x=0;
    char operation[4];
    scanf("%d",&num);
    // Loop through each operation
    for (i=0; i<num;i++) {
        scanf("%s",operation);// Read the operation string
        if (operation[0] =='+' || operation[2] =='+') {
            x=x+1;
        }
        else{
            x= x-1;
        }
    }
    printf("%d\n",x);
    return 0;
}