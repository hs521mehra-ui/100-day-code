/*Q61 (Arrays (1D))
Search for an element in an array using linear search.*/
#include <stdio.h>
int main()
{
    int n, i, target;
    int found = 0; // Flag to indicate if the element is found

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input the target element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    // Perform linear search
    for(i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            found = 1; // Element found
            break;
        }
    }

    if(found)
    {
        printf("Element %d found in the array.\n", target);
    }
    else
    {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}