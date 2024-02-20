#include <iostream>

using namespace std;

bool isIdentifier(const char* inp) {
    if (*inp == '\0') {
        cout << "Input is empty. ";
        return false;
    }
    if (!((*inp >= 'a' && *inp <= 'z') || (*inp >= 'A' && *inp <= 'Z') || *inp == '_')) {
        cout << "First character must be an alphabet or underscore. "<<endl;
        return false;
    }
    while (*(++inp) != '\0') {
        if (!(((*inp >= 'a' && *inp <= 'z') || (*inp >= 'A' && *inp <= 'Z') || (*inp >= '0' && *inp <= '9') || *inp == '_'))) {
            cout << "Second Characters must be alphanumeric or underscore or number "<<endl;
            return false;
        }
    }

    return true;
}

int main() {
    char input[100];
    cout << "Enter an identifier: ";
    cin >> input;

    if (isIdentifier(input)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
