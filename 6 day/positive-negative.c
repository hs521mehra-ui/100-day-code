/*Q12 (Conditional Statements)
Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.*/
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if (num>0)
    {
        printf("the entered number is positive");
    }
    else if(num<0)
    {
        printf("the entered number is negative");
    }
    else
    {
        printf("the entered number is zero");
    }
    return 0;
    
}