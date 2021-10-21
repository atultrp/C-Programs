// Write a program to print a multiplication table of 10 in reversed order

#include<stdio.h>

int main() {
    int n;
    printf("Enter a number whose table you wanna print in reverse order : ");
    scanf("%d", &n);

    printf("Table of %d in reverse order is : \n", n);

    for (int i = 10; i >= 1; i--)
    {
        printf("%d x %d = %d \n", n, i, n * i);
    }
    return 0;
}