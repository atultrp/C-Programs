// Write a program to check whether a given number is prime or not using for loops.

#include<stdio.h>

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    int flag = 1;

    for (int i = 2; i <= num/2; i++)
    {
        if (num % i == 0){
            flag = 0;
            break;
        }
    }

    if (flag == 0){
        printf("%d is not a prime number. \n",num);
    }
    else {
        printf("%d is a prime number. \n",num);
    }

    return 0;
}