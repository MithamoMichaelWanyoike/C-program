#include <stdio.h>

// Function to calculate the electricity bill
void calculateElectricityBill() {
    int customerId;
    char customerName[100];
    float unitsConsumed, totalBill, surcharge, amountToPay;

    // Prompt the user to enter customer details and units consumed
    printf("Enter Customer ID: ");
    scanf("%d", &customerId);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);

    // Calculate the total bill based on the units consumed
    if (unitsConsumed <= 199) {
        totalBill = unitsConsumed * 1.20;
        printf("Charges per unit: Ksh 1.20\n");
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        totalBill = unitsConsumed * 1.50;
        printf("Charges per unit: Ksh 1.50\n");
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        totalBill = unitsConsumed * 1.80;
        printf("Charges per unit: Ksh 1.80\n");
    } else {
        totalBill = unitsConsumed * 2.00;
        printf("Charges per unit: Ksh 2.00\n");
    }

    // Apply surcharge if the bill exceeds Ksh 400
    if (totalBill > 400) {
        surcharge = totalBill * 0.15;
        totalBill += surcharge;
    }

    // Ensure the minimum bill is Ksh 100
    if (totalBill < 100) {
        totalBill = 100;
    }

    // Calculate the total amount to pay
    amountToPay = totalBill;

    // Display the output
    printf("\nCustomer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.2f\n", unitsConsumed);
    printf("Total Amount to Pay: Ksh %.2f\n", amountToPay);
}

int main() {
    calculateElectricityBill();
    return 0;
}