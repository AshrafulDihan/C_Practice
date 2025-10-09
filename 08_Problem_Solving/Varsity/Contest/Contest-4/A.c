//
// Created by ashra on 06/08/2025.
//
//Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1012

#include<stdio.h>
int main() {
    int v, t;
    // Start a loop that continues as long as
    // two integers are successfully input
    while (scanf("%d %d", &v, &t)==2) {
        printf("%d\n",2*v*t);
    }
    return 0;
}