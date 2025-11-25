
/*Q63 (Arrays (1D))
Merge two arrays.*/
#include <stdio.h>
int main()
{
    int n1, n2, i, j;

    // Input size of first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    int arr1[n1]; // Declare first array of size n1

    // Input elements of first array
    printf("Enter %d elements for the first array:\n", n1);
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    int arr2[n2]; // Declare second array of size n2

    // Input elements of second array
    printf("Enter %d elements for the second array:\n", n2);
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2]; // Declare merged array of size n1 + n2

    // Merge the two arrays
    for(i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }
    for(j = 0; j < n2; j++)
    {
        merged[i + j] = arr2[j];
    }

    // Print the merged array
    printf("The merged array is:\n");
    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}