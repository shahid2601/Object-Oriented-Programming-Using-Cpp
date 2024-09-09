#include <iostream>
using namespace std;

int main()
{
    int passwd = 2461; // Pre-defined correct password
    int mypasswd;      // Variable to store the user's input

    // Prompt the user to enter their password
    cout << "Enter Your Password: " << endl;
    cin >> mypasswd; // Take the password input from the user

    // Loop to check if the entered password matches the correct one
    while (passwd > 0) // This condition can be considered unnecessary for a password check, but it runs the loop
    {
        if (passwd != mypasswd) // If the entered password is incorrect
        {
            cout << "Enter Your Password: " << endl; // Ask the user to try again
            cin >> mypasswd;
        }
        else // If the password matches
        {
            cout << "Unlocked" << endl; // Unlock and end the loop
            break;
        }
    }

    return 0; // Indicating successful program termination
}