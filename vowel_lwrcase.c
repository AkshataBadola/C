//Program to accept an input in the lower case and check if its a vowel or not

#include<stdio.h>
#include<ctype.h>

int main(){

    char ch;
    printf("Please enter a lowercase character: \n");
    scanf("%c", &ch);

    if(islower(ch)) {  // if (ch >= 'a' && ch <= 'z') 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("It is a vowel.\n");
        }

        else {
            printf("It is a consonant.");
        }
    }

    else if (isupper(ch)){
        printf("Enter a character in the LOWERCASE.");
    }

    else {
        printf("It is not a character");
    }

    return 0;
}