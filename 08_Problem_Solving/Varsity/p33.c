//
// Created by ashra on 23/06/2025.
//
/*
প্রবলেম #৩৩:
একটা বছর ইনপুট নিবেন, সেটা লিপ ইয়ার কিনা প্রিন্ট করবেন।
কোন বছর ৪ দিয়ে ভাগ গেলে লিপ ইয়ার তবে ১০০ দিয়ে গেলে আবার লিপ ইয়ার না।
কিন্তু ৪০০ দিয়ে গেলে আবার লিপ ইয়ার।
 */
#include<stdio.h>

int main(){

    int num;
    scanf("%d", &num);

    if (num % 4 == 0 && num % 100 == !0 || num % 400  == 0 ) {
        printf("Leap year\n");
    }
    else {
        printf("Not Leap year\n");
    }

    return 0;
}