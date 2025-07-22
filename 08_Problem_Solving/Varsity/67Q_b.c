//
// Created by ashra on 29/06/2025.
//
#include<stdio.h>

int main()
{
    float A, B,C, D, total, loss;

    scanf("%f  %f %f  %f", &A, &B, &C, &D);

    total= (A+B+C);
    loss = total*(D/100.0);

    printf("Total: %.2f", total-loss);

    return 0;
}