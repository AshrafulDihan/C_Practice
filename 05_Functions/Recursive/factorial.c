//
// Created by ashra on 24/08/2025.
//
#include<stdio.h>

long long factorial(int a) {
if (a == 0 || a == 1) {
    return 1;
}
    return a * factorial(a-1);
}
int main() {

    int num;
    scanf("%d", &num);
    long long ans = factorial(num);
    printf("%lld\n",ans);
    return 0;
}