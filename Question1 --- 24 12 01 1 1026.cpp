#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    string name;
    int jamb, age, hostelChoice;
    double waec;
    bool firstChoice, disciplinary;

    // Fixed values
    const double baseTuition = 1500000;
    double hostelFee = 0;
    string hostelName = "";
    string admissionStatus = "";
    int scholarshipPercent = 0;

    // Inputs
    cout << "Enter full name: ";
    getline(cin, name);

    cout << "Enter JAMB score: ";
    cin >> jamb;

    cout << "Enter WAEC average: ";
    cin >> waec;

    cout << "Enter age: ";
    cin >> age;

    cout << "First choice PAU? (1/0): ";
    cin >> firstChoice;

    cout << "Any disciplinary record? (1/0): ";
    cin >> disciplinary;

    cout << "Hostel (1=Main, 2=Annex, 3=Day): ";
    cin >> hostelChoice;


    // ADMISSION DECISION

    if (disciplinary || age < 15) {
        admissionStatus = "Rejected";
    }
    else if ((jamb >= 220 && waec >= 60 && firstChoice) ||
             (jamb >= 200 && waec >= 70)) {
        admissionStatus = "Admitted";
    }
    else {
        admissionStatus = "Pending";
    }


    // SCHOLARSHIP CALCULATION

    if (admissionStatus == "Admitted") {
        if (jamb >= 320) scholarshipPercent = 30;
        else if (jamb >= 280) scholarshipPercent = 20;
        else if (jamb >= 240) scholarshipPercent = 10;

        if (waec >= 80 && firstChoice) {
            scholarshipPercent += 5;
        }

        if (scholarshipPercent > 35) scholarshipPercent = 35;
    }

    
    // HOSTEL ASSIGNMENT

    if (admissionStatus == "Admitted") {
        if (hostelChoice == 1) {
            hostelName = "Main Hostel";
            hostelFee = 180000;
        }
        else if (hostelChoice == 2) {
            hostelName = "Annex Hostel";
            hostelFee = 120000;
        }
        else {
            hostelName = "Day Student";
            hostelFee = 0;
        }
    }
    else if (admissionStatus == "Pending") {
        hostelName = "On Hold";
        hostelFee = 0;
    }
    else {
        hostelName = "Not Applicable";
        hostelFee = 0;
    }


    // SCHOLARSHIP TUITION CALC

    double tuitionAfterScholarship =
        baseTuition - (scholarshipPercent / 100.0 * baseTuition);


    // RANDOM MERIT GRANT

    srand(time(0));
    int r = rand() % 100 + 1;

    bool isPrime =
        (r==2 || r==3 || r==5 || r==7 || r==11 || r==13 || r==17 || r==19 ||
         r==23 || r==29 || r==31 || r==37 || r==41 || r==43 || r==47 || r==53 ||
         r==59 || r==61 || r==67 || r==71 || r==73 || r==79 || r==83 || r==89 ||
         r==97);

    double meritGrant = 0;
    if (admissionStatus == "Admitted" && isPrime) {
        meritGrant = 50000;
    }


    // TOTAL PAYABLE

    double totalPayable = tuitionAfterScholarship + hostelFee - meritGrant;
    if (totalPayable < 0) totalPayable = 0;

    // OUTPUT
   cout << "\n==============================\n";
cout << "Name: " << name << endl;
cout << "Admission Status: " << admissionStatus << endl;

if (admissionStatus == "Admitted") {
    cout << "Scholarship: " << scholarshipPercent << "%  ";
    cout << "Tuition After Scholarship: ₦" << tuitionAfterScholarship << endl;

    cout << "Hostel: " << hostelName << "   Fee: " << hostelFee << endl;

    cout << "Random draw: " << r;
    cout << "   Merit Grant: " << meritGrant << endl;

    cout << "TOTAL PAYABLE: " << totalPayable << endl;
}
else if (admissionStatus == "Pending") {
    cout << "Hostel: On Hold   Fee: 0\n";
}
else { // Rejected
    cout << "Hostel: Not Applicable   Fee: 0\n";
}
    return 0;
}
