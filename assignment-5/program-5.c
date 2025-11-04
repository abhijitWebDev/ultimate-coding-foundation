#include <stdio.h>

int main() {
    int number, digit, result;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("Enter a digit to append: ");
    scanf("%d", &digit);
    
    result = (number * 10) + digit;
    
    printf("Resulting number: %d\n", result);
    
    return 0;
}