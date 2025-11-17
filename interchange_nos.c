//Program to interchange numbers without using a third variable

#include<stdio.h>

int main(){

    int num1, num2;

    printf("Enter number 1: \n");
    scanf("%d", &num1);

    printf("Enter number 2: \n");
    scanf("%d", &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("The numbers after interchange are: ");
    printf("Number 1 = %d\n", num1);
    printf("Number 2 = %d\n", num2);

    //using a third variable
    //temp = a;
    //a = b;
    //b= temp;

    return 0;

}