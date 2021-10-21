// Write a program to sum the first ten natural numbers using a while loop.

#include<stdio.h>

int main() {
    int sum = 0;
    int i = 1;

    while (i<=10)
    {
        sum += i;
        i++;
    }

    printf("Sum of the first ten natural numbers is %d \n",sum);

    return 0;
}