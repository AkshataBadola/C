// Program which prints the ascii value of a character.

#include <stdio.h>
#include <ctype.h>

int main(){

    char c;
    printf("Enter a character of your choice: \n");
    scanf("%c", &c);

    if(isdigit(c)){

        printf("The value entered '%c' in not a character. Please enter a valid character. \n", c);

    }

    else {
        printf("The ASCII value of character '%c' is: %d \n", c, c);
    }
    /* 
    Logic used - 
    When the user enters a character th computer doesnt store the letter itself but rather stores the ascii value. So it actually stores a value therefore while printing if we use %d(used to print integers); it gives us the ASCII value and not the digit.)
    */


    return 0;

}