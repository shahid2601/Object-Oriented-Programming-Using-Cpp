#include <iostream>
using namespace std;

int main()
{
    int num; // Variable to store the user's input for the number
    cout << "Enter A Number: "; // Prompt the user to enter a number
    cin >> num; // Take the input number from the user
    cout << "Multiplication Table Of: " << num << endl; // Display the header for the multiplication table

    // Loop to generate and print the multiplication table of the entered number
    for (int i = 1; i <= 10; i++) // Loop from 1 to 10 to print the multiplication table
    {
        // Display each multiplication step in the format: num X i = num * i
        cout << num << " X " << i << " = " << num * i << endl;
    }
    
    return 0; // Indicating successful program termination
}