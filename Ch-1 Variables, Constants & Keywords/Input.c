#include<stdio.h>

int main(){
    int a;
    int b;

    // Taking inputs from users
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);

    printf("Basic Calculations \n");
    printf("a + b : %d \n",a+b);
    printf("a - b : %d \n",a-b);
    printf("a * b : %d \n",a*b);
    printf("a / b : %d \n",a/b);

    return 0;
}