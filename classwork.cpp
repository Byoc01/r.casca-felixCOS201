#include <iostream>

using namespace std;

int main (){

    cout << "Enter a number: "<<endl;
    int number;
    cin >> number;

    if (number%5 == 0){
        cout << "HiFive!"<<endl;
    }
    else if(number%2 == 0){
        cout << "HiEven!";
    }
    else{
        cout << "HiOdd!";
    }
    return 0;
}