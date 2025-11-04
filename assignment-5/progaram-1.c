#include<stdio.h>

int main()
{
    int num, digit1, digit2, digit3, sum;

    printf("Enter a three digit number: ");
    scanf("%d", &num);

    digit1 = num/100; // extracting the first number digit;
    printf("First Digit: %d\n", digit1);
    digit2 = (num/10) % 10; // extracting the second number digit
    printf("Second digit: %d\n", digit2);
    digit3 = num % 10; // extracting the third number digit
printf("Third Digit: %d\n", digit3);
    sum = digit1 + digit2 + digit3;

    printf("Sum of digits: %d\n", sum);
    return 0;
};