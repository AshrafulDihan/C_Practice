#include<stdio.h>
int main() {

    float num, earned, total;
    int percent;
    scanf("%f",&num);

    if (num<=400) {
        percent=15;
    }

    else if (num<=800) {
        percent=12;
    }
    else if (num<=1200) {
        percent=10;
    }
    else if (num<=2000) {
        percent=7;
    }
    else {
        percent=4;
    }

    earned = num*percent/100.0;
    total = num + earned;
    printf("Novo salario: %.2f\n",total);
    printf("Reajuste ganho: %.2f\n",earned);
    printf("Em percentual: %d %%\n", percent);
    return 0;
}