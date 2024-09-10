#include <iostream>
using namespace std;

// Function to calculate the sum of two numbers
int sum()
{
    int a = 10, b = 20; // Initialize two variables 'a' and 'b'
    return a + b;       // Return the sum of 'a' and 'b'
}

int main()
{
    // Call the sum() function and print the returned result
    cout << sum() << endl; // Output: 30
    return 0;
}