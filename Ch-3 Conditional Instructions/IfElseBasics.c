// if else Basics

#include<stdio.h>

int main() {
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);

    if (age >= 18){
        printf("You are 18+, you can vote!!\n");
    }
    else{
        printf("You are below 18, you can't vote!!\n");
    }
    return 0;
}