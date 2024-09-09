#include <iostream>
using namespace std;

int main()
{
    char value;
    int num1, num2;
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Which Operation Should To Perform?: ";
    cin >> value;
    cout << "Enter Second Number: ";
    cin >> num2;

    switch (value)
    {
    case '+':
        cout << "Addition: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Subtraction: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Multiplication: " << num1 * num2 << endl;
        break;
    case '/':
        cout << "Division: " << num1 / num2 << endl;
        break;
    case '%':
        cout << "Remainder: " << num1 % num2 << endl;
        break;

    default:
        cout << "Invalid Operation!!" << endl;
        break;
    }
    return 0;
}