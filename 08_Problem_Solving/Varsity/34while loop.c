//
// Created by ashra on 02/07/2025.
//

/*
 *১ থেকে ৯৯৯ এর মধ্যে একটা সংখ্যা ইনপুট দিবে।
 *আপনাকে বলতে হবে ইনপুট দেওয়া সংখ্যায় কয়টা ডিজিট আছে।
*/
#include <stdio.h>

int main()
{
    int A;
    scanf("%d",&A);

    int count = 0;

    while (A>0)  // continue if a>0
    {
        count++;
        A= A/10;  // removing last degit of A. Ais intiger.
    }
    printf("%d",count);
    return 0;
}
