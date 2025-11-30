#include <iostream>

using namespace std;

bool verifyPin(int correctPin) {
    int pin, attempts = 0;

    while (attempts < 3) {
        cout << "Enter PIN: ";
        cin >> pin;

        if (pin == correctPin) return true;

        cout << "Incorrect PIN. Try again.\n";
        attempts++;
    }

    return false;
}

void displayMenu(){
    
    cout << endl;
    cout << "====== ATM MENU ======"<<endl;
    cout << endl;
    cout << "1. View Balance"<<endl;
    cout << "2. Deposit Cash"<<endl;
    cout << "3. Withdraw Cash"<<endl;
    cout << "4. Reset PIN"<<endl;
    cout << "5. EXIT"<<endl;
}

double viewBalance (double balance){
    cout << endl;
    cout << "Current Balance is: "<<balance<<endl;
    return balance;
}

double depositMoney (double balance){
    double amount;
    cout << "Enter deposit amount: "<<endl;
    cin >> amount;

    if(amount <= 0 ){
        cout << "Invalid Input"<<endl;
        return balance;
    }

    balance += amount;
    cout << "Deposit Successful"<<endl;
    return balance;
}

double withdrawMoney(double balance, double dailyLimit) {
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Invalid amount.\n";
    }
    else if (amount > balance) {
        cout << "Insufficient funds.\n";
    }
    else if (amount > dailyLimit) {
        cout << "Amount exceeds daily limit.\n";
    }
    else {
        balance -= amount;
        cout << "Withdrawal successful.\n";
    }

    return balance;
}

int resetPin(int currentPin){

    int oldPin;
    int newPin;

    cout << "Enter old pin: "<<endl;
    cin >> oldPin;

    if (oldPin != currentPin){

        cout << "Invalid Old Pin"<<endl;
        return currentPin;
    }

    cout << "Enter new pin: "<<endl;
    cin >> newPin;

    cout << "Pin Successfully Changed"<<endl;
    return newPin;


}


int main(){

    int choice;
    double balance = 50000;
    double dailyLimit = 20000;
    int pin = 4321;
    cout << endl;

    cout << "=== Welcome to the ATM ===\n";
    cout << endl;

     if (!verifyPin(pin)) {
        cout << "Account Locked. Please contact your bank.\n";
        return 0;
    }

    cout << endl;

    do {
        displayMenu();
        cout << endl;
        cout << "Select choice: ";
        cin >> choice;

        switch(choice){
            case 1:
            balance = viewBalance(balance);
            break;

            case 2:
            balance = depositMoney(balance);
            break;

            case 3:
            balance = withdrawMoney(balance, dailyLimit);
            break;

            case 4:
            pin = resetPin (pin);
            break;

            case 5:
            cout << "Thank you for using out ATM"<<endl;
            break;

            default:
            cout << "Invalid Option"<<endl;
        }

     } while (choice != 5);
     return 0;

};
