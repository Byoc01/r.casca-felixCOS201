#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

int main (){

srand(time(0));

int num1 = rand() % 10;
int num2 = rand() % 10;
int temp;

if (num1 < num2){
    temp = num2;
    num2 = num1;
    num1 = temp;
}
int subtraction = num1 - num2;

cout << "Enter Your Guess: "<<endl;
int guess;
cin >> guess;

if (subtraction == guess){
    cout << "You are correct!"<<endl;
}
else{
    cout << "Incorrect guess! "<< subtraction <<endl;
}
return 0;
}