#include <iostream>

using namespace std;

int main(){

    int secretNum = 7;
    int guess;
    int guesslimit = 3;
    int guesstrys = 0;
    cout << "Enter Your Guess: ";
    cin >> guess;

    while(secretNum != guess){

        if(secretNum != guess){

            cout << "Enter Your Guess: ";
            cin >> guess;
        }
        else{

            cout << "You Win!";
        }

        guesstrys++;
    }

    return 0;

}
