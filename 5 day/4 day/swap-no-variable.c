/*Q7 (User Inputs, Operations & Output)
Write a program to swap two numbers without using a third variable.*/
#include <stdio.h>
int main()
{
    int num1=0,num2=0;
    printf("enter num1 and num2");
    scanf("%d%d",&num1,&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("the swapped numbers are=%d %d\n",num1,num2);
    return 0;
}