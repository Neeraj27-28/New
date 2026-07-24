#include <iostream>
#include <iomanip>
using namespace std;
int main () 
{
  cout << fixed << setprecision(2);
  int pin;
  for (int i = 0; i <3; i++)
  {
   cout << "Welcome to ATM machine!" << endl;
   cout << "Enter your pin:";
   cin >> pin;
   if (pin == 2728)
   {
     cout << "Access granted" << endl;

     int choice;
     double balance = 100000.00;
     double lastDeposit = 0.00;
     double lastWithdraw = 0.00;
     do
     {
       cout << "======== ATM Menu ========" << endl;
       cout << "1.Check Balance" << endl;
       cout << "2.Deposit money"<< endl;
       cout << "3.Withdraw money" << endl;
       cout << "4.Change Pin" << endl;
       cout << "5.Mini statement" << endl;
       cout << "6.Exit" << endl;

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
           if (Deposit <= 0)
           {
             cout << "Invalid deposit amount!" << endl;
             break;
           }

           balance = balance + Deposit;
           lastDeposit = Deposit;  //.Deposit ammount hai ya jo necha case 5 ma use ho rahi hai.//

           cout<< "Amount successfully deposited!" << endl;
           cout << "balance: Rs" << balance << endl;
           break;
          }

         case 3:
         {
           double Withdraw;
           cout << "Enter amount to withdraw: Rs";
           cin >> Withdraw;
           if (Withdraw > 0 && Withdraw <= balance)
           {
             balance = balance - Withdraw;
             lastWithdraw = Withdraw;  //.Withdraw ammount hai ya jo necha case 5 ma use ho rahi hai.//

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
           int Newpin;
             cout << "Enter your old PIN:";
             cin >> pin;
             if (pin == 2728)
             {
               cout <<"Enter your New Pin:";
               cin >> Newpin;
               cout << "Pin was changed successfully!" << endl;
              }
             else 
             {
               cout << "Incorrect Pin! try again." << endl;
             }
             break;

          case 5:
            cout << "============ Mini Statement =============" << endl;
            cout << "Current balance: Rs" << balance << endl;
            cout << "Last deposit: Rs" << lastDeposit << endl;        
            cout << "Last withdrawal: Rs" << lastWithdraw << endl;
            cout << "=========================================" << endl;
            break;   
         case 6:
          cout << "Thanks for using our ATM machine!" << endl;
          break;

         default:
          cout << "choose the correct option!" << endl;
        }

      } while (choice != 6);
      break;
    }
     else if(i < 2)
    {
      cout << "Incorrect pin! Please try again." << endl;
    }
     else
    {
      cout << "Access denied! your account has been blocked. Please contact customer support or Bank." << endl;
      break;
    }
  } 
} 