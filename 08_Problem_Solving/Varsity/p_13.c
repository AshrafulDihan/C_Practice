//
// Created by ashra on 17/06/2025.
//



#include<stdio.h>

int main() {

    int first, second, third;
    float avarage;

    printf ("Enter the first match score: ");
    scanf (" %d", &first );

    printf ("Enter the second match score: ");
    scanf (" %d", &second );

    printf ("Enter the third match score: ");
    scanf (" %d", &third );

    avarage = (first + second + third ) / 3;

    printf ("\nThe avarage score of Liton Dash is %.2f \n", avarage );

    return 0 ;

}