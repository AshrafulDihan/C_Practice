//
// Created by ashra on 07/08/2025.
//
//Problem link:- https://www.spoj.com/problems/TEST/en/

#include<stdio.h>
int main() {
   int num;
    while (1) {
        scanf("%d",&num);
        if (num==42) {
            break;
        }
        printf("%d\n",num);
    }
    return 0;
}