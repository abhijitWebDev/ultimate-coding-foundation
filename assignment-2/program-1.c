// Write a program to calculate average of three integers. Numbers are given by the users
#include<stdio.h>
int main() {
    // defining variable
    int a,b,c;
    float result;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    result = (a + b + c)/3;

    printf("The average is: %.2f\n", result);
    return 0;

}
