#include <iostream>
using namespace std;

int main()
{
    int passwd; // Variable to store the user's input for the password
    cout << "Enter A Password: " << endl;
    cin >> passwd; // Take password input from the user

    do
    {
        cout << passwd << endl; // Print the entered password

        // The break statement immediately exits the loop after printing the password,
        // meaning the loop will not continue, regardless of the password entered.
        break;

    } while (passwd != 2461); // Condition: The loop should continue if the password is not 2461,
                               // but because of the break statement, this condition never takes effect.
    
    return 0; // Indicating successful program termination
}