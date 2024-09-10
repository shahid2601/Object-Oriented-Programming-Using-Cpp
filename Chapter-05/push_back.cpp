#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // Initialize a string with the address
    string myAddress = "Faridabad Delhi";

    // Output the original address
    cout << "Original Address: " << myAddress << endl;

    // Add a character 'I' to the end of the string
    myAddress.push_back('I');
    // Output the modified address with the added character
    cout << "Newly Modified Address: " << myAddress << endl;

    // Remove the last character from the string
    myAddress.pop_back();
    // Output the address after removing the last character
    cout << "Pop Modified Address: " << myAddress << endl;

    return 0;
}