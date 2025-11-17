//Program to read the price in paise

#include <stdio.h>

int main(){

    float money;
    int paise;

    printf("Enter the price of an item in decimal form: \n");
    scanf("%f", &money);

    paise = money*100;

    printf("The price in money is : %d paise\n", paise);

    return 0;
}