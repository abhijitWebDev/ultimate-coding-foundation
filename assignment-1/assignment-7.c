// Write a program to calculate sum of two integers, Numbers are taken from the user via keyboard.
#include<stdio.h>
int main() {
    int num1, num2, sum;
    printf("Enter the first Number: ");
    scanf("%d", &num1);

    printf("Enter the Second Number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("The sum of %d and %d is : %d\n", num1, num2, sum);
    return 0;
}