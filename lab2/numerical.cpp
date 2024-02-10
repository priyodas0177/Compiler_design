#include <iostream>
using namespace std;

bool Numeric(const string &input) {
    for (char a : input) {
        if (a < '0' || a > '9') {
            return false;
        }
    }
    return true;
}

int main() {
    string userInput;
    cout << "Enter a value: ";
    cin >> userInput;

    if (Numeric(userInput)) {
        cout << "Numeric value"<<endl;
    } else {
        cout << "Not numeric value"<<endl;
    }

    return 0;
}
