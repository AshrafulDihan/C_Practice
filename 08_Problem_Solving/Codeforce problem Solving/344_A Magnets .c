//
// Created by ashra on 30/07/2025.
//

#include<stdio.h>
int main()
{
    int n,i;
    int count =0;
    scanf("%d",&n);
    int arr[n];

    for ( i = 0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++) {
        if (arr[i]!=arr[i-1]) {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
