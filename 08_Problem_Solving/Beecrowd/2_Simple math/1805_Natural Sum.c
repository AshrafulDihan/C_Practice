//
// Created by ashra on 24/07/2025.
//
#include<stdio.h>
int main() {
    long long num1, num2,i;
    long long sum =0;
    scanf("%lld %lld",&num1,&num2);

    for (i = 1; i<=num2; i++) {
        sum= sum+num1;
        num1++;
        if (num1>num2) {
            break;
        }
    }
    printf("%lld\n",sum);
    return 0;
}
