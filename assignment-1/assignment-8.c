// write a program to calculate square of a given number, take input from the user
#include<stdio.h>
int main() {
    int num1, square;
    printf("Enter the first Number: ");
    scanf("%d", &num1);


    square = num1 * num1;
    printf("The square of %d  is : %d\n", num1, square);
    return 0;
}