/*Q90 (Strings)
Toggle case of each character in a string*/
#include <stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Toggle case of each character
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // Convert to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A'); // Convert to lowercase
        }
    }
    printf("Toggled case string: %s", str);
    return 0;
}