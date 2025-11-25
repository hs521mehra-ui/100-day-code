/*Q5 (User Inputs, Operations & Output)
Write a program to convert temperature from Celsius to Fahrenheit.*/
#include<stdio.h>
int main()
{
    float temp=0,fahren=0,num=1.8;
    //fahren=(temp*num)+32
    printf("enter the temperature");
    scanf("%f",&temp);
    fahren=(temp*num)+32;
    printf("temperature in fahrenheit is=%f\n",fahren);
    return 0;
}