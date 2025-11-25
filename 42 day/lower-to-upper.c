/*Q84 (Strings)
Convert a lowercase string to uppercase without using built-in functions.*/
#include <stdio.h>
int main()
{
    char str[100];
    int i = 0;
    printf("Enter a lowercase string: ");
    while ((str[i] = getchar()) != '\n' && i < 99)
        i++;
    str[i] = '\0';               // Null-terminate the string
    for (int j = 0; j < i; j++) 
    {
        char ch = str[j];
        // Convert to uppercase if it's a lowercase letter
        if (ch >= 'a' && ch <= 'z') 
        {
            str[j] = ch - ('a' - 'A');
        }
    }
    printf("Uppercase string: %s\n", str);
    return 0;
}