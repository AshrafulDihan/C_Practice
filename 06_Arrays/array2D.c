//
// Created by ashra on 14/08/2025.
//
#include<stdio.h>
int main() {
int num =3;
    int i,j;
    int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}