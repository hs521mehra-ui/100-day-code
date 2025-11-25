
/*Q57 (Arrays (1D))
Find the sum of array elements.*/
#include <stdio.h>
int main()
{
    int n, i;
    int sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of array elements
    for(i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}