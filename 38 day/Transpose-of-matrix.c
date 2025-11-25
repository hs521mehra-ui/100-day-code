/*Q74 (2D Arrays)
Find the transpose of a matrix.*/
#include<stdio.h>
int main(){

    int A[100][100], transpose[100][100];
    int m, n, i, j;
    printf("Enter the order of matrix A (row,column) = ");
    scanf("%d %d",&m,&n);

    printf("Enter elements of Matrix A (%d x %d) in row-major order: \n",m,n);
    for(i = 0; i < m; i++){
        for(j = 0 ; j < n; j++){
            scanf("%d",&A[i][j]);
        }
    }

    // Compute the transpose
    for(i = 0; i < m; i++){
        for(j = 0 ; j < n; j++){
            transpose[j][i] = A[i][j];
        }
    }

    printf("Transpose of the matrix is:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0 ; j < m; j++){
            printf("%d ",transpose[i][j]);  
        }
        printf("\n");
    }

    return 0;
}