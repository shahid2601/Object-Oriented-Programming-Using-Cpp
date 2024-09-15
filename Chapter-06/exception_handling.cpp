#include <iostream>
#include <stdexcept> // For exception handling
using namespace std;

int main()
{
    double bal = 1000.00;
    try
    {
        double amt;

        // Deposit Section
        cout << "Enter Deposit Amount: ";
        cin >> amt;

        if (amt <= 0)
        {
            throw invalid_argument("Invalid Deposit Amount!!");
        }

        bal = bal + amt;
        cout << "Available Balance after Deposit: " << bal << endl;

        // Withdrawal Section
        cout << "Enter Withdrawal Amount: ";
        cin >> amt;

        if (amt <= 0)
        {
            throw invalid_argument("Invalid Withdrawal Amount!!");
        }

        if (amt > bal)
        {
            throw runtime_error("Insufficient Balance!!");
        }

        bal = bal - amt;
        cout << "Available Balance after Withdrawal: " << bal << endl;
    }
    catch (const exception &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}