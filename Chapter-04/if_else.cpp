#include <iostream>
using namespace std;

int main()
{
    int num;                    // Variable to store the user's input
    cout << "Enter A Number: "; // Prompt the user to enter a number
    cin >> num;                 // Take the input number from the user

    // Check if the number is even by using the modulus operator
    if (num % 2 == 0)
    {
        // If the remainder is 0 when divided by 2, the number is even
        cout << "The Number Is Even" << endl;
    }
    else
    {
        // If the remainder is not 0, the number is odd
        cout << "The Number Is Odd" << endl;
    }

    return 0;
}