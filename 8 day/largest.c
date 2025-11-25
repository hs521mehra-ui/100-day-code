/*Q16 (Conditional Statements)
Write a program to input three numbers and find the largest among them using if–else*/
#include<stdio.h>
void main() 
{
    int a,b,c;
    printf("enter three numbers=");
    scanf("%d%d%d",&a,&b,&c);
    if (a>=b && a>=c)
    {
        printf("the largest number is %d",a);
    }
    else if (b>=a && b>=c)
    {
        printf("the largest number is %d",b);
    }
    else
    {
        printf("the largest number is %d",c);
    }
}