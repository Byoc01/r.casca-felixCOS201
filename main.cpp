#include <iostream>

using namespace std;

int main(){
    int a = 2;
    int b = 3;
    int c = b;
    b = a;
    a = c;

    cout <<a;
    return 0;
}