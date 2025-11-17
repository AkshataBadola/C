//Program to count the number of currency noted in denominations 1,5 and 10 to be given to the user.

#include<stdio.h>

int main(){

    int amount, ten, five, one, remainder;

    printf("Please enter the amount to be withdrawn: \n");
    scanf("%d", &amount);

    ten = amount/10; 
    five = (amount%10) / 5;
    one = amount%5;

    printf("10-rupee notes: %d\n", ten);
    printf("5-rupee notes: %d\n", five);
    printf("1-rupee notes: %d\n", one);

    return 0;



    //Method 2 - Using arrays
    /* 
    int amount;
    int notes[3] = {10, 5, 1};
    int count[3] = {0};

    for (int i = 0; i < 3; i++) {
        count[i] = amount / notes[i];
        amount = amount % notes[i];
    }
    */

    //Method 3 - Using if else
    /*
    int tens = 0, fives = 0, ones = 0;

    if (amount >= 10) {
        tens = amount / 10;
        amount = amount % 10;
    }
    if (amount >= 5) {
        fives = amount / 5;
        amount = amount % 5;
    }

    ones = amount;
    */

}