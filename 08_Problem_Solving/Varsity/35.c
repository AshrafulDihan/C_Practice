//
// Created by ashra on 02/07/2025.
//


/*
ধরেন, আপনার ফোন এর চার্জ ৭০% বা তার বেশি হলে সে performance mode এ চলে,
তখন প্রতি % চার্জে ৫ মিনিট চলে। ২০% থেকে ৭০% এর মধ্যে হলে regular mode এ চলে,
তখন প্রতি % চার্জে ৮ মিনিট চলে। ২০% এর নিচে গেলে Battery saving mode এ চলে যায়।
তখন প্রতি % এ ১৫ মিনিট চলে।
১% হয়ে যাওয়ার পর রিজার্ভ পাওয়ার থেকে বন্ধ হওয়ার আগে আরো ২৫ মিনিট চলে।

ইনপুট নিবেন কত % চার্জ আছে। প্রিন্ট করবেন এই ফোন কতক্ষণ চলতে পারবে।
*/
#include <stdio.h>

int main()
{
    int n, total , charge;
    scanf("%d",&n);

    if (n>=0 && n<=100) {
        if (n>69 && 101>n )
        {
            n = n-69;
            total= n*5;
            charge= total+ 695;
        }
        else if (n>19)
        {
            n = n-19;
            total= n*8;
            charge= total+ 295;
        }
        else if (n>1)
        {
            n = n-1;
            total= n*15;
            charge= total+ 25;
        }
        else if (n==1) {
            charge = 25 ;
        }

        else if (n==0) {
            charge = 0 ;
        }

        printf("%d Minute",charge);
    }

    else {
        printf("INVALID NUMBER");
    }


    return 0;
}
