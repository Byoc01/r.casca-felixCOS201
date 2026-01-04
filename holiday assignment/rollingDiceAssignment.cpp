#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int count[6] = {0};

    srand(time(0));

    for (int i = 0; i < 10000; i++) {
        int roll = rand() % 6;  // 0–5
        count[roll]++;
    }

    for (int i = 0; i < 6; i++) {
        cout << "Face " << i + 1 << ": " << count[i] << " times" << endl;
    }

    return 0;
}
