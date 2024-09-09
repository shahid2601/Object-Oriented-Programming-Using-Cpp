#include <iostream>
using namespace std;

int main()
{
    char value;     // Variable to store the operation to be performed
    int num1, num2; // Variables to store the two numbers for the operation

    // Input for the first number
    cout << "Enter First Number: ";
    cin >> num1; // Read the first number from the user

    // Input for the operation to be performed
    cout << "Which operation would you like to perform (+, -, *, /, %)? ";
    cin >> value; // Read the operation from the user

    // Input for the second number
    cout << "Enter Second Number: ";
    cin >> num2; // Read the second number from the user

    // Switch statement to handle different operations
    switch (value)
    {
    case '+':
        // Perform addition
        cout << "Addition: " << num1 + num2 << endl;
        break;
    case '-':
        // Perform subtraction
        cout << "Subtraction: " << num1 - num2 << endl;
        break;
    case '*':
        // Perform multiplication
        cout << "Multiplication: " << num1 * num2 << endl;
        break;
    case '/':
        // Check for division by zero
        if (num2 != 0)
        {
            cout << "Division: " << num1 / num2 << endl; // Perform division
        }
        else
        {
            // Display error message for division by zero
            cout << "Error: Division by zero is not allowed!" << endl;
        }
        break;
    case '%':
        // Check for division by zero in modulus operation
        if (num2 != 0)
        {
            cout << "Remainder: " << num1 % num2 << endl; // Perform modulus operation
        }
        else
        {
            // Display error message for division by zero in modulus
            cout << "Error: Division by zero is not allowed!" << endl;
        }
        break;
    default:
        // Handle invalid operations
        cout << "Invalid Operation!!" << endl;
        break;
    }

    return 0;
}