#include <iostream>
using namespace std;
int main() 
{
    int n;
    int frectional = 1;
    cout << "Enter a number:"; 
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        frectional = frectional * i;
    }
    cout << "frectional:" << frectional;

} 