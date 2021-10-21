// Write a program to find out whether a student is pass or fail; if it requires a total of 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as input from the user.

#include <stdio.h>

int main()
{
    int English, Hindi, Maths;
    int total;
    float percentage;

    printf("Enter your Marks in \n");

    printf("English : ");
    scanf("%d", &English);

    printf("Hindi : ");
    scanf("%d", &Hindi);

    printf("Maths : ");
    scanf("%d", &Maths);

    total = English + Hindi + Maths;
    percentage = total/3;

    if (English >= 33 && Hindi >= 33 && Maths >= 33 && percentage >= 40) {
        printf("Congratulations!! You are pass with %f. \n",percentage);
    }
    else {
        printf("Oops!! You ar fail with %f. Try harder!! \n",percentage);
    }

    return 0;
}