/*Q9 (User Inputs, Operations & Output)
Write a program to calculate simple and compound interest for given principal, rate, and time.*/
#include<stdio.h>
int main()
{
    float principal,rate,time,si,ci,amount;
    printf("enter principal,rate and time:");
    scanf("%f%f%f",&principal,&rate,&time);
        si=principal*rate*time/100;
        amount=principal*pow((1+rate/100),time);
        ci=amount-principal;
        printf("simple interest=%.2f\n",si);
        printf("compound interest=%.2f\n",ci);
        return 0;
}