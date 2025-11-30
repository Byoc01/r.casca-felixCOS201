#include <iostream>

using namespace std;

int main(){
    double sales = 95000;
    double state_tax = .04 * sales;
    int country_tax = .02 * sales;

    cout << "Sales = $" <<sales<<endl;
    cout << "State Tax = $"<<state_tax<<endl;
    cout << "Country Tax = $"<<country_tax;
        
        return 0;
}