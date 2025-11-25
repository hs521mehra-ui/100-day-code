/*Q18 (Conditional Statements)
Write a program to assign grades based on a percentage input.*/
#include<stdio.h>
int main()
{
    int percentage,choice;
    printf("Enter the percentage: ");
    scanf("%d",&percentage);
    if(percentage>=90 && percentage<=100)
    {
        printf("Grade A+");
    }
    else if(percentage>=80 && percentage<90)
    {
        printf("Grade A");  
    }
    else if(percentage>=70 && percentage<80)
    {
            printf("Grade A");  
    }
    else if(percentage>=60 && percentage<70)
    {
            printf("Grade A");  
    }
    else if(percentage>=50 && percentage<60)
    {
            printf("Grade A");  
    }
    else if(percentage>=40 && percentage<50)
    {
            printf("Grade A");  
    }
    else if(percentage>=0 && percentage<40)
    {
        printf("Grade A");  
    }
    else
    {
            printf("Grade A");  
    }
    

}