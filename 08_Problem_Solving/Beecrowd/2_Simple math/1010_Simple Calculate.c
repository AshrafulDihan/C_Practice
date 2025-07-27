//
// Created by ashra on 23/07/2025.
//
#include<stdio.h>
int main() {
    int code1, unit1;
    int code2, unit2;
    float price1, price2;
    float payment;

    scanf("%d %d %f",&code1, &unit1, &price1);
    scanf("%d %d %f",&code2, &unit2, &price2);
    payment = unit1*price1+ unit2*price2;
    printf("VALOR A PAGAR: R$ %.2f\n",payment);
return 0;
}
