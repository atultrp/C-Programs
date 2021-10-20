// Q1. Which of the following is invalid in c?
// 1. int a; b=a;
// 2. int v=3^3;
// 3. char dt= '21 Dec 2020';

#include<stdio.h>

int main() {
    int a;
    // b = a; // Invalid ; Error : b is not defined

    int v=3^3;  // Valid ;
    printf("The value of v is %d \n",v);

    char dt= '21 Dec 2020'; // Invalid ; overflow in conversion from ‘int’ to ‘char’ changes value from ‘842019376’ to ‘48’ [-Woverflow]
    printf("%c \n",dt);

    return 0;
}