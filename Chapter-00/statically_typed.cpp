#include <iostream>
using namespace std;

int main()
{
    // a = 10;
    // Error: The variable 'a' is being assigned a value without declaring its data type.
    // In C++, variables must be declared with a specific data type before use, making it a statically-typed language.
    // cout << a;

    // Statically-Typed Language Explanation:
    // C++ is statically typed, meaning the data type of a variable is known at compile time.
    int a = 10; // Here, 'a' is declared as an integer and initialized with the value 10
    cout << a; // Outputs the value of 'a' (which is 10)

    // a = "SAM";
    // Error: This will cause an error because you cannot assign a string ("SAM") to an integer variable ('a').
    // In a statically-typed language like C++, the type of a variable cannot be changed once it is declared.
    // cout << a;

    return 0;
}