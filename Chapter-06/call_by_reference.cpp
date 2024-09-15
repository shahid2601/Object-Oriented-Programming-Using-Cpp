#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize an integer variable 'a'
    int a = 20;

    // Output the initial value of 'a'
    cout << a << endl;

    // Declare a reference variable 'ref' that refers to 'a'
    int &ref = a;

    // Output the value of 'ref', which is the same as 'a'
    cout << ref << endl;

    // Increment the value of 'ref', which also affects 'a' because 'ref' refers to 'a'
    cout << ++ref << endl;

    // Output the value of 'a' again to show that it was changed through 'ref'
    cout << a << endl;

    return 0;
}