// Write a program to print n natural numbers in reverse order.

#include<stdio.h>

int main() {
    int n;
    printf("Enter a number till you want to print the natural numbers in reverse order : ");
    scanf("%d",&n);

    printf("Natural Numbers till %d : \n",n);
    for (int i = n; i >= 1; i--)
    {
        printf("%d \n",i);
    }
    return 0;
}