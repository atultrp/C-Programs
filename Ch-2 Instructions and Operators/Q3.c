// Q3. Write a program to check whether a number is divisible 97 or not.

#include<stdio.h>

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    // If output become 0 then the number is divisible by 97, else not divisible
    printf("Number is divisible by 97 : %d \n", num%97);

    return 0;
}