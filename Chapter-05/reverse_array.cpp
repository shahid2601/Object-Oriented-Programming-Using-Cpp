#include <iostream>
using namespace std;

int main()
{
    // Declare an array of size 5
    int arr[5];

    // Prompt the user to enter array elements
    cout << "Enter Array Elements: ";

    // Loop to take input from the user for all 5 elements
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i]; // Store each input in the array
    }

    // Display the array elements in reverse order
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << " "; // Print each element from the end of the array to the beginning
    }
    cout << endl; // Print a newline after output

    return 0;
}