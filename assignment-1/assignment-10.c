#include<stdio.h>

int main() {
    float pi = 3.14159; // Use a float for pi
    int r;
    float area; // Use a float for area to handle decimal values

    printf("Please enter radius of the circle: ");
    scanf("%d", &r);

    area = pi * (r * r); // Correct formula for area
    printf("The area of the circle with radius %d is: %.2f\n", r, area); // Use %.2f to format the float output
    return 0;
}
