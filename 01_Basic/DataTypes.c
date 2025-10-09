//
// Created by ashra on 20/05/2025.
//
#include<stdio.h>

int main()
{
    char name[8]= "Dihan";
    char id[] = "251-15-516";
    float point =44.33;
    char grade = 'A';
    double pie = 3.141684563;

    printf("\n-----Your Informetions-----\nName   :%s\n"
           "ID      :%s\nPoint   :%.2f\nGrade   :%c\n\n"
           "The value of Pi is=%.6f\n ",name,id, point, grade, pie);

    return 0;
}

