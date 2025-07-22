//
// Created by ashra on 23/06/2025.
//
//#পরবলেম #৩১:
//একটা small letter input নিবেন, প্রিন্ট করবেন সেটা vowel নাকি consonant

#include<stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch>'a'&& ch<'z') {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        { printf("Vowel");
        }
        else {
            printf ("Consonent");
        }
    }
    else {
        printf ("Wrong input");
    }

    return 0;
}