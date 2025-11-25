
/*Q31 (Loops without Arrays/Strings)
Write a program to take a number as input and print its equivalent binary representation*/
#include<stdio.h>
int main()
{
    int n;
    int binary[32];
    int i = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n == 0) {
        printf("Binary Representation: 0\n");
        return 0;
    }

    while(n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary Representation: ");
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}