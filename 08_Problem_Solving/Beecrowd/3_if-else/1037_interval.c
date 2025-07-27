//
// Created by ashra on 24/07/2025.
//
#include<stdio.h>

int main() {
    float num1, num2;
    scanf("%f", &num1);
    if (num1>=0 && num1<=100 )
      {
        if (num1<=25) {
            printf("Intervalo [0,25]\n");
        }
        else if (num1<=50) {
            printf("Intervalo (25,50]\n");
        }
        else if (num1<=75) {
            printf("Intervalo (50,75]\n");
        }
        else {
            printf("Intervalo (75,100]\n");
        }
    }
    else {
        printf("Fora de intervalo\n");
    }
    return 0;
}