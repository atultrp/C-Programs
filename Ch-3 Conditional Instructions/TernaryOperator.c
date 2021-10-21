// Ternary Operator Basics
// syntax -->  (condition) ? True Statement : False Statement


#include<stdio.h>

int main() {
    int a, b;

    printf("Enter two number that you wanna check which one is largest : ");
    scanf("%d %d",&a,&b);

    (a>b) ? printf("%d is the largest number\n",a) : printf("%d is the largest number\n",b);

    return 0;
}