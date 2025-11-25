/*Q91 (Strings)
Remove all vowels from a string.*/
#include <stdio.h>
int main()
{
    char str[100];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove vowels from the string
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            str[j++] = str[i]; // Keep non-vowel characters
        }
    }
    str[j] = '\0'; // Null-terminate the modified string
    printf("String after removing vowels: %s\n", str);
    return 0;
}