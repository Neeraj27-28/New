#include <iostream>
using namespace std;
int main() 
{
  int pin; 
  for (int attempt = 1; attempt <= 3; attempt++) 
  {
    cout << "Enter your pin: ";
    cin >> pin;
    if (pin == 2728) 
    {
      cout << "Access granted!" << endl;
      break;
    } 
    else if (attempt < 3) 
    {
      cout << "Access denied. try again." << endl;
    } 
    else
    {
      cout << "Incorrect pin. Accout Lockes. you have reached your maximum attemapt . Plese contact the bank." << endl;
    }
  }
} 