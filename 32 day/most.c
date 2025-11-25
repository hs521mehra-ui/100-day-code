
/*Q64 (Arrays (1D))
Find the digit that occurs the most times in an integer number.*/
#include <stdio.h>
int main()
{
    int number, digit, i;
    int count[10] = {0}; // Array to store the count of each digit (0-9)

    // Input an integer number
    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Count the occurrences of each digit in the number
    while(number != 0)
    {
        digit = number % 10; // Extract the last digit
        count[digit]++;      // Increment the count for this digit
        number /= 10;        // Remove the last digit from the number
    }

    // Find the digit with the maximum occurrences
    int max_count = count[0];
    int most_frequent_digit = 0;
    for(i = 1; i < 10; i++)
    {
        if(count[i] > max_count)
        {
            max_count = count[i];
            most_frequent_digit = i;
        }
    }

    // Print the result
    printf("The digit that occurs the most is: %d (occurs %d times)\n", most_frequent_digit, max_count);

    return 0;
} 