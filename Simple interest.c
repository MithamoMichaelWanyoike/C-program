#include <stdio.h>

int main() {
    float principle_amount, time, rate, simple_interest;

    // Get the principle amount, time, and rate from the user
    printf("Enter the principle amount: ");
    scanf("%f", &principle_amount);

    printf("Enter the time: ");
    scanf("%f", &time);

    printf("Enter the rate: ");
    scanf("%f", &rate);

    // Calculate the simple interest
    simple_interest = (principle_amount * time * rate) / 100;

    // Print the result
    printf("The simple interest is: %f\n", simple_interest);

    return 0;
}