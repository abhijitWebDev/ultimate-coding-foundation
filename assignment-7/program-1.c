// Write a program to check if the given number is positive and non positive

#include<stdio.h>

// int main()
// {
//     int number;
//     printf("Enter a number ");
//     scanf("%d", &number);

//     if(number > 0) {
//         printf("It is a positive number");
//     } else {
//         printf("It is a non positive number");
//     }
//     return 0;
// };

// question 2
// int main()
// {
//     int num;
//     printf("Enter a number ");
//     scanf("%d", &num);

//     if(num % 5 == 0) {
//         printf("The number is divisble by 5");
//     } else {
//         printf("The number is not divisble by 5");
//     };
// }

// Question 3

//  int main()
// {
//     int num;
//     printf("Enter a number ");
//     scanf("%d", &num);

//     if(num % 2 == 0) {
//         printf("The number is even");
//     } else {
//         printf("The number is odd");
//     };
// }
// Question 5
// int main()
// {
//      int num;
//     printf("Enter a number ");
//     scanf("%d", &num);

//     // using bitwise operator
//     if((num & 1) == 0) {
//         printf("The number is even");
//     } else {
//         printf("The number is odd");
//     }
//     return 0;
// };

// question 4
int main()
{
     int num;
    printf("Enter a number ");
    scanf("%d", &num);

       // Integer division
    int quotient = num / 2;

    // Multiply the quotient by 2
    int product = quotient * 2;

    // using bitwise operator
    if(product == num ) {
        printf("The number is even");
    } else {
        printf("The number is odd");
    }
    return 0;
};