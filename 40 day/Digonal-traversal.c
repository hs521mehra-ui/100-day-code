/*Q79 (2D Arrays)
Perform diagonal traversal of a matrix.*/
#include <stdio.h>
int main()
{
    int arr[10][10], r, c, i, j, k;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);
    printf("The diagonal traversal of the matrix is:\n");
    for (k = 0; k < r + c - 1; k++)
    {
        if (k % 2 == 0)
        {
            for (i = (k < r) ? k : r - 1, j = k - i; i >= 0 && j < c; i--, j++)
                printf("%d ", arr[i][j]);
        }
        else
        {
            for (j = (k < c) ? k : c - 1, i = k - j; j >= 0 && i < r; j--, i++)
                printf("%d ", arr[i][j]);
        }
    }
    return 0;
}