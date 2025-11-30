#include <iostream>

#include <cmath>

using namespace std;


int main(){

    cout <<"AREA OF A CIRCLE CALCULATOR"<<endl;

    cout << "Enter the radius: "<<endl;

    double radius;

    cin >> radius;

    const double pi = 3.14159265359;

    double area = pi * (pow(radius,2));

    cout <<"The Area of the Circle is: "<<area;

    return 0;
}