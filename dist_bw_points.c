//Program to calculate the distance between 2 points

#include <stdio.h>
#include <math.h>

int main(){

    int x1, x2, y1, y2;
    float distance;

    printf("Enter the coordinates x and y for the 1st point: \n");
    scanf("%d%d", &x1 , &y1);

    printf("Enter the coordinates x and y for the 2nd point: \n");
    scanf("%d%d", &x2 , &y2);

    distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    printf("The distance between point1 (%d, %d) and point2 (%d, %d) is: %.2f\n", x1, y1, x2, y2, distance);

    return 0;
}