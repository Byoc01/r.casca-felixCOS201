#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(0));

    int numR = rand() % 101;

    cout << "Enter Your Name: "<<endl;
    string name;
    getline(cin,name);

    bool student = false;
    int course;
    int location;
    string input;
    int days;
    int lodgingperday;
    int lodgingcost;
    int total;
    int regfee;
    const double discountRate1 = 0.05;
    const double discountRate2 = 0.03;



    // student recongnition
    // student recognition
    cout << "Are you a PAU Student? (yes/no or 1/0): ";
    cin >> input;

    if (input == "yes" || input == "YES" || input == "Yes" || input == "1") {
    student = true;
    cout << "WELCOME..." << endl;
    cout << endl;
}
    else if (input == "no" || input == "NO" || input == "No" || input == "0") {
    student = false;
    cout << "Sorry, you are not a PAU student. Access denied." << endl;
    return 0;  // 🔹 this immediately stops the program
}
    else {
    cout << "Invalid Input!!" << endl;
    cout << "Sorry, you are not a student..." << endl;
    return 0;  // 🔹 also stop if input is invalid
}



    // courses

    cout <<" S/N	      Course"<<endl;
    cout << "1)	===> Photography"<<endl;    
    cout << "2)	===>  Painting"<<endl;   
    cout << "3)	===>  Fish Farming"<<endl;    
    cout << "4)      ===>  Baking"<<endl;	      
    cout << "5)	===>  Public Speaking"<<endl;
    cout <<endl;

    // selecting course
    cout << "Select a course from above by typing in the assigned number located by the left...."<<endl;
    cout <<endl;

    cout << "Pick a Course (1-5): ";
    cin >> course;
    cout << endl;



    // if for the course choice 

    if (course == 1){

        cout << "Registration fee = 10,000 and Days = 3"<<endl;
    }
    else if (course == 2){

        cout << "Registration fee = 8,000 and Days = 5"<<endl;
    }
    else if (course == 3){

        cout << "Registration fee = 15,000 and Days = 7"<<endl;
    }
    else if (course == 4){

        cout << "Registration fee = 13,000 and Days = 5"<<endl;
    }
    else if (course == 5){

        cout << "Registration fee = 5,000 and Days = 2"<<endl;
    }

    // DAYS
    if(course == 1){
        days = 3;
    }
    else if(course == 2){
        days = 5;
    }
    else if(course ==3){
        days = 7;
    }
    else if(course == 4){
        days = 5;
    }
    else if (course == 5){
        days = 2;
    }

    // REGISTERATION FEE
    
    if(course == 1){
        regfee = 10000;
    }
    else if(course == 2){
        regfee = 8000;
    }
    else if(course ==3){
        regfee = 15000;
    }
    else if(course == 4){
        regfee = 13000;
    }
    else if (course == 5){
        regfee = 5000;
    }

    cout << endl;

     //location

    cout <<" S/N	      Location"<<endl;
    cout << "1)	===> Camp House A"<<endl;    
    cout << "2)	===>  Camp House B"<<endl;  
    cout << "3)      ===>  Camp House "<<endl;    
    cout << "4)      ===>  Camp House D"<<endl;	      
    cout << "5)	===>  Public Camp House E"<<endl;
    cout <<endl;

    //selecting location
    cout << "Select a location by typing in the assigned number located by the left...."<<endl;
    cout <<endl;

    cout << "Pick a location: ";
    cin >> location;

     //LODGING FEE

    if(location == 1){
        lodgingperday = 10000;
    }
    else if(location == 2){
        lodgingperday = 2500;
    }
    else if(location ==3){
        lodgingperday = 5000;
    }
    else if(location == 4){
        lodgingperday = 13000;
    }
    else if (location == 5){
        lodgingperday = 5000;
    }
    cout << endl;

    lodgingcost = lodgingperday * days;
    cout << "Your Lodging Cost is: " << lodgingcost << endl;
    cout <<  endl;

    total = regfee + lodgingcost;
    cout << "Your total Cost is: " << total << endl;
    cout << endl;


    // if for location

    if (location == 1){

        cout << "Lodging fee = 10,000"<<endl;
    }
    else if (location == 2){

        cout << "Lodging fee = 2,500"<<endl;
    }
    else if (location == 3){

        cout << "Lodging fee = 5,000"<<endl;
    }
    else if (location == 4){

        cout << "Lodging fee = 13,000"<<endl;
    }
    else if (location == 5){

        cout << "Lodging fee = 5,000"<<endl;
    }

    cout << endl;

    // Discount Section
    if (student && (location == 1 || location == 2)) {
    double discount1 = discountRate1 * lodgingperday;
    cout << "Your 5%" " discount is: " << discount1 << endl; 
} 
    else if (student && (location != 1 && location != 2)) {
    cout << "No 5%" " discount for your location!!" << endl;
} 
    else {
    cout << "You are not a PAU student, no student discount!!" << endl;
}
    cout << endl;

    // 2nd discount

    if (days > 5 || regfee > 12000){
        double discount2 = discountRate2 * regfee;
        cout << "Your 3""%" " discount is:"<<discount2<<endl; 
    }
    else if(days < 5 || regfee < 12000) {
        cout << "No discount for you!!"<<endl;
    }


    //random number 
    if (numR == 7 || numR == 77){
        double total_promo = total + 500;
        cout << "You won $500 on promo... Congractulations."<<endl;
        cout << numR;
    }
    return 0;
}