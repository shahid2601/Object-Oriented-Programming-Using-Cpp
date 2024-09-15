#include <iostream>
using namespace std;

// Function to calculate the factorial of a number recursively
int factorial(int num)
{
    // Base case: factorial of 0 is 1
    if (num == 0)
    {
        return 1;
    }
    else
    {
        // Recursive case: num * factorial(num - 1)
        return num * factorial(num - 1);
    }
}

int main()
{
    int num;
    // Input a number from the user
    cout << "Enter A Number: ";
    cin >> num;

    // Call the factorial function and store the result
    int value = factorial(num);
    // Output the result
    cout << "Factorial of " << num << " is " << value << endl;

    return 0;
}