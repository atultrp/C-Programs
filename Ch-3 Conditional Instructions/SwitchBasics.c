// Switch Basics

#include<stdio.h>

int main() {
    int rating;
    printf("Thanks for using our service!!\nPlease enter the rating of our service : ");
    scanf("%d",&rating);

    switch (rating)
    {
    case 1:
        printf("Your rating is 1 which means we have to add more features to make our service best!!\n");
        break;
    
    case 2:
        printf("Your rating is 2 which means we have to add more features to make our service best!!\n");
        break;
    
    case 3:
        printf("Your rating is 3 which means we have to add more features to make our service best!!\n");
        break;
    
    case 4:
        printf("Your rating is 4, we are glad you liked it!!\n");
        break;
    
    case 5:
        printf("Your rating is 5, we are glad you liked it!!\n");
        break;
    
    default:
        printf("Sorry, please write your rating between 1-5!!\n");
        break;
    }
    return 0;
}