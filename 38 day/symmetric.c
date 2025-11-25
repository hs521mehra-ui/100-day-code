/*Q76 (2D Arrays)
Check if a matrix is symmetric.*/
#include<stdio.h>
int main()
{
    int A[100][100], transpose[100][100];
    int m, n, i, j, isSymmetric = 1;
    printf("Enter the order of matrix A (row,column) = ");
    scanf("%d %d",&m,&n);

    if(m != n){
        printf("Matrix is not symmetric as it is not square.\n");
        return 0;
    }

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

    // Check if A is equal to its transpose
    for(i = 0; i < m; i++){
        for(j = 0 ; j < n; j++){
            if(A[i][j] != transpose[i][j]){
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric) break;
    }

    if(isSymmetric){
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}