//
// Created by ashra on 12/08/2025.
//

#include<stdio.h>

int main() {
    int num = 10;
    int *p;
    p=&num;
    printf("%d\n",num); // value of num == 10
    printf("%d\n",p);// address of the number variable
    printf("%d\n",&num);//address of the number variable
    printf("%d\n",&p);//address of the pointer variable
    printf("%d\n",*p); //Number = 10.;

return 0;
}