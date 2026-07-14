#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    while (age < 0 || age > 18)
    {
        cout << "Invalid age! Enter again: ";
        cin >> age;
    }

    cout << "Your age is " << age;

    return 0;
}