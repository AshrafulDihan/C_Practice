//
// Created by ashra on 21/07/2025.
//
#include<stdio.h>

int febonacci(int i)
    {
      if (i==0){
        return 0;
        }
      if(i ==1){
        return 1;
      }
    return febonacci(i-1) + febonacci(i-2);
    }

int main ()
{
  int i;
  for(i=0 ; i<10 ; i++)
    {
    printf("%d\n", febonacci(i));

    }
    return 0;

}
