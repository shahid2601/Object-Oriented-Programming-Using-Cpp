#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize an integer variable 'a'
    int a = 10;

    // Declare a pointer 'ptr' and assign it the address of 'a'
    int *ptr = &a;

    // Declare a pointer-to-pointer 'ptr1' and assign it the address of 'ptr'
    int **ptr1 = &ptr;

    // Output the value of 'a'
    cout << a << endl;

    // Output the value of 'ptr', which is the address of 'a'
    cout << ptr << endl;

    // Output the value at the address stored in 'ptr', which is the value of 'a'
    cout << *ptr << endl;

    // Output the address of 'a' directly
    cout << &a << endl;

    // Output the address of the pointer 'ptr'
    cout << &ptr << endl;

    // Output the value of 'ptr1', which is the address of 'ptr'
    cout << ptr1 << endl;

    // Output the value at the address stored in 'ptr1', which is 'ptr' (address of 'a')
    cout << *ptr1 << endl;

    // Output the value at the address pointed to by the value stored in 'ptr1', which is the value of 'a'
    cout << **ptr1 << endl;

    // Output the address of 'ptr1'
    cout << &ptr1 << endl;

    return 0;
}