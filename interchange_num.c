//Program to accept 2 numbers and interchange them

#include <stdio.h>

int main(){

    int num1, num2, temp;

    printf("Enter 2 numbers: \n");
    scanf("%d%d", &num1, &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("The numbers after swapping are: %d %d \n", num1, num2);

    return 0;
} 