//
// Created by ashra on 12/08/2025.
//You can also use an array of pointers to character
//to store a list of strings as follows

#include<stdio.h>
int main() {

    int max = 4;
    char *name [] = {
        "Ashraful Dihan",
        "Hasan alam",
         "Fahim Khan",
        "Saheda Akter",
    };
int i =0;
    for (i=0; i<max ; i++) {
        printf("Value of  name is [%d] = %s \n",i+1 , name[i]);
    }

 printf("\n--------Another Way is-------\n");
// Another way

   int n =5;
    char *namee[]={"Dihan","Asif", "Nila", "Nayem", "Eathna"};
    char **ptr= namee;
    for (int j =0 ; j<n ; j++) {
        printf("Value of  name is [%d] = %s \n",j ,*ptr);
        ptr++;

    }
    return 0;

}
