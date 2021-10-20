// Q1. Write a c program to calculate the area of a rectangle:

// a) using hardcoded inputs & 

// b) using inputs supplied by the user

#include<stdio.h>

int main() {
    // a. By using hard coded inouts
    int length1 = 4 , breadth1 = 5;

    int areaOfRect1;
    areaOfRect1 = length1 * breadth1;
    
    printf("Length and Breadth of the rectangle are %d and %d \n",length1,breadth1);
    printf("The Area of rectangle is %d \n\n",areaOfRect1);

    // b. By user inputs
    int length2 , breadth2 ;

    printf("Enter the length of the rectangle : ");
    scanf("%d",&length2);

    printf("Enter the breadth of the rectangle : ");
    scanf("%d",&breadth2);

    int areaOfRect2;
    areaOfRect2 = length2 * breadth2;

    printf("The Area of rectangle is %d \n\n",areaOfRect2);

    return 0;
}