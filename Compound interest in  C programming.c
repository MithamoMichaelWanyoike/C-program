#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    double P, r, A;
    int n, t;

    // User input for principal amount, rate, number of compounding periods, and time
    printf("Enter the principal amount (P): ");
    scanf("%lf", &P);
    printf("Enter the annual interest rate (r): ");
    scanf("%lf", &r);
    printf("Enter the number of times interest is compounded per year (n): ");
    scanf("%d", &n);
    printf("Enter the time in years (t): ");
    scanf("%d", &t);

    // Calculate compound interest
    A = P * pow((1 + (r / (100 * n))), (n * t));

    // Display the final amount
    printf("The final amount (A) after %.2f years is: %.2f\n", (double)t, A);

    return 0;
}