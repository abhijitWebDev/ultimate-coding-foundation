/* What we will learn today is Decision control  and Selection control

1 If , 2nd) if else 3rd) conditional statement
*/

#include<stdio.h>
int main()
{
   int x;

   printf("Enter a number: ");

   scanf("%d", &x);

   if(x > 0) {
    printf("The number is positive");
   } else {
    printf("The number is non positive");
   };

   return 0;
};