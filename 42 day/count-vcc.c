/*Q83 (Strings)
Count vowels and consonants in a string.*/
#include <stdio.h>
int main()
{
    char str[100];
    int i = 0, vowels = 0, consonants = 0;
    printf("Enter a string: ");
    while ((str[i] = getchar()) != '\n' && i < 99)
        i++;
    str[i] = '\0';               // Null-terminate the string
    for (int j = 0; j < i; j++) 
    {
        char ch = str[j];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
        {
            // Check for vowels
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
                {
                vowels++;
            } 
            else 
            {
                consonants++;
            }
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}