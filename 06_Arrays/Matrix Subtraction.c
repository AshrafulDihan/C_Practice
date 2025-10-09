//
// Created by ashra on 14/08/2025.
//
#include<stdio.h>
int main() {

    int size , i , j;

    printf("Enter the square size of matrix: ");
    scanf("%d",&size);//Here we just use square matrix for short

    int matrix1[size][size];

    printf("\nFirst metrix\n");
    for (i = 0; i<size; i++) {
        for (j= 0; j<size; j++) {
            printf("Enter the value [%d][%d]: ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
   int matrix2[size][size];
    printf("\nSecond metrix\n");
    for (i = 0; i<size; i++) {
        for (j= 0; j<size; j++) {
            printf("Enter the value [%d][%d]: ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }

   int sum[size][size];//Sum

    for (i = 0; i<size; i++) {
        for (j= 0; j<size; j++) {
           sum[i][j] = matrix1[i][j] - matrix2[i][j];//subtraction of two matrix.
        }
    }

   int multiplication[size][size];//multiplication

    for (i = 0; i<size; i++) {
        for (j= 0; j<size; j++) {
           multiplication[i][j] = matrix1[i][j] * matrix2[i][j];//multiplication of two matrix.
        }
    }

    printf("\nDifference of both arrays:\n");
    for (i = 0; i<size; i++) {
        for (j= 0; j<size; j++) {
            printf("  %d   ",sum[i][j]);
        }
        printf("\n");
    }
    printf("\n multiplication of both arrays:\n");
    for (i = 0; i<size; i++) {
        for (j= 0; j<size; j++) {
            printf("  %d   ",multiplication[i][j]);
        }
        printf("\n");
    }

return 0;
}