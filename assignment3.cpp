#include <iostream>

using namespace std;

int main(){

    cout << "WELCOME TO SALES CALCULATOR....."<<endl;

    cout << "Enter Total purchase: "<<endl;
    double total_purchase;
    cin >> total_purchase;

    const double TaxRate = 0.06;

    double sales_tax = TaxRate * total_purchase;
    cout << "Sale after tax is $ "<<sales_tax<<endl;

    return 0;

}