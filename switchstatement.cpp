#include <iostream>

using namespace std;

int main(){

    int day;

    cout << "Enter the day =====> ";
    cin >> day;
/*
    if (day == 1){
        cout << "weekday"<<endl;
    }
    else if(day == 2){
        cout << "weekday"<<endl;
    }
    else if (day == 3){
        cout << "weekday"<<endl;
    }
    else if (day == 4){
        cout << "weekday"<<endl;
    }
    else if (day == 5){
        cout << "weekday"<<endl;
    }
    else if (day == 6){
        cout << "weekend"<<endl;
    }
    else if (day == 7){
        cout << "weekend"<<endl;
    }
*/

    switch(day) {
        case 1:
        cout << "Weekday"<<endl;
        break;

        case 2: 
        cout << "Weekday"<<endl;
        break;

        case 3:
        cout << "Weekday"<<endl;
        break;

        case 4:
        cout << "Weekday"<<endl;
        break;

        case 5:
        cout << "Weekday"<<endl;
        break;

        case 6: 
        cout << "Weekend"<<endl;
        break;

        case 7:
        cout << "Weekend"<<endl;
        break;
    }
}