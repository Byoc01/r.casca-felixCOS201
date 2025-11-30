#include <iostream>

using namespace std;

int main(){

    cout <<"WELCOME TO SIMPLE ADDITION CALCULATOR" <<endl;

    int first_value;

    cout <<"Enter first value: ";
    cin >> first_value;

    int second_value;

    cout <<"Enter second value:";
    cin >> second_value;

    double addition = first_value + second_value;

    cout <<"The Answer is: "<<addition;
}