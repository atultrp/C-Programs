// Write a program to sum the first ten natural numbers using a do-while loop.

#include<stdio.h>

int main() {
    int sum = 0;
    int i = 1;

    do{
        sum += i;
        i++;
    }while (i<=10);

    printf("Sum of the first ten natural numbers is %d \n",sum);

    return 0;
}