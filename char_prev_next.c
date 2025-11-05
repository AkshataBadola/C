//Program to accept a character from the keyboard and display its previous and next character in order

#include <stdio.h>
#include <ctype.h>  // for isalpha()

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (isalpha(c)) {
        printf("Previous character: %c\n", c - 1);
        printf("Next character: %c\n", c + 1);
    } else {
        printf("The entered value '%c' is not an alphabetic character.\n", c);
    }

    return 0;
}
