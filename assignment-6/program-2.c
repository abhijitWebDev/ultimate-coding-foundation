/*Write a program to take three digit number from the user and rotate its digit by one position to its right */


#include<stdio.h>
int main()
{
    // three digit no = 345
    // rotate the digit to its right
    // 5 becomes 3, 3 becomes 4, 4 becomes 5;

    int num;
    num = 345;

    num = num % 10 * 100 + num/10;

    printf("The number with rotated digit is: %d\n", num);
    return 0;
};