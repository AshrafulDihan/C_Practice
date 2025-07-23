//
// Created by ashra on 22/06/2025.
//

#include<stdio.h>
int main(){

  double num1, num2;
  char oper;

  printf ("Enter any operator (+,-,*,/): ");
  scanf("%c", &oper);

  printf("Enter 1st number: ");
  scanf(" %lf", &num1 );

  printf("Enter 2nd number: ");
  scanf(" %lf", &num2 );



  switch(oper){

    case '+':
      printf("%.2f+%.2f = %.2f", num1, num2 , num1+num2 );
      break;
    case '-':
      printf(" %.2f - %.2f = %.2f", num1 , num2, num1-num2);
      break;

    case '*':
      printf("%.2f*%.2f = %.2f", num1, num2 , num1*num2 );
    break;
    case '/':
      printf(" %lf / %lf = %.2f", num1 , num2, num1/num2);
    break;
    default:
      printf("Not a valid operator!!");
  }

 return 0;



}