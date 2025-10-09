//
// Created by ashra on 14/08/2025.
//

#include<stdio.h>
int main() {
    int size , i , j;

    printf("Enter the square size of matrix: ");
    scanf("%d",&size);//Here we just use square matrix for short
    int matrix[size][size];

    for (i = 0; i<size; i++) {
        for (j= 0; j<size; j++) {
            printf("Enter the value [%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nTranspose metrix\n");
    for (i = 0; i<size; i++) {
        for (j= 0; j<size; j++) {
            printf(" %d  ",matrix[j][i]);
          }
        printf("\n");
    }
 return 0;
}