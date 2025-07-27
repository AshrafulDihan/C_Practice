//
// Created by ashra on 21/07/2025.
//
/* write a program that read 10 number
and display their sum and avarage.
 */

#include<stdio.h>
int main()
{
  int i;
  int sum=0;
  int arr[10]; //diclare array.
  printf("Enter 10 number: ");

  for(i=0; i<10; i++)
    {
      scanf("%d", &arr[i]);//reed number using loop
    }

  for(i=0; i<10; i++)
    {
    sum=sum+arr[i];// loop for sum
    }
  printf("The sum is: %d\n", sum);

  float avg;
  avg= (float)sum/10;

  printf("The average is: %.2f\n",avg);
  return 0;
}