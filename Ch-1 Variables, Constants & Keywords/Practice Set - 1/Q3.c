// Q3. Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit)

#include<stdio.h>

int main() {
    float tempCel;
    printf("Enter the temperature in celcius : ");
    scanf("%f",&tempCel);

    float tempFah;
    tempFah = (tempCel * 9/5) + 32;        // F = (C × 9/5) + 32

    printf("Given temperature in Fahrenheit : %f \n",tempFah);

    return 0;
}