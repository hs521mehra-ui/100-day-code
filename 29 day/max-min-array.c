
/*Q58 (Arrays (1D))
Find the maximum and minimum element in an array.*/
#include <stdio.h>
int main()
{
    int n, i;
    int max, min;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element of the array
    max = arr[0];
    min = arr[0];

    // Find the maximum and minimum elements in the array
    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("The maximum element in the array is: %d\n", max);
    printf("The minimum element in the array is: %d\n", min);

    return 0;
}