#include <stdio.h>

int main() {
    float principal, rate, interest;
    int duration;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter the duration (in years): ");
    scanf("%d", &duration);

    printf("Enter the rate (percentage): ");
    scanf("%f", &rate);

    interest = (principal * duration * rate) / 100;

    printf("The interest is: %.2f\n", interest);
    return 0;
}
