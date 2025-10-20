//
// Created by ashra on 20/10/2025.
//

#include<stdio.h>
int main(){
    int k,n,w,i,y;
    // Take input: cost of first banana (k),
    // money he has (n), number of bananas (w)
    scanf("%d %d %d",&k, &n, &w);
    int sum=0;// total cost for all bananas

    // Calculate total cost of buying w bananas
    // Cost of i-th banana = i * k

    for (i=1; i<=w; i++) {
        y=k*i;
        sum = sum+y;
    }
    // If the soldier already has enough money, he doesn’t need to borrow
    if (sum<n) {
        printf("0\n");
    }
    else {
        // Otherwise, calculate how much more money he needs
        sum = sum-n;
        printf("%d\n",sum);
    }
    return 0;
}
