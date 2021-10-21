// Write a program to find the greatest of four numbers entered by the user.

#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter four number in which you wanna find the greatest one : ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int lar1, lar2;

    (a>b) ? (lar1 = a) : (lar1 = b);    // Checking largest from first two numbers
    (c>d) ? (lar2 = c) : (lar2= d);     // Checking largest from last two numbers

    // Checking largest number from above largest numbers
    (lar1>lar2) ? printf("%d is the largest number\n",lar1) : printf("%d is the largest number\n",lar2);

    return 0;
}