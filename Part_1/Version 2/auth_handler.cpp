#include <iostream>
#include "auth.h"  

using namespace std;

void runAuthentication() {
    cout << "Booting up the OS. Please stand by...\n";

    if (authenticateUser()) {
        cout << "Welcome!\n";
    } else {
        cout << "System failure: User authentication unsuccessful. Please try again.\n";
    }
}
