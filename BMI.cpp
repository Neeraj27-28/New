#include<iostream>
using namespace std;
 int main() 
 {
    float Height , weight , BMI;

    cout<< " Enter your weight(Kg) and Height(m):";
    cin >> weight >> Height;
    BMI = weight / (Height * Height);

    
    cout<< "weight(Kg):" << weight << endl;
    cout<< "Height(m):" << Height << endl;
    cout<< "BMI:" << BMI << endl;

    if(BMI < 18.5)
    {
     cout<< "underweight";
    }
    else if (BMI >= 18.5 && BMI <= 24.5)
    {
        cout<< "Healthy Weight";
    }
    else if ( BMI >= 25.5 && BMI <= 29.9)
    {
        cout<< "overweight";
    }
    else
    {
        cout<< "obesity";
    }
 }