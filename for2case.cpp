#include <iostream>
using namespace std;
int main() 
{
    int pin;
    for (int Attempt = 1; Attempt <= 3; Attempt++)
    {
        cout << "Enter your PIN: ";
        cin >> pin;

        if (pin == 2728)
        {
            cout << "Access granted!" << endl;
        }
        else if (Attempt < 3)
        {
            cout << "Incorrect PIN. Please try again." << endl;
        }
        else
        {
            cout << "Incorrect PIN. Attempt " << Attempt << " of 3." << " Account locked." << endl;
        }

    }
    
}