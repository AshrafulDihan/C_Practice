//
// Created by ashra on 14/07/2025.
//
#include<stdio.h>

int main()
{
  int i , j;
  char str[101];
  int count=0;


  scanf("%s", str);

  for( i=0 ; str[i] != '\0'; i++)
    {
      int repeat =0;

     for( j=0; j<i ; j++)
      {
        if (str[i]== str[j])
          {
            repeat =1;
        break;
          }
      }

      if (repeat == 0)
        {
        count++;
        }
    }

    if (count%2 == 0)
      {
      printf("CHAT WITH HER!\n");
      }
      else
      {
      printf("IGNORE HIM!\n");
      }
  }