//
// Created by ashra on 29/06/2025.
//
#include<stdio.h>

int main()
    {
  int sum=0;
  int n;
  scanf("%d", &n);
  int arr[n];
  for(int i=0; i<n; i++)
    {
    scanf("%d", &arr[i]);
    sum=sum+arr[i];
    }
  printf("%d\n", sum);
  return 0;

  }