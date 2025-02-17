// write a program to ask user about the cost price and the selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas
#include<stdio.h>

int main() {
    float COST_PRICE_PER_DOZEN, SELLING_PRICE_PER_DOZEN;
    float COST_PRICE_PER_25, SELLING_PRICE_PER_25;

    // collecting cost price for banana per dozen and selling price for banana per dozen
    float cost_price_per_dozen, selling_price_per_dozen;
    float cost_price_per_banana, selling_price_per_banana;
    float cost_price_for_25, selling_price_for_25;
    float profit_or_loss;

    // Get user input for cost price and selling price per dozen
    printf("Enter the cost price per dozen bananas: ");
    scanf("%f", &cost_price_per_dozen);
    printf("Enter the selling price per dozen bananas: ");
    scanf("%f", &selling_price_per_dozen);

    // Calculate cost price and selling price for 25 bananas
    cost_price_per_banana = cost_price_per_dozen / 12;
    selling_price_per_banana = selling_price_per_dozen / 12;

    cost_price_for_25 = cost_price_per_banana * 25;
    selling_price_for_25 = selling_price_per_banana * 25;

    // Calculate profit or loss
    profit_or_loss = selling_price_for_25 - cost_price_for_25;

    // Determine if it's a profit or loss and print the result
    if (profit_or_loss > 0) {
        printf("Profit earned: $%.2f\n", profit_or_loss);
    } else if (profit_or_loss < 0) {
        printf("Loss incurred: $%.2f\n", -profit_or_loss);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
};