#include <iostream>
using namespace std;

int main()
{
    string signal;                     // Variable to store the signal input from the user
    cout << "Enter Signal Notation: "; // Prompt the user to enter a signal (e.g., "red" or "green")
    cin >> signal;                     // Take the signal input

    // Check if the signal is "red"
    if (signal == "red")
    {
        cout << "Stop Driving!!" << endl; // Display message to stop if the signal is red
    }
    // Check if the signal is "green"
    if (signal == "green")
    {
        cout << "Keep Driving!!" << endl; // Display message to continue driving if the signal is green
    }
    // Check for invalid signal input (neither "red" nor "green")
    if (signal != "red" && signal != "green")
    {
        cout << "Invalid Signal Input!" << endl; // Display error message for invalid input
    }

    return 0;
}