#include <iostream> // Include the standard input-output stream library
using namespace std; // Use the standard namespace

int num = 100;

int main()
{
    int num = 10;
    cout << "The Number Is: " << num << endl; // This will print num = 10
    cout << "The Number Is: " << :: num << endl; // When We Add :: It will print num = 100

    return 0;
}