// Q4. Write a program to calculate simple interest for a set of values representing principle, no of years, and rate of interest.
// Formula
// SI = P (1 + rt)


#include<stdio.h>

int main() {
    int principle, time;
    float SI, rate;

    printf("Enter the set of values representing principle, no of years, and rate of interest : ");
    scanf("%d %d %f",&principle,&time,&rate);

    SI = principle * (1+(rate*time));

    printf("The Simple interest is %f \n",SI);

    return 0;
}