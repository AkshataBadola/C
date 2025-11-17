//Program to accept two numbers in variables x and y from the user and perform operations

#include<stdio.h>

int main(){

    int x, y;
    
    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    // 1. Equality Check
    if (x == y) {
        printf("x is equal to y\n");
    } else {
        printf("x is not equal to y\n");
    }

    // 2. Less Than Check
    if (x < y) {
        printf("x is less than y\n");
    } else {
        printf("x is not less than y\n");
    }

    // 3. Quotient and Remainder
    if (y != 0) {
        int quotient = x / y;
        int remainder = x % y;

        printf("Quotient = %d\n", quotient);
        printf("Remainder = %d\n", remainder);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}