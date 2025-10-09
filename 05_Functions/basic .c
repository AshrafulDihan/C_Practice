//
// Created by ashra on 16/08/2025.
//
#include<stdio.h>

float add(float a, float b) {
    return a+b;
}
//Print wirth function
void sum(int a, int b){
  int x=a+b;
  printf("The sum is = %d",x);

}
int main() {
    float summ;
    summ = add(4.4, 5.9);
    printf("%.2f\n",summ);
    //direct call the function call in printf
    printf("%.2f\n",add(4.5,23.56));

    int a= 10,b = 20;
    sum(a,b);
}

