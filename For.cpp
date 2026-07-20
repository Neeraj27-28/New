#include <iostream>
#include <iomanip>
using namespace std;
int main () 
{
  cout << fixed << setprecision(2);
  int Pin;
  cout << "Enter your pin:";
  cin >> Pin;
  if (Pin == 2728)
  {
    cout << "Access granted" << endl;

    int choice;
    double balance = 100000.00;
    do
    {
      cout << "======== ATM menue ========" << endl;
      cout << "1.Check Balance" << endl;
      cout << "2.Deposite money"<< endl;
      cout << "3.Withdraw money" << endl;
      cout << "4.Exit" << endl;

      cout << "Choose an option:";
      cin >> choice;

      switch (choice)
      {
        case 1:
          cout << "Your balance is: Rs" << balance << endl;
          break;

        case 2:
        {
          double Deposit;
          cout << "Enter amount to deposit: Rs";
          cin >> Deposit;

          balance = balance + Deposit;

          cout<< "Amount successfully deposited!" << endl;
          cout << "balance: Rs" << balance << endl;
          break;
        }

        case 3:
        {
          double Withdraw;
          cout << "Enter amount to withdraw: Rs";
          cin >> Withdraw;
          if (Withdraw <= balance)
          {
            balance = balance - Withdraw;
            cout << "Amount successfully withdrawn!" << endl;
            cout << "Remaining balance: Rs" << balance << endl;
          }
          else
          {
            cout << "Insufficient balance!" << endl;
          }
          break;
        }

        case 4:
          cout << "Thanks for using our ATM machine!" << endl;
          break;

        default:
          cout << "choose the correct option!" << endl;
      }

    } while (choice != 4);
  }
  else
  {
    cout << "Access denied" << endl;
  }
}
