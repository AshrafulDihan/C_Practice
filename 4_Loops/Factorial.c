//
// Created by ashra on 23/06/2025.
//
 #include<stdio.h>

int main()
    {

  int i, num ;
    long long fact = 1;
  // // Use unsigned long long to handle large factorial values

  printf ("Enter a digit: " );
  scanf("%d",&num);

  for(i=1; i<=num ; i++){
    fact = fact*i;
    }
    printf("Factorial of %d is %llu\n", num , fact );

    return 0;

  }