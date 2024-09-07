#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 29.3;
    char c = 'c';
    string d = "shahid";

    cout << sizeof(int) << " Bytes" << endl;
    cout << sizeof(char) << " Byte" << endl;
    cout << sizeof(float) << " Bytes" << endl;
    cout << sizeof(double) << " Bytes" << endl;
    cout << sizeof(long) << " Bytes" << endl;
    cout << sizeof(bool) << " Byte" << endl;
    cout << sizeof(string) << " Bytes" << endl;

    return 0;
}