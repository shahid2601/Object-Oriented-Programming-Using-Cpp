#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    ofstream onfile;
    char str;
    infile.open("//home//black//Desktop//file.txt");
    onfile.open("//home//black//Desktop//file1.txt");
    while (infile.get(str))
    {
        onfile.put(str);
    }
    cout << "Copied!!" << endl;
    infile.close();
    onfile.close();

    return 0;
}