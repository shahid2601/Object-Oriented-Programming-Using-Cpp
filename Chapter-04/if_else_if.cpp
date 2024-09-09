#include <iostream>
using namespace std;

int main()
{
    int amount;                                     // Variable to store the input amount
    double tax, remain;                             // Variables to store calculated tax and remaining amount after tax
    cout << "Enter Amount: ";                       // Prompt the user to enter an amount
    cin >> amount;                                  // Take the input amount from the user
    cout << "The Total Amount: " << amount << endl; // Display the entered amount

    // First tax bracket: If the amount is less than or equal to 100,000
    if (amount <= 100000)
    {
        cout << "NO Need To Pay Tax!!" << endl; // No tax required
        remain = amount;                        // Remaining amount is the same as the entered amount
    }
    // Second tax bracket: If the amount is between 100,001 and 500,000
    else if (amount > 100000 && amount <= 500000)
    {
        tax = amount * 10.0 / 100;                               // Calculate 10% tax
        cout << "Total Tax Amount Need To Pay: " << tax << endl; // Display the tax amount
        remain = amount - tax;                                   // Calculate remaining amount after tax deduction
    }
    // Third tax bracket: If the amount is between 500,001 and 1,000,000
    else if (amount > 500000 && amount <= 1000000)
    {
        tax = amount * 20.0 / 100;                               // Calculate 20% tax
        cout << "Total Tax Amount Need To Pay: " << tax << endl; // Display the tax amount
        remain = amount - tax;                                   // Calculate remaining amount after tax deduction
    }
    // Fourth tax bracket: If the amount is greater than 1,000,000
    else
    {
        tax = amount * 40.0 / 100;                               // Calculate 40% tax
        cout << "Total Tax Amount Need To Pay: " << tax << endl; // Display the tax amount
        remain = amount - tax;                                   // Calculate remaining amount after tax deduction
    }

    // Display the remaining amount after tax
    cout << "The Remaining Amount: " << remain << endl;

    return 0;
}