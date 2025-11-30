#include <iostream>

using namespace std;

int main(){

    cout << "What is your age?"<<endl;
    int age;
    cin >> age;

    if(age >= 18){

        cout << "Your are an adult."<<endl;
    }
    else{

        cout << "You are underage."<<endl;
    }
    return 0;
}