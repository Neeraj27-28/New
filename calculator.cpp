#include<iostream>
using namespace std;
int main() 
{
    int a = 5 , b = 20;
    char op;
    cout << "Emter any operator (+, -, *, /) :";
    cin >> op;
    switch (op)
    {
    case '+':
        cout<<  a + b ;
        break;

        case '-' :
        cout<<  a - b ;
        break;

        case '*' :
        cout <<  a * b ;
        break;

        case '/':
        cout <<  a / b ;
        break;
    
    default:
        cout << "Enter a correct operator";
        break;
    }
}