#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int scores[n];
    int best = 0;

    for (int i = 0; i < n; i++) {
        cout << "Enter score for student " << i + 1 << ": ";
        cin >> scores[i];
        if (scores[i] > best)
            best = scores[i];
    }

    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << " score is " << scores[i] << " and grade is ";

        if (scores[i] >= best - 10)
            cout << "A";
        else if (scores[i] >= best - 20)
            cout << "B";
        else if (scores[i] >= best - 30)
            cout << "C";
        else if (scores[i] >= best - 40)
            cout << "D";
        else
            cout << "F";

        cout << endl;
    }

    return 0;
}
