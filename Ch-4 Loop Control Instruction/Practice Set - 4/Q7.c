// Write a program to calculate the factorial of a given number using for loop.

#include<stdio.h>

int main() {
    int num;
    printf("Enter the number whose factorial you wanna find : ");
    scanf("%d",&num);

    int fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }

    printf("The factorial of %d is %d \n",num,fact);
    
    return 0;
}