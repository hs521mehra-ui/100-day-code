/*Q65 (Arrays (1D))
Search in a sorted array using binary search.*/
#include <stdio.h>
int main() {
    
    int n, i, j, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; 

    printf("Enter elements of the sorted array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] > key) {
            break;
        }
    }

    for (j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }

    arr[i] = key;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}