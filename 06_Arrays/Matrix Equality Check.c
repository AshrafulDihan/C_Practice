//
// Created by ashra on 14/08/2025.
//Write a program in C to accept two matrices and
// heck whether they are equal.

#include<stdio.h>
int main() {

    int r1,r2,c1,c2 , i , j;
    int flag =1;

    printf("Input Rows and Columns of the 1st matrix: ");
    scanf("%d %d",&r1,&c1);

    printf("Input Rows and Columns of the 2nd matrix: ");
    scanf("%d %d",&r2,&c2);

    int matrix1[r1][c1];
    int matrix2[r2][c2];

    printf("\nFirst metrix\n");
    for (i = 0; i<r1; i++) {
        for (j= 0; j<c1; j++) {
            printf("Enter the value [%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("\nSecond metrix\n");
    for (i = 0; i<r2; i++) {
        for (j= 0; j<c2; j++) {
            printf("Enter the value [%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }
    //Display First matrix
    printf("The first matrix is :\n");
    for (i=0; i<r1; i++) {
        for (j=0; j<c1; j++) {
            printf("  %d  ",matrix1[i][j]);
        }
        printf("\n");
    }
    //Display Second matrix
    printf("The Second matrix is :\n");
    for (i=0; i<r2; i++) {
        for (j=0; j<c2; j++) {
            printf("  %d  ",matrix2[i][j]);
        }
        printf("\n");
    }
    if (r1==r2 && c1==c2) {
        printf("The matrix can be compared: \n");
        for (i=0; i<r1; i++) {
            for (j=0; j<c2; j++) {
                if (matrix1[i][j] != matrix2[i][j]) {
                    flag =0;
                    break;
                }
            }
        }
    }
    else {
        printf("The matrix can not be compared. \n");
        return 0;
    }
    if (flag==1) {
        printf("Two matrix are equal.\n\n");
    }
    else {
        printf("But, two matrix are not equal.\n\n");
    }

    return 0;
}