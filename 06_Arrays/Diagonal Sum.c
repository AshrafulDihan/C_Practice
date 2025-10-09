//
// Created by ashra on 14/08/2025.
//
#include<stdio.h>
int main() {
    int size , i , j;
    int sumR =0;
    int sumL =0;

    printf("Enter the square size of matrix: ");
    scanf("%d",&size);//Here we just use square matrix for short
    int matrix[size][size];

    for (i = 0; i<size; i++) {
        for (j= 0; j<size; j++) {
            printf("Enter the value [%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for (i = 0; i<size; i++) {
        for (j= 0; j<size; j++) {
            if (i+j==size-1) {//Right diagonal condition: i + j == n - 1,
                sumR = sumR +matrix[i][j];
            }
            if (i==j) {// Left diagonal condition: i == j
                sumL = sumL +matrix[i][j];
            }
        }
    }
    printf("Right diagonal sum = %d\n",sumR);
    printf("Left diagonal sum = %d\n",sumL);
    return 0;
}