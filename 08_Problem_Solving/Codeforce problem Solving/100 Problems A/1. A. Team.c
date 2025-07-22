//
// Created by ashra on 13/07/2025.
//

/*Codeforces problem 01
 *[[ A. Team ]]
 *
 * link : https://codeforces.com/problemset/problem/231/A
 */


#include<stdio.h>

int main()
{

    int n,a,b,c;
    int count = 0;
    int i;

    scanf("%d",&n);


    for (i=1 ; i<= n; i++) {
        scanf("%d %d %d",&a,&b,&c);
        if (a+b+c >=2)
        {
            count++;

        }
    }
    printf("%d", count);

    return 0;
}

