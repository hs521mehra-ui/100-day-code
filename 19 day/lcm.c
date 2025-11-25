
/*Q37 (Loops without Arrays/Strings)
Write a program to find the LCM of two numbers.*/
#include<stdio.h>
int main()  
{  
    int a, b, lcm, max;  

    printf("Enter two positive integers: ");  
    scanf("%d %d", &a, &b);  

    // Find the maximum of the two numbers
    max = (a > b) ? a : b;  
    lcm = max;  

    // Loop until we find the LCM
    while (1) {  
        if (lcm % a == 0 && lcm % b == 0) {  
            break;  
        }  
        lcm++;  
    }  

    printf("LCM of %d and %d is %d\n", a, b, lcm);  

    return 0;  
}