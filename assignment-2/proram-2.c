// Write a program to calculat the circumfurence of the cirlce
#include<stdio.h>

int main() {
    float pi = 3.14159; // Use a float for pi
    int r;
    float circumfurence;

    printf("Please enter radius of the circle: ");
    scanf("%d", &r);

    circumfurence = 2 * pi * r;

    printf("The circumfurence of the circle with radius %d is: %.2f\n", r, circumfurence); // Use %.2f to format the float output
}