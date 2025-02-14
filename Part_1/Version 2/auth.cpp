#include <iostream>
#include "auth.h"

using namespace std;

bool authenticateUser() {
    string username, password;
    
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    // Hardcoded credentials
    if (username == "admin" && password == "password123") {
        return true;
    } else {
        return false;
    }
}
