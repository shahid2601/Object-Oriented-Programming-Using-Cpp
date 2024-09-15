#include <iostream>
using namespace std;

// Function that attempts to modify the value of the parameter
void changeValue(int num)
{
    // This will modify the local copy of 'num', not the original one in 'main'
    num = num + 10;

    // Output the modified value inside the function
    cout << num << endl;
}

int main()
{
    int num = 10;
    
    // Output the initial value of 'num'
    cout << num << endl;

    // Call the function to try and change 'num'
    changeValue(num);

    // Output the value of 'num' after the function call
    cout << num << endl;

    return 0;
}