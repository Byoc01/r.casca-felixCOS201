#include <iostream>

using namespace std;

int main(){
cout << "WELCOME TO FAHRENHEIT CALCULATOR......"<<endl;

cout << "Enter 1 for celsius converter. "<<endl;
cout << "Enter 2 for fahreheit converter. "<<endl;


cout << "Which are you coverting to? ";
int choice;
cin >> choice;

const double value = 0.555555555;

if(choice == 1){
    int num1;
    cout << "Enter value: ";
    cin >> num1;

    double celsius = value * (num1 - 32);
    cout << celsius;
}

else if(choice == 2){
    int num2;
    cout << "Enter Value: ";
    cin >> num2;

    double Fahrenheit = (1.8 * num2) + 32;
    cout << Fahrenheit;

    return 0;
};
}
