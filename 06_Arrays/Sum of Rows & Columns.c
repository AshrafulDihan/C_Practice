//
// Created by ashra on 14/08/2025.
//
#include<stdio.h>
int main() {
    int n;
    printf("Enter the squer matrix size: ");
    scanf("%d",&n);
    int i,j;
    int matrix[n][n];

    for (i=0; i<n ; i++) {
        for (j=0; j<n; j++) {
            printf("Enter the the element of [%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    //sum of row
    for (i=0; i<n; i++) {
        int sumRow =0;
        for (j=0; j<n ; j++) {
            sumRow+=matrix[i][j];
        }
        printf("Sum of the row %d is = %d\n",i+1,sumRow);
    }
    printf("\n");
    //For Column
    for (j=0 ; j<n ; j++) {
        int sumColumn=0;
        for (i=0; i<n; i++) {
            sumColumn+=matrix[i][j];
        }
        printf("Sum of the Column %d is = %d\n",j+1,sumColumn);
    }

    return 0;
}