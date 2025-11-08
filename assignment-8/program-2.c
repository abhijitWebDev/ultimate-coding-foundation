#include<stdio.h>

int main()
{
    /* write a program to print grater between two numbers, and print one number if 
    both the numbers are the same
    */

    int x, y;

    printf("Enter two numbers ");
    scanf("%d %d", &x, &y);

    if(x > y) {
        printf("The grater number is %d", x);
    } else if(x < y) {
        printf("The grater number is %d", y);
    } else {
        printf("Both numbers are equal", x);
    };

    return 0;
}