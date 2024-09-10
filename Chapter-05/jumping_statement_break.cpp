#include <iostream>
using namespace std;

int main()
{
    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        // Check if the value of 'i' is equal to 5
        if (i == 5)
        {
            break; // Exit the loop when 'i' is 5
        }
        // Print the value of 'i' if it's less than 5
        cout << i << endl;
    }
    // This message is displayed after the loop is terminated
    cout << "Stopped!!" << endl;

    return 0;
}