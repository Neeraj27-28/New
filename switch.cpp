#include<iostream>
using namespace std;
int main() 
{
    int months;
    cout<< "Select any months Between (1 to 12):";
    cin >> months;
    switch(months)
    {
        case 1 :
        cout<< "January";
        break;

        case 2 :
        cout << "Febrary";
        break;
        
        case 3 :
        cout << "March";
        break ;

        case 4 :
        cout << "April";
        break;

        case 5 :
        cout << "May";
        break;

        case 6 :
        cout << "June";
        break;

        case 7 :
        cout<< "july";
        break;

        case 8 : 
        cout << "August";
        break;

        case 9 :
        cout << "September";
        break;

        case 10 :
        cout << "Octuber";

        case 11 :
        cout << "November";
        break;

        case 12 :
        cout << "December";
        break;

        default:
        cout<< "choose a correct number";
        break;

    }
}