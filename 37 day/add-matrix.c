
/*Q75 (2D Arrays)
Add two matrices.*/
#include<stdio.h>
int main(){

    int A[100][100], B[100][100], sum[100][100];
    int m, n, i, j;
    printf("Enter the order of matrices A and B (row,column) = ");
    scanf("%d %d",&m,&n);

    printf("Enter elements of Matrix A (%d x %d) in row-major order: \n",m,n);
    for(i = 0; i < m; i++){
        for(j = 0 ; j < n; j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter elements of Matrix B (%d x %d) in row-major order: \n",m,n);
    for(i = 0; i < m; i++){
        for(j = 0 ; j < n; j++){
            scanf("%d",&B[i][j]);
        }
    }

    // Compute the sum of matrices A and B
    for(i = 0; i < m; i++){
        for(j = 0 ; j < n; j++){
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum of the matrices A and B is:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0 ; j < n; j++){
            printf("%d ",sum[i][j]);  
        }
        printf("\n");
    }

    return 0;
}