// Q4. Explain step by step evaluation of 3*x/y-z +k
// Where x=2, y=3, z=3 and k=1

// Priority Operators
// 1st      * / %
// 2nd      + -
// 3rd      =

#include <stdio.h>

int main()
{

    int x = 2, y = 3, z = 3, k = 1;
    int eva = 3 * x / y - z + k;

    /* 

    Step by Step evaluation :-
    
    Eq :    3 * x / y - z + k

    1 -->   3 * 2 / 3 - 3 + 1
    2 -->   6 / 3 - 3 + 1
    3 -->   2 - 3 + 1
    4 -->   -1 + 1
    5 -->   0

    */

    printf("Answer is : %d \n", eva);

    return 0;
}