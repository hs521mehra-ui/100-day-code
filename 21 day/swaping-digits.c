/*Q41 (Loops without Arrays/Strings)
Write a program to swap the first and last digit of a number.*/
#include<stdio.h>
int main()
{
    int num, firstDigit, lastDigit, digits, swapNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    lastDigit = num % 10;
    digits = (int)log10(num);
    firstDigit = (int)(num / pow(10, digits));
    if (firstDigit == lastDigit)
    {
        printf("Number after swapping first and last digit is: %d\n", num);
    }
    else
    {
        swapNum = (lastDigit * pow(10, digits)) + (num % (int)pow(10, digits) - lastDigit) + firstDigit;
        printf("Number after swapping first and last digit is: %d\n", swapNum);

  }

  
}