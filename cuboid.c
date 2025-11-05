// C Program to find the curved  and total surface area and volume of a cuboid

#include <stdio.h>

int main(){
    float length, breadth, height, lateral_surface_area, volume, total_surface_area;

    printf("Enter the length, breadth and height of a cuboid : \n");
    scanf("%f%f%f", &length, &breadth, &height);

    lateral_surface_area = 2*height*(length+breadth);
    volume  = length*breadth*height;
    total_surface_area = 2*(length*breadth + breadth*height + length*height);

    printf("The Lateral Surface Area of the cuboid is: %.2f\n", lateral_surface_area);
    printf("The Total Surface Area of the cuboid is: %.2f\n", total_surface_area);
    printf("The Volume of the cuboid is: %.2f\n", volume);

    return 0;

}