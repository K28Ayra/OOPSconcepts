#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    double bal = 100.0;
    double amt;
    try
    {
        cout << "enter deposit amt=" << endl;
        cin >> amt;
        if (amt <= 0)
        {
            throw invalid_argument("Amout insuficient");
        }
        bal = bal + amt;
        cout << "Available amt=" << bal;
        cout << endl;
        cout << "Enter withdhraw amt=";
        cin >> amt;
        if (amt > bal)
        {
            throw invalid_argument("Amount insuficient");
        }
        bal = bal - amt;
        cout << "Available amt=" << bal;

        if (bal < 0)
        {
            throw runtime_error("Insufficient");
        }
    }
    catch (exception &e)
    {
        cout << e.what() << endl;
    }

    return 0;
}