// Write a program to sum the first ten natural numbers using a for loop.

#include<stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    
    printf("Sum of the first ten natural numbers is %d \n",sum);

    return 0;
}