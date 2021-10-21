// Write a program to calculate the factorial of a given number using while loop.

#include<stdio.h>

int main() {
    int num;
    printf("Enter the number whose factorial you wanna find : ");
    scanf("%d",&num);

    int fact = 1;
    int i = 1;

    while(i <= num){
        fact *= i;
        i++;
    }

    printf("The factorial of %d is %d \n",num,fact);
    
    return 0;
}