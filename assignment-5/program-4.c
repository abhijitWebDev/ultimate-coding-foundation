#include<stdio.h>

int main()
{
    int x;

    printf("Enter a number : ");
    scanf("%d", &x);

    x = (x/10) * 10; // remove the last digit by multiplying it with 10;
    printf("Number with last digit as zero: %d\n", x);
    
    return 0;

};