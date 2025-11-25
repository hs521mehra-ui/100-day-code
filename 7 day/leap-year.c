/*Write a program to input a year and check whether it is a leap year or not using conditional statements.*/
#include<stdio.h>
void main()
{
    int year;
    printf("enter a year=");
    scanf("%d",&year);  //enter the year
    if (year%4==0)
    {
        if (year%100==0)
        {
            if (year%400==0)
            {
                printf("the entered year is a leap year");
            }
            else
            {
                printf("the entered year is not a leap year");
            }
        }
        else
        {
            printf("the entered year is a leap year");
        }
    }
    else
    {
        printf("the entered year is not a leap year");
    }
}