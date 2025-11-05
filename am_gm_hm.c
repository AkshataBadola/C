//Program to print the arithmetic, geometric and harmonic mean of 2 numbers

#include <stdio.h>
#include <math.h>

int main(){
     float num1, num2, arithmetic_mean, geometric_mean, harmonic_mean;

     printf("Enter two numbers: \n");
     scanf("%f%f", &num1, &num2);

     arithmetic_mean = (num1+num2)/2;
     geometric_mean = sqrt(num1*num2);
     harmonic_mean = pow(geometric_mean, 2)/arithmetic_mean;
     //harmonic_mean = (2*num1*num2)/(num1+num2)

     printf("The Arithmetic Mean of the numbers %.2f and %.2f is : %.2f \n", num1, num2, arithmetic_mean);
     printf("The Geometric Mean of the numbers %.2f and %.2f is : %.2f \n", num1, num2, geometric_mean);
     printf("The Harmonic Mean of the numbers %.2f and %.2f is : %.2f \n", num1, num2, harmonic_mean);

}