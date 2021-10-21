// Calculate income tax paid by an employee to the government as per the slabs mentioned below:

// Income Slab      Tax
// 2.5L-5.0L        5%
// 5.0L-10.0L       20%
// Above 10.0L      30%

// Note that there is no tax below 2.5L. Take income amount as an input from the user.

#include<stdio.h>

int main() {
    float salary;
    printf("Enter your yearly salary : ");
    scanf("%f",&salary);
    float tax;

    if (salary > 250000 || salary < 500000) {
        tax = salary * 5 / 100;
        printf("Your income tax is %f \n",tax);
    }

    else if (salary > 500000 || salary < 1000000) {
        tax = salary * 20 / 100;
        printf("Your income tax is %f \n",tax);
    }

    else if (salary > 100000) {
        tax = salary * 30 / 100;
        printf("Your income tax is %f \n",tax);
    }

    else {
        printf("Your yearly income is under 2.5L, so you don't need to pay income tax \n");
    }

    return 0;
}