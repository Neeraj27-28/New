#include <iostream>
using namespace std;
int main()
 {
    int age;
    char booked;
    cout<< "Enter your age:";
    cin >> age;

    while (age <=10 || age >= 100)
    {
        cout<< "Invalid age! Enter again:";
        cin >> age;
    }
    if(age >= 10 && age <= 100)
    {
        cout<< "Is the Ticket booked? (Y/N):";
        cin >> booked;
        if(booked == 'Y' || booked == 'y')
        {
            cout<< "Enjoy the movie";
        }
        else
        {
            cout<< "Please book the ticket first";
        }
    }
    else
    {
        cout<< "Entry not allowed";
    }

}