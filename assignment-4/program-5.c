#include<stdio.h>

int main()
{

    int a,b;

    a = 5;
    b = 10;

    a = a+b; // adding a + b will give 15 , which will be stored in a
    b = a-b; // subtracting a-b ie 15-10 will be 5, so it will be stored in b , a is swapped
    a = a-b; // subtracting 15-5 will be 10 which will be stored in b, a is swapped

    printf("a = %d, b=%d\n", a, b);
return 0;
};