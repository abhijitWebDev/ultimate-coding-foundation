// write a program to collect three charecters from the user and display the ascii code
#include<stdio.h>

int main() {
    char a, b, c;
    //prompt the user to enter the charecter
    printf("Enter three charecters: ");
    scanf("%c %c %c", &a, &b, &c);

    // print the ascii value of the charecter
    printf("The ASCII value of '%c' is %d.\n", a, (int)a);

    // print the ascii value of the charecter
    printf("The ASCII value of '%c' is %d.\n", b, (int)b);

    // print the ascii value of the charecter
    printf("The ASCII value of '%c' is %d.\n", c, (int)c);


   return 0; 
}