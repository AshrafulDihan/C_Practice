//
// Created by ashra on 21/07/2025.
//
#include<stdio.h>

long long factorial(int a) {
    long long fact = 1;
    for (int i = 1; i <= a; i++) {
        fact = fact * i;
    }
    return fact;
}
int main() {

    int num;
    scanf("%d", &num);
    int ans = factorial(num);
    printf("%d\n",ans);
    return 0;
}