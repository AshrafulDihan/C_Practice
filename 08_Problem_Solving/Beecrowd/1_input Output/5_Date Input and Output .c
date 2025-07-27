//
// Created by ashra on 23/07/2025.
//
#include<stdio.h>
int main()
{
    int dd,yy,mm;
    scanf("%d/%d/%d", &dd , &mm , &yy);
     printf("%02d/%02d/%02d\n",mm,dd,yy);
     printf("%02d/%02d/%02d\n",yy,mm,dd);
     printf("%02d-%02d-%02d\n",dd,mm,yy);

    return 0;
}