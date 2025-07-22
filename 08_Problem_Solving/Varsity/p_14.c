//
// Created by ashra on 16/06/2025.
//

#include<stdio.h>

int main () {

    int banor, TLbanor, shimpanji, tlshimpanji, honuman, tlhonuman,Totalbanana, remainder, perbanana;
    printf("Enter the number of Banors: ");
    scanf("%d", &banor);
    TLbanor = banor * 11;

    printf("Enter the number of shimpanji: ");
    scanf("%d", &shimpanji);
    tlshimpanji = shimpanji * 23;

    printf("Enter the number of honuman: ");
    scanf("%d", &honuman);
    tlhonuman = honuman * 29;

    Totalbanana = TLbanor + tlshimpanji + tlhonuman;
    perbanana = Totalbanana/ 50 ;

    remainder = Totalbanana % 50 ;

    printf ("\nPer person will get %d bananas\n" , perbanana );
    printf ("Will do the Dean office %d bananas\n" , remainder );



}
