/*Q73 (2D Arrays)
Find the sum of each row of a matrix and store it in an array.*/
#include<stdio.h>
int main(){

    int A[100][100], rowSum[100];
    int m, n, i, j;
    printf("Enter the order of matrix A (row,column) = ");
    scanf("%d %d",&m,&n);

    printf("Enter elements of Matrix A (%d x %d) in row-major order: \n",m,n);
    for(i = 0; i < m; i++){
        rowSum[i] = 0; // Initialize sum for each row
        for(j = 0 ; j < n; j++){
            scanf("%d",&A[i][j]);
            rowSum[i] += A[i][j]; // Add to the respective row sum
        }
    }

    printf("Sum of each row of the matrix is:\n");
    for(i = 0; i < m; i++){
        printf("Sum of row %d is %d\n", i + 1, rowSum[i]);
    }

    return 0;
}