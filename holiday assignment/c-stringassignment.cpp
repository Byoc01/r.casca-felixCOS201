#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char result[100];

    // Copy and concatenate
    strcpy(result, str1);
    strcat(result, " ");
    strcat(result, str2);

    cout << "Concatenated string: " << result << endl;

    // Compare strings
    if (strcmp(str1, str2) == 0)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are NOT equal" << endl;

    // String to number
    char numStr[] = "123";
    int num = atoi(numStr);
    cout << "String to integer: " << num << endl;

    // Number to string
    char strNum[20];
    sprintf(strNum, "%d", num + 10);
    cout << "Integer to string: " << strNum << endl;

    return 0;
}
