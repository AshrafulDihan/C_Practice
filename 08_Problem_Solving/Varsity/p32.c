//
// Created by ashra on 23/06/2025.
//
/*
প্রবলেম #৩২:
ধরা যাক, সুইমিং পুলের পানির তাপমাত্রা ২০ থেকে ৩০ ডিগ্রি এর মধ্যে হলেই সাঁতার কাটতে নামা যাবে।
তাপমাত্রা ইনপুট নিবেন। প্রিন্ট করবেন নামা যাবে কিনা।
 */

#include<stdio.h>

int main(){

  int temp;
  scanf("%d", &temp);

  if (temp>=20 && temp<=30){
    printf("Yes");
   }
   else {
     printf("NO");
     }
  return 0;
}