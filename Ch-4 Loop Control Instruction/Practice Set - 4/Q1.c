// Write a program to print the multiplication table of a given number n.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number whose table you wanna print : ");
    scanf("%d", &n);

    printf("Table of %d is : \n", n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", n, i, n * i);
    }

    return 0;
}