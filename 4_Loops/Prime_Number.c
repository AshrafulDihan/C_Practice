//
// Created by ashra on 23/06/2025.
//
#include<stdio.h>
int main(){

  int num, i, count= 0;

  printf ("Enter a number:");
  scanf("%d", &num);

    if (num>2) {

      for (i=2 ; i<num ; i++) {
        if (num%i==0) {
          count++;
          break;
        }
      }

        if (count==0) {
          printf("%d is a prime number.\n", num);
        }
        else {
          printf("%d is prime number.\n", num);
         }
       else {
        printf("%d is prime number.\n", num);
      }
      }

    }


