//
// Created by ashra on 22/06/2025.
//
#include<stdio.h>

int main(){
    char ch;
   printf("Enter any later: ");
   scanf ("%c", &ch);

    if ( ch >= 'a' && ch <='z' || ch>='A' && ch <='Z')
    {
        if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'|| ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O'|| ch == 'U')
        {
            printf("%c is Vowel.\n", ch);
        }
        else {
            printf("%c is conconent.\n", ch);
        }
    }

    else
    {
        printf("Wrong input!!");
    }
 return 0;
}