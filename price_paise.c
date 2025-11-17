//Program to read the price of an item in decimal form and print the output in paise

#include<stdio.h>

int main(){

    float price;
    int paise;

    printf("Please enter the price of an item: \n");
    scanf("%f", &price);

    paise = price * 100; // we mutliply with 100 as 1rs = 100 paise

    printf("The price in paise is : %.2f", paise, "paise");

    return 0; 
    // return 0 is used because it tells the os that the program ran successfully and correctly
    //its part of the function definition i.t int function MUST return and integer
    //helps in debugging return 0 means success and 1 or any other says some error occured
}