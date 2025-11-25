/*Q14 (Conditional Statements)
Write a program to input a character and check whether it is a vowel or consonant using if–else.*/
#include<stdio.h>
void main()
{
    char ch;
    printf("enter a character=");
    scanf("%c",ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' )
    {
        printf("the entered character is a vowel");
    }
    else if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("the entered character is a vowel");
    }
    else
    {
        printf("the enteed character is a cosonant");
    }
}