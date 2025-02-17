// write a program to print last digit of a number
#include<stdio.h>

int main() {
    int number;

    printf("Eneter a number: ");
    scanf("%d", &number);

    // storing the last digit in the variable
    int lastDigit = number % 10;

    printf("Last digit of a number is : %d\n", lastDigit);
    return 0;
}