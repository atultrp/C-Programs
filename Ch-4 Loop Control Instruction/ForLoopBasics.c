// Write a program to print first n natural numbers using for loop.

#include<stdio.h>

int main() {
    int n;
    printf("Enter a number till you want to print the natural numbers : ");
    scanf("%d",&n);

    printf("Natural Numbers till %d : \n",n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d \n",i);
    }

    return 0;
}