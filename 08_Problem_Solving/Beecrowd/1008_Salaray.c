//Problem link:--https://judge.beecrowd.com/en/problems/view/1008

#include<stdio.h>
int main()
{

    int num, workH;
    float salary;

    scanf("%d %d %f",&num, &workH, &salary);
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",salary*workH);
    return 0;

}
