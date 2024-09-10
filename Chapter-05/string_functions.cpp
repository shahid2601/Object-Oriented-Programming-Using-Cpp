#include <iostream>
#include <string.h>
#include <algorithm> // Header for the reverse function
using namespace std;

int main()
{
    string firstName = "Shahid Khan";

    // Display the size of the string
    // cout << firstName.size() << endl;

    // Display the length of the string (same as size)
    // cout << firstName.length() << endl;

    // Replace the first 6 characters with "Khan"
    // cout << firstName.replace(0, 6, "Khan") << endl;

    // Concatenate secondName to firstName
    // string secondName = " Khan";
    // cout << firstName.append(secondName) << endl;

    // Reverse the characters in the string
    reverse(firstName.begin(), firstName.end());
    // Output the reversed string
    cout << firstName << endl;

    return 0;
}