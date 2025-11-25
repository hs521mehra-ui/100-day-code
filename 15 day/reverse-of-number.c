/*Q30 (Loops without Arrays/Strings)
Write a program to reverse a given number.*/
#include<stdio.h>
int main()
{
    int n, renumber = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        int digit = n % 10;
        renumber = renumber * 10 + digit;
        n /= 10;
    }

    printf("Reversed Number: %d\n", renumber);

    return 0;
}