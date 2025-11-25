/*Q59 (Arrays (1D))
Count even and odd numbers in an array.*/
#include <stdio.h>
int main()
{
    int n, i;
    int even_count = 0, odd_count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers in the array
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    printf("The number of even elements in the array is: %d\n", even_count);
    printf("The number of odd elements in the array is: %d\n", odd_count);

    return 0;
}