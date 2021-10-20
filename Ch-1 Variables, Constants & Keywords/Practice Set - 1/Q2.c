// Q2. Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.

#include<stdio.h>

int main() {

    // Area of Circle
    float radius;
    printf("Enter the radius of the circle : ");
    scanf("%f",&radius);

    float areaOfCircle;

    areaOfCircle = 3.14 * radius * radius;      // A = π x r^2 
    printf("Area of the circle is %f \n",areaOfCircle);

    // Volume of cylinder
    float height;
    printf("Enter the height of the cylinder : ");
    scanf("%f",&height);

    float volumeOfCylinder;
    volumeOfCylinder = areaOfCircle * height;   // V = π x r^2 x h = A x h

    printf("Volume of the cylinder is %f \n",volumeOfCylinder);

    return 0;
}