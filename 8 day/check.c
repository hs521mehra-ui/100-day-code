/*Q15 (Conditional Statements)
Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/
#include<stdio.h>
void main()
{
    char ch;
    printf("enter a character=");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z')   // as A = 65 and Z = 90 in ASCII table
    {
        printf("the entered character is an uppercase alphabet");
    }
    else if (ch>='a' && ch<='z')    // as a = 97 and z = 122 in ASCII table
    {
        printf("the entered character is a lowercase alphabet");
    }
    else if (ch>='0' && ch<='9')        // as 0 = 48 and 9 = 57 in ASCII table
    {
        printf("the entered character is a digit");
    }
    else
    {
        printf("the entered character is a special character");
    }
}