//
// Created by ashra on 21/07/2025.
//

#include<stdio.h>
int isPrime(int n) {
    if (n<=1) {
        return 0;
    }
    for (int i=2; i*i<=n; i++)
        // Start from 2, go up to square root of n, because factors repeat after √n
    {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {

    int num,num2;
    int count=0;
    int sum = 0;
    printf("Enter the range(0 to 10)-");

    // %d reads number, %*s ignores 'string'
    scanf("%d %*s %d",&num, &num2);

    for (int i=num; i<=num2; i++) {
        if (isPrime(i)==1) {
            printf("%d prime\n",i);
            count++;//For how many prime number in the range
            sum +=i;
        }
        else {
            printf("%d not prime.\n",i);
        }
      //  printf("%d is %s",i, isPrime(i) ? "Prime.\n" : "Not prime.\n");
    }
    printf("Total prime number between (%dto%d)is = %d\n",num, num2,count);
    printf("Sum of Total prime number between (%dto%d)is = %d\n",num, num2,sum);
    return 0;
}
