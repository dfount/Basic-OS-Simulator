#include <iostream>
#include "MemoryManager.h"

using namespace std;

// Show program introduction
void showIntro() {
    cout << "=== Virtual Memory Simulator ===" << endl;
    cout << "Simulates virtual memory translation using a page table." << endl;
}

// Get memory sizes from the user
void getMemorySizes(int &vSize, int &pSize) {
    cout << "Enter Virtual Memory Size (in KB): ";
    cin >> vSize;
    cout << "Enter Physical Memory Size (in KB): ";
    cin >> pSize;
}

// Simulate memory translation and display results
void runSimulation(MemoryManager &mm) {
    while (true) {
        int addr;
        cout << "\nEnter Virtual Address to Translate (-1 to quit): ";
        cin >> addr;
        
        if (addr == -1) break;  // Exit condition

        int result = mm.translate(addr);  // Translate address
        
        if (result == -1) {
            cout << "[!] Address " << addr << " could not be translated." << endl;
        } else {
            cout << "[✓] Virtual: " << addr << " -> Physical: " << result << endl;
        }
    }
}

int main() {
    int vSize, pSize;

    showIntro();  // Show program intro
    getMemorySizes(vSize, pSize);  // Get memory sizes from user

    // Create MemoryManager object with user-defined sizes
    MemoryManager mm(vSize * 1024, pSize * 1024);  // Convert KB to Bytes

    runSimulation(mm);  // Start the translation simulation

    cout << "\nSimulation Ended.\n";
    return 0;
}
