// write a program to ASCII code of charecter from a user and print its charecter
#include<stdio.h>
int main() {
    int code;

    //prompt the user to enter the charecter
    printf("Enter a number: ");
    scanf("%d", &code);

    // print the ascii value of the charecter
    printf("The charecter of '%d' is %c.\n", code, (char)code);
    return 0;
}