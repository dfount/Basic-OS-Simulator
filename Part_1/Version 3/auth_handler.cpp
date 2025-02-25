#include <iostream>
#include "auth.h"

using namespace std;

// Ask if user wants to set up a custom username and password
bool setupCustomCredentials(string &customUser, string &customPass) {
    char choice;
    cout << "Would you like to set a custom username and password? (y/n): ";
    cin >> choice;
    
    if (choice == 'y' || choice == 'Y') {
        cout << "Enter custom username: ";
        cin >> customUser;
        cout << "Enter custom password: ";
        cin >> customPass;
        return true;
    }
    return false;
}

void authenticateUser() {
    string customUser = "admin", customPass = "password123";

    // Allow user to set up custom login
    bool customLogin = setupCustomCredentials(customUser, customPass);

    cout << "\nBooting up the OS. Please stand by...\n";

    // Ask if the user wants to quit during authentication
    char quitChoice;
    cout << "Do you want to quit? (y/n): ";
    cin >> quitChoice;
    if (quitChoice == 'y' || quitChoice == 'Y') {
        cout << "Exiting the program...\n";
        exit(0); // Exit the program immediately
    }

    if (authenticateUser(customUser, customPass)) {
        cout << "Welcome to your OS environment!\n";
    } else {
        cout << "System failure: User authentication unsuccessful. Please try again.\n";
    }
}
