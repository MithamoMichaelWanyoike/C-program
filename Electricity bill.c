#include <stdio.h>

int main() {
    // Declare variables
    int customerID;
    char customerName[100];
    int unitsConsumed;
    float chargePerUnit = 0.0;
    float totalBill, surcharge;

    // Prompt user for input
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customerName); // Read string with spaces
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // Determine charge per unit based on units consumed
    if (unitsConsumed < 200) {
        chargePerUnit = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        chargePerUnit = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        chargePerUnit = 1.80;
    } else {
        chargePerUnit = 2.00;
    }

    // Calculate total bill before surcharge
    totalBill = unitsConsumed * chargePerUnit;

    // Apply minimum bill condition
    if (totalBill < 100) {
        totalBill = 100;
    }

    // Apply surcharge if total bill exceeds Ksh 400
    if (totalBill > 400) {
        surcharge = totalBill * 0.15; // 15% surcharge
        totalBill += surcharge;
    }

    // Display output
    printf("\n--- Electricity Bill ---\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: Ksh %.2f\n", chargePerUnit);
    printf("Total Amount to Pay: Ksh %.2f\n", totalBill);

    return 0;
}