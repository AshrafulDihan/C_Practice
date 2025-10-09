//
// Created by ashra on 30/07/2025.
//

#include<stdio.h>
int main() {
    int num,sum,x,y,i;
    scanf("%d",&num);
    int arr[num];
    for (i=0; i<num; i++) {
        scanf("%d",&arr[i]);
        x= arr[i]/10;
        y=arr[i]%10;
        sum = x+y;
        printf("%d\n",sum);
    }
    return 0;
}