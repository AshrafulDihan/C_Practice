//
// Created by ashra on 24/07/2025.
//
#include<stdio.h>
int main() {

    int num, year, month , days,rimainder, rim2;
    scanf("%d",&num);

    year = num/365;//calculating Yeaar

    rimainder = num%365;
    month = rimainder/30;//calculating month

    rim2 = rimainder%30;//for day

    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",rim2);

}