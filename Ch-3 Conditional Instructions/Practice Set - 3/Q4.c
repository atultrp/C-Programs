// Write a program to determine whether a character entered by the user is lowercase or not.

#include<stdio.h>

int main() {
    // 97-122 = a-z
    // 65 
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);

    if (ch<=122 && ch>=97)
    {
        printf("You entered a lowercase character. \n");
    }
    else {
        printf("You entered a uppercase character. \n");
    }

    return 0;
}