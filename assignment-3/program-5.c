// write a program to print a number without its last digit
#include<stdio.h>

int main() {
    int number, result;

    printf("Enter an number: ");
    scanf("%d", &number);

    // dividing the number by  10
    result = number/10;

    printf("The number without its last digit is: %d\n", result);

    return 0;
}