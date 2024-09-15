#include <iostream>
using namespace std;

// Function to change the value using a pointer
void changeValue(int *ptr)
{
    // Dereferencing the pointer to access and modify the value it points to
    *ptr = *ptr + 10;
    cout << "Pointer Value: " << *ptr << endl;
}

int main()
{
    int num;

    // Taking input for the variable 'num'
    cout << "Enter Value: ";
    cin >> num;

    // Displaying the original value of 'num'
    cout << "Original Value: " << num << endl;

    // Passing the address of 'num' to the function to change its value
    changeValue(&num);

    // Displaying the new value of 'num' after modification
    cout << "New Value: " << num << endl;

    return 0;
}