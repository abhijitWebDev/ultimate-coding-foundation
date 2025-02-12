// write a program to find area of a rectangle
#include<stdio.h>
int main() {
    // write a program to calculate square of a given number, take input from the user

    int l, b, area ;
    printf("Enter the length of rectangle: ");
    scanf("%d", &l);

    printf("Enter the breadth of rectangle: ");
    scanf("%d", &b);


    area = l * b;
    printf("The sum of %d and %d is : %d\n", l, b, area);
    return 0;

}