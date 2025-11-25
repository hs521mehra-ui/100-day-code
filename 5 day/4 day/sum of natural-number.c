/*Q8 (User Inputs, Operations & Output)
Write a program to find and display the sum of the first n natural numbers.*/
#include <stdio.h>
int main()
{
    int num1,sum=0;
    printf("enter a number");
    scanf("%d",&num1);
    for (int i=1;i<=num1;i++)
    {
        sum=sum+i;
    }
    printf("sum of n natural number is=%d\n",sum);
    return 0;
}