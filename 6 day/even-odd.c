/*Q11 (Conditional Statements)
Write a program to input an integer and check whether it is even or odd using if–else.*/
#include <stdio.h>
int main()
{
    int num;
    printf("enter an integer:");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }
    return 0;
}