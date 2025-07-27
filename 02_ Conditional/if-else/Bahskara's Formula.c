//
// Created by ashra on 24/07/2025.
//
#include <stdio.h>
#include<math.h>
int main() {
    double a,b,c,x,r1 ,r2;
    scanf("%lf %lf %lf",&a, &b, &c);
    if (a==0 || b<c) {
        printf("Impossivel calcular\n");
    }
    else {
        x = sqrt((b*b)-(4*a*c));
        r1= (-b+x) /(2*a);
        r2= (-b-x)/(2*a);
        printf("R1 = %.5f\n",r1);
        printf("R2 = %.5f\n",r2);
    }
    return 0;
}
