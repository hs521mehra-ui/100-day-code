/*Q6 (User Inputs, Operations & Output)
Write a program to swap two numbers using a third variable*/
#include<stdio.h>
int main()
{
    int num1=0,num2=0,num3=0;  //num3 third variable used for swapping 2 variables
    printf("enter the two variables x and y");
    scanf("%d%d",&num1,&num2);
    num3=num1;
    num1=num2;
    num2=num3;
    printf("the swaped numbers are=%d %d\n",num1,num2);
    return 0;

}