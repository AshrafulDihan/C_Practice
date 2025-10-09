//
// Created by ashra on 07/08/2025.
//
//Problrm link: https://acm.timus.ru/problem.aspx?space=1&num=1068
#include<stdio.h>
int main() {
    int num,i;
    long long int sum = 0;

    scanf("%d",&num);

    if (num>=1) {
        for (i = 1; i<=num; i++) {
            sum+=i;
        }
    }
    else {
        for (i= num; i<=1; i++) {
            sum+=i;
        }
    }
    printf("%lld\n",sum);
    return 0;
}