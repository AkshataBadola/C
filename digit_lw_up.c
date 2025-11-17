// C program that checks whether the entered character is: A digit or A lowercase alphabet or An uppercase alphabet

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    

    // Input a character
    printf("Enter a character: ");
    ch = getchar();

    // Check for digit
    if (ch >= 48 && ch <= 57) {
        printf("The character is a Digit.\n");
    }
    // Check for uppercase alphabet
    else if (ch >= 65 && ch <= 90) {
        printf("The character is an Uppercase Alphabet.\n");
    }
    // Check for lowercase alphabet
    else if (ch >= 97 && ch <= 122) {
        printf("The character is a Lowercase Alphabet.\n");
    }
    else {
        printf("The character is neither a digit nor an alphabet.\n");
    }

    /*
    if (isdigit(ch)) {
        printf("It is a Digit.\n");
    }
    else if (isupper(ch)) {
        printf("It is an Uppercase Alphabet.\n");
    }
    else if (islower(ch)) {
        printf("It is a Lowercase Alphabet.\n");
    }
    else {
        printf("It is neither a Digit nor an Alphabet.\n");
    } */

    return 0;
}
