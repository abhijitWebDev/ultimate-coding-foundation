#include <stdio.h>
// Convert INR to USD
int main()
{
    float inr, usd;
    const float EXCHANGE_RATE = 84.43;  // 1 USD = 84.43 INR

    printf("Enter amount in INR ");
    scanf("%f", &inr);
    // 1 usd = 84.43 inr;
    usd = inr/EXCHANGE_RATE;
    printf("The value in USD: %0.3f", usd);
    printf("\n");
    return 0;
};