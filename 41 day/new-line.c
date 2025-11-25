/*Print each character of a string on a new line.
*/
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer input method

    printf("Characters in the string:\n");

    while (str[i] != '\0') {
        // Stop printing if newline character is encountered
        if (str[i] == '\n') {
            break;
        }
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}