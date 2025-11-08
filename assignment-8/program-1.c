#include<stdio.h>

int main()
{
    // write a program to check if a number is a three digit no or not
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if(x >=100 && x <=999) {
        printf("The number is a three digit number");
    } else {
        printf("The number is not a three digit number");
    };
    return 0;
};