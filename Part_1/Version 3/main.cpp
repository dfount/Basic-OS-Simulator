#include <iostream>
#include "auth_handler.h"

using namespace std;

void showWelcomeScreen() {
    cout << "====================================\n";
    cout << "   Welcome to the Basic OS System   \n";
    cout << "====================================\n";
    cout << "This system requires authentication.\n";
    cout << "Please enter your username and password.\n";
    cout << "Enter 'q' at any point to quit the program.\n\n";
}

int main() {
    showWelcomeScreen();

    // Allow user to quit before running authentication
    char quitChoice;
    cout << "Do you want to quit? (y/n): ";
    cin >> quitChoice;
    if (quitChoice == 'y' || quitChoice == 'Y') {
        cout << "Exiting the program...\n";
        return 0; // Exit the program immediately
    }

    // Proceed with authentication process from auth_handler.cpp
    authenticateUser();

    // Pause before exiting (Windows)
    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}
