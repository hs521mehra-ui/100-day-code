/*Q39 (Loops without Arrays/Strings)
Write a program to find the product of odd digits of a number.*/
#include<stdio.h>
int main()
{
    int n,digit,product=1,odd=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        if(digit%2!=0)
        {
            product=product*digit;
            
            odd=1;
        }
        n=n/10;
    }
    printf("the product of odd digits of a number is:%d\n",odd?product:0);
    return 0;
}