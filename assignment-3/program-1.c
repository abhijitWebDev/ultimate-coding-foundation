// write a program to input a charecter from a user and print its ascii code

#include<stdio.h>

int main() {
    char c;
    //prompt the user to enter the charecter
    printf("Enter a charecter: ");
    scanf("%c", &c);

    // print the ascii value of the charecter
    printf("The ASCII value of '%c' is %d.\n", c, (int)c);
    return 0;

}