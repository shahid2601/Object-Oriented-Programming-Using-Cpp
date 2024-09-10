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
            continue; // Skip the current iteration when 'i' is 5 and move to the next iteration
        }
        // Print the value of 'i' if it's not equal to 5
        cout << i << endl;
    }

    return 0;
}