#include<stdio.h>

int main()
{
    // program to swap two variables
    int a,b,c; // we create c as a temp variable
    a = 10;
    b = 20;

    c = a; // assign a to temp which will act as a reference
    a = b; // assign b to a
    b = c; // assign c to b Like this we will swap the values of two variables, using temp

    printf("a = %d, b=%d\n", a, b);




};