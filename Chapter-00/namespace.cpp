#include <iostream> // Include the standard input-output stream library
using namespace std; // Use the standard namespace

// Define the first namespace
namespace first
{
    // Function to display "Shahid"
    void show()
    {
        cout << "Shahid" << endl; // Print "Shahid" followed by a new line
    }
}

// Define the second namespace
namespace second
{
    // Function to display "Khan"
    void show()
    {
        cout << "Khan" << endl; // Print "Khan" followed by a new line
    }
}

int main()
{
    first::show(); // Call the show function from the first namespace (prints "Shahid")
    second::show(); // Call the show function from the second namespace (prints "Khan")

    return 0; // Return 0 to indicate successful program execution
}