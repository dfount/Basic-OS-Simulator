#include <iostream>
#include "auth.h"

using namespace std;

bool authenticateUser(const string &validUser, const string &validPass) {
    string username, password;
    
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    return (username == validUser && password == validPass);
}
