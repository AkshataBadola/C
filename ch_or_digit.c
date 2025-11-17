//Program to check whether the input by the user is a character of a digit

#include<stdio.h>

int main(){

    char ch;

    printf("Please enter a character: \n");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9') {
        printf("It is a digit.\n");
    } else {
        printf("It is NOT a digit.\n");
    }

    //Method 2
    /*
    if (isdigit(ch)) {
        printf("It is a digit.\n");
    } else {
        printf("It is NOT a digit.\n");
    }

    or

    if (isdigit(ch)) {
        printf("'%c' is a DIGIT.\n", ch);
    }
    else if (isalpha(ch)) {
        printf("'%c' is an ALPHABET.\n", ch);
    }
    else {
        printf("'%c' is a SPECIAL CHARACTER.\n", ch);
    }
    */
    return 0;
}