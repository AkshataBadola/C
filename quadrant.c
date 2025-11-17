//Program to accept x and y coordinate and check which quadrant the point lies in

#include<stdio.h>

int main(){

    int x, y;

    printf("Enter point x: ");
    scanf("%d", &x);

    printf("Enter point y: ");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("The point lies in Quadrant I.\n");
    }
    else if (x < 0 && y > 0) {
        printf("The point lies in Quadrant II.\n");
    }
    else if (x < 0 && y < 0) {
        printf("The point lies in Quadrant III.\n");
    }
    else if (x > 0 && y < 0) {
        printf("The point lies in Quadrant IV.\n");
    }
    else if (x == 0 && y == 0) {
        printf("The point lies at the Origin.\n");
    }
    else if (x == 0) {
        printf("The point lies on the Y-axis.\n");
    }
    else {  // y == 0
        printf("The point lies on the X-axis.\n");
    }

    return 0;
}