//
// Created by ashra on 22/07/2025.
//

#include<stdio.h>

int main()
    {
  int n , i ;

  printf("How meni fibonacci numbers : ");
  scanf("%d",&n );
  // Declare an array to store the Fibonacci numbers (max 30 for now)
  int arr[30];
  // Initialize the first two numbers in the sequence
  arr[0]=0;
  arr[1]=1;

  for(i=2; i<n; i++)    // Generate the rest of the Fibonacci sequence up to n terms
    {
     arr[i]= arr[i-1] + arr[i-2];
    }
    printf("\n");
   // Print all Fibonacci numbers
  for(i=0; i<n; i++)
    {
      printf("%d ",arr[i]);
    }
    return 0;
}



