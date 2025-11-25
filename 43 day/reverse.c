/*Q85 (Strings)
Reverse a string.
*/
#include <stdio.h>
int main()
{
    char str[100];
    int i, len = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Calculate length of the string
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    // Reverse the string
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}