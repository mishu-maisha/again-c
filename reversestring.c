#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // Reverse string
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate the length of the string
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Reverse the string
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n"); // Corrected the newline escape sequence

    return 0;
}
