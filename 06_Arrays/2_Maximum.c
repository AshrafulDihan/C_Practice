//
// Created by ashra on 22/07/2025.
//
/*
  Write a program that takes some nuimber
  and display maximum

 */

#include<stdio.h>

int main()
{

  int n,i;
  printf("How many numbers : ");
  scanf("%d",&n);
  int num[100];

  for (i=0; i<n; i++)
    {
      scanf("%d",&num[i]);
    }

  int max = num[0];
  for (i=0; i<n; i++)
  {
    if(max<num[i])
      {
        max= num[i];
      }
  }
  printf("The maximum number is: %d\n",max);

return 0;

}