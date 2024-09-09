#include <iostream>
using namespace std;

int main()
{
    // The following process to print Welcome multiple times is lengthy and large number of lines of code we have to written. So to save the time the loop is used in program.
    // cout << "Welcome!!" << endl;
    // cout << "Welcome!!" << endl;
    // cout << "Welcome!!" << endl;
    // cout << "Welcome!!" << endl;
    // cout << "Welcome!!" << endl;
    // cout << "Welcome!!" << endl;
    // cout << "Welcome!!" << endl;
    // cout << "Welcome!!" << endl;
    // cout << "Welcome!!" << endl;
    // cout << "Welcome!!" << endl;

    // There are three types of loops:
    // 1. for loop
    // 2. while loop
    // 3. do while loop

    // Here's a example of loop to save the time and to avoid the lengthy process:

    int n = 10;

    for (int i = 0; i < n; i++)
    {
        cout << "Welcome!!" << endl;
    }
    

    return 0;
}