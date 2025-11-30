#include <iostream>

using namespace std;

int getMax(){

int result;

int num1;
int num2;
int num3;

cout << "Enter first number"<<endl;


cin >> num1;

cout << "Enter second number"<<endl;

cin >> num2;

cout << "Enter the third number"<<endl;

cin >> num3;

if(num1 > num2 && num3){

    cout << "Yes";
}

else if (num1 == num2) {

    cout << "They are equal";
} 

else{
    cout << "No";

}

return result;
}

int main(){

    getMax();
 
    return 0;

}