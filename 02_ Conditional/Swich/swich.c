//
// Created by ashra on 22/06/2025.
//
// swich kkeyword : swich , case, break , default
// Write a program that read a digit and displey its spelling

#include<stdio.h>
int main() {
  int digit;

  printf ("Enter a digit(0-9): ");
  scanf("%d", &digit);
  //scanf("%c", ...) always reads a character — number, letter, symbol, All.
  // c=so we use char;

  // char ch;
  // scanf(" %c", &ch); // space before %c is important!
  // // if (ch >= '0' && ch <= '9') {
  //   switch (ch)

  if ( digit >= 0 && digit <= 9)
    {
    switch(digit) {
      case 0:
        printf("Zero\n");
      break;

      case 1:
        printf("One\n");
      break;

      case 2:
        printf("Two\n");
      break;

      case 3:
        printf("Three\n");
      break;

      case 4:
        printf("Four\n");
      break;

      case 5:
        printf("FIVE\n");
      break;

      case 6:
        printf("Six\n");
      break;

      case 7:
        printf("Seven\n");
      break;

      case 8:
        printf("Eight\n");
      break;

      case 9:
        printf("Nine\n");
      break;
    }
  }else{
    printf("Enter valid digit!!");
  }

  return 0;
}