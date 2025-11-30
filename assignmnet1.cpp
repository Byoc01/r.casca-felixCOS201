#include <iostream>

using namespace std;

int main (){
//ASSIGNMENT 1
    int choice;
    cout << "Select either 1, 2, 3 for assignment 1, 2 and 3 respectivily"<<endl;
    cout << "Enter in you choice: ";
    cin >> choice;
   
    if(choice == 1){
    double num1;
    cout << "Welcome to Difference Sum and Product calculator...."<<endl;
    cout << "Enter first value: "<<endl;
    cin >> num1;

    double num2;
    cout << "Enter second number: "<<endl;
    cin >> num2;

    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2; 

    cout << "The sum is: "<<sum<<endl;
    cout << "The difference is: "<<difference<<endl;
    cout << "The product is: "<<product<<endl;
 }
   
//ASSIGNMENT 2

else if(choice == 2){
    int a = 1;
    int b = 2;
    int temp;

    temp = b;
    b = a;
    a = temp;

    cout <<"a is: " <<a<<endl;
    cout <<"b is: " <<b<<endl;

}
//ASSIGNMENT 3

else if(choice == 3){
    cout << "WELCOME TO SALES CALCULATOR....."<<endl;

    cout << "Enter Total purchase: "<<endl;
    double total_purchase;
    cin >> total_purchase;

    const double TaxRate = 0.06;

    double sales_tax = TaxRate * total_purchase;
    cout << "Sale after tax is $ "<<sales_tax<<endl;
}
    return 0;
}