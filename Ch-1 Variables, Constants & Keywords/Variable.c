#include<stdio.h>

int main(){
    int a;  // Declaring a variable 'a' of datatype interger
    a = 10; // Initialising 'a' with the value 10

    printf("The value of a is %d \n",a);   // Printing the value of 'a'
    
    // Format Specifiers
    // %d --> For Integer
    // %f --> For Float and double
    // %c --> For Character

    float b = 2.3;  // Float is used for decimal value
    double c = 2.23435345;  // Double is used for long decimal value

    printf("The value of b is %f \n",b);
    printf("The value of c is %f \n",c);

    char ch = 'A';  // Character is used for single character value with single quote

    printf("The value of ch is %c \n",ch);

    printf("\n");   // For new line
    return 0;
}