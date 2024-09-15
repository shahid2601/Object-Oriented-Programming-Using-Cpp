#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream onfile;
    onfile.open("//home//black//Desktop//file.txt");
    cout << "File Created Successfully!!" << endl;
    onfile.close();
    return 0;
}