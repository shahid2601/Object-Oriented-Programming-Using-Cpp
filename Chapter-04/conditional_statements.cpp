#include <iostream>
using namespace std;

int main()
{
    int num;                    // Variable to store the user's input
    cout << "Enter A Number: "; // Prompt the user to enter a number
    cin >> num;                 // Take the input number from the user

    // Logical condition to check if the number is non-zero
    if (num != 0)
    {
        // If the number is not zero, unlock the device
        cout << "Device Unlocked" << endl;
    }
    else
    {
        // If the number is zero, display an error message
        cout << "Please Try Again Later!!" << endl;
    }

    return 0;
}