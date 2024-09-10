#include <iostream>
using namespace std;

int main()
{
    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        // Check if the value of 'i' is 5
        if (i == 5)
        {
            goto out; // When 'i' is 5, jump to the label 'out'
        }
        // Print the value of 'i' if it's less than 5
        cout << i << endl;
    }
    // This message would normally be printed after the loop completes,
    // but the 'goto' statement will bypass this when 'i' equals 5.
    cout << "Stopped!!" << endl;
out:
    // Label to which the 'goto' statement jumps
    cout << "Ignore Stopped Message!!" << endl;

    return 0;
}