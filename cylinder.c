// C Program to find the curved  and total surface area and volume of a cylinder

#include <stdio.h>
#define PI 3.14

int main(){
    float radius, height, curved_surface_area, volume, total_surface_area;

    printf("Enter the radius and height of a cylinder : ");
    scanf("%f%f", &radius, &height);

    curved_surface_area = 2*PI*radius*height;
    volume  = PI*radius*radius*height;
    total_surface_area = 2*PI*radius*(height+radius);

    printf("The Curved Surface Area of the cylinder is: %.2f\n", curved_surface_area);
    printf("The Total Surface Area of the cylinder is: %.2f\n", total_surface_area);
    printf("The Volume of the cylinder is: %.2f\n", volume);

    return 0;

}