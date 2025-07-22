//
// Created by ashra on 23/06/2025.
//
/*
প্রবলেম #৩৪:
১ থেকে ৯৯৯ এর মধ্যে একটা সংখ্যা ইনপুট দিবে। আপনাকে বলতে হবে ইনপুট দেওয়া সংখ্যায় কয়টা ডিজিট আছে।
 */
#include<stdio.h>

int main()
{

  int num, i ,count = 1;// num = 77

    scanf("%d", &num);

  for (i=10; i<=num; i = i*10){
    if (num < i)  // check 75<10 ?
        break; // if true break
        count++; // if num < i = true ,,, count update
    }
    printf("Number of digits: %d\n", count);
return 0;

}