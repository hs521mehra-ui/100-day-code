/*Q87 (Strings)
Count spaces, digits, and special characters in a string*/
#include <stdio.h>
int main()
{
    char str[100];
    int i, spaces = 0, digits = 0, specialChars = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Count spaces, digits, and special characters
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z')) {
            specialChars++;
        }
    }
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);
    return 0;
}