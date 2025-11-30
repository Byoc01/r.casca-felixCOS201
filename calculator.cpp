#include <iostream>

using namespace std;

int main(){

int num1;
int num2;
char op;

cout << "Enter first number: "<<endl;
cin >> num1;

cout << "Choose your operation: " <<endl;
cout << "Eg. +, -, /, * "<<endl;
cin >> op;

cout << "Enter second number: "<<endl;
cin >> num2;

if(op == '+'){

  int addition = num1 + num2;
  cout << "Your result is: "<<addition<<endl;
} else if(op == '-'){

    int subtraction = num1 - num2;
    cout << "Your result is: "<<subtraction<<endl;
}
else if(op == '/'){

    int division = num1 / num2;
    cout << "Your result is: "<<division<<endl;
}
else if (op == '*'){

   int multiplication = num1 * num2;
   cout << "Your result is: "<<multiplication<<endl
}
else {
    cout << "Invalid Operator";
}

return 0;
}
