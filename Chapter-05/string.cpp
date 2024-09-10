#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string myName; // Declare a string variable to store the user's name

    // Prompt the user to enter their name
    cout << "Enter Your Name: ";

    // Read the entire line of input (including spaces) into the 'myName' variable
    getline(cin, myName);

    // Output the name that was entered
    cout << "Your Name: " << myName << endl;

    return 0;
}