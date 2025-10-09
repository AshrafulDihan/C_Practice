//
// Created by ashra on 28/07/2025.
//
#include<stdio.h>
#include<string.h>

int main()
{
    int num,i,length;
    scanf("%d",&num);
    char name[101];

    for (i =0 ; i<num;i++) {
        scanf("%s",name);
        length= strlen(name);// Get the length of the word

           if (length>10) {
            printf("%c%d%c\n",name[0],length-2 ,name[length-1]);
           }
           else {
            printf("%s\n",name);
           }

        }
    return 0;

  }