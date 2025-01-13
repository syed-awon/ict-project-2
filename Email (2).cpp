#include <iostream>
#include <regex>
using namespace std;

// Function to validate an email address
bool isValidEmail(const string& email) {
    // Regular expression for validating an email address
    const regex pattern(R"(^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$)");
    return regex_match(email, pattern);
}

int main() {
    string email;
    
    cout << "Enter an email address to validate: ";
    cin >> email;

    if (isValidEmail(email)) {
        cout << "The email address \"" << email << "\" is valid." << endl;
    } else {
        cout << "The email address \"" << email << "\" is invalid." << endl;
    }

    return 0;
}