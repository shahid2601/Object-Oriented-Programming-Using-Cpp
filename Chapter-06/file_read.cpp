#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    string str;
    infile.open("//home//black//Desktop//file.txt");
    while (getline(infile, str))
    {
        cout << str << endl;
    }
    infile.close();

    return 0;
}