// Qestio one

#include <stdio.h>

int main() {
    // Variables
    int customerID;
    char customerName[50];
    int unitConsumed;

    // Prompt user for input
    printf("Enter CustomerID: ");
    scanf("%d", &customerID);

    printf("Enter CustomerName: ");
    scanf("%s", customerName);

    printf("Enter UnitConsumed: ");
    scanf("%d", &unitConsumed);

    // Calculate electricity bill based on units consumed
    double totalCharge;

    if (unitConsumed <= 300) {
        totalCharge = unitConsumed * 175.0;
    } else if (unitConsumed > 300 && unitConsumed <= 600) {
        totalCharge = 300 * 175.0 + (unitConsumed - 300) * 200.0;
    } else if (unitConsumed > 600 && unitConsumed <= 800) {
        totalCharge = 300 * 175.0 + 300 * 200.0 + (unitConsumed - 600) * 300.0;
    } else {
        totalCharge = 300 * 175.0 + 300 * 200.0 + 200 * 300.0 + (unitConsumed - 800) * 400.0;
    }

    // Additional fees or taxes (modify as needed)
    double taxes = 0.05; // 5% tax, adjust as necessary
    totalCharge += totalCharge * taxes;

    // Display the electricity bill
    printf("\nElectricity Bill\n");
    printf("CustomerID: %d\n", customerID);
    printf("CustomerName: %s\n", customerName);
    printf("UnitConsumed: %d\n", unitConsumed);
    printf("Total Bill: %.2f Ksh\n", totalCharge);

    return 0;
}



//Question two

#include <stdio.h>

int main() {
    // Declare variables for salary and tax
    float salary, tax;

    // Input the yearly salary of the employee
    printf("Enter the yearly salary of the employee: ");
    scanf("%f", &salary);

    // Calculate tax based on salary ranges
    if (salary <= 400000) {
        // 1% tax for salary up to 400,000
        tax = salary * 0.01;
    } else if (salary <= 1000000) {
        // 1% tax for the first 400,000 and 15% for the rest up to 1,000,000
        tax = (400000 * 0.01) + ((salary - 400000) * 0.15);
    } else {
        // 1% tax for the first 400,000, 15% for the next 600,000, and 25% for the rest
        tax = (400000 * 0.01) + (600000 * 0.15) + ((salary - 1000000) * 0.25);
    }

    // Display the calculated tax
    printf("The tax for the given salary is: %.2f\n", tax);

    return 0;
}





// Question 3



#include <stdio.h>

int main() {
    // Declare variable to store the user input
    int number;

    // Prompt the user to enter an integer number
    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Check if the entered number is less than 100
    if (number < 100) {
        printf("Your number is smaller than 100.\n");
    } else {
        // If the entered number is greater than or equal to 100
        printf("Your number is 100 or greater.\n");
    }

    return 0;
}
