// Write a program to check whether a given number is prime or not using while loops.

#include<stdio.h>

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    int flag = 1;
    int i = 2;
    while (i <= num/2)
    {
        if (num % i == 0){
            flag = 0;
            break;
        }
        i++;
    }

    if (flag == 0){
        printf("%d is not a prime number. \n",num);
    }
    else {
        printf("%d is a prime number. \n",num);
    }

    return 0;
}