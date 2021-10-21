// Quick Quiz: Write a program to find the grade of a student given his marks based on below :
//             90-100  A
//             80-90   B
//             70-80   C
//             60-70   D
//             <70     F

#include<stdio.h>

int main() {
    int totalMarks;
    printf("Enter your Total Marks : ");
    scanf("%d",&totalMarks);

    if (totalMarks <= 100 && totalMarks >= 90) {
        printf("Your grade is A");
    }
    
    else if (totalMarks < 90 && totalMarks >= 80) {
        printf("Your grade is B");
    }
    
    else if (totalMarks < 80 && totalMarks >= 70) {
        printf("Your grade is C");
    }
    
    else if (totalMarks < 70 && totalMarks >= 60) {
        printf("Your grade is D");
    }

    else {
        printf("Your grade is F");
    }
    
    printf("\n");
    return 0;
}