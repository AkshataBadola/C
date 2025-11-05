//C Program to fin the velocity and distance traveled

#include <stdio.h>

int main(){

    //Let initial_velocity = u, acceleration = a, time = t, final_velocity = v and distance = s
    float u, a, t, v, s;
    printf("Enter the Initial Velocity, Acceleration and Time : ");
    scanf("%f%f%f", &u, &a, &t);

    v = u + a*t;
    s = (u*t) + (0.5*a*t*t);

    printf("Final Velocity = %.2f\n", v);
    printf("Distance Traveled = %.2f\n", s);



}
