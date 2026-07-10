#include <iostream>
using namespace std;
int main() {
    int age;
    char booked;
    cout<< "Enter your age:";
    cin >> age;

    if(age >= 21)
    {
        cout<< "Is the Ticket booked? (Y/N):";
        cin >> booked;
        if(booked == 'Y' || booked == 'y')
        {
            cout<< "Enjoy the movie";
        }
        else
        {
            cout<< "Please book the ticket fist";
        }
    }
    else
    {
        cout<< "Entrary not allowed";
    }

}