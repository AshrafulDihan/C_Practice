//
// Created by ashra on 22/06/2025.
//
#include<stdio.h>

int main(){

  int num, i;

  printf("Enter any number: ");
  scanf("%d", &num);

  for (i=1 ; i<=10 ; i++){
    printf("%d X %d = %d\n", num , i , num*i);
    }
  return 0;

  }