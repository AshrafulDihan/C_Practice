//
// Created by ashra on 03/07/2025.
//

#include<stdio.h>

int main() {
    char str[100];
    int i;
    int count=1;
    scanf(" %s", str);

    for ( i =1 ; str[i]!='\0' ; i++) {   //str[i] != '\0'	Go until end of string (excluding \0)
        if (str[i]==str[i-1]) {     //str[i-1] == the character just before the current one
            count++;
            if (count >= 7) {
                printf("YES");
                return 0;
            }

        }
        else {
            count = 1;
        }

    }
    printf("NO");
    return 0;

}

