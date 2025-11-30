#include <iostream>

#include <ctime>

#include <cstdlib>

using namespace std;

int main() {

srand(time(0));

cout <<"This are the two numbers from the dice:"<<endl;

const int MaxValue = 6;
const int MinValue = 1;

int number1 = (rand() % (MaxValue - MinValue + 1 ))+ MinValue;

int number2 = (rand() % (MaxValue - MinValue + 1 ))+ MinValue;

cout <<number1<<endl;
cout <<number2<<endl;

return 0;
}
