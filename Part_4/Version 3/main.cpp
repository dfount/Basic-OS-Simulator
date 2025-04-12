#include <iostream>
#include "MemoryManager.h"

using namespace std;

void showIntro() {
    cout << "=== Virtual Memory Simulator ===" << endl;
}

void getMemorySizes(int &vSize, int &pSize) {
    cout << "Enter Virtual Memory Size (in KB): ";
    cin >> vSize;
    cout << "Enter Physical Memory Size (in KB): ";
    cin >> pSize;
}

void runSimulation(MemoryManager &mm) {
    while (true) {
        int addr;
        cout << "\nEnter Virtual Address to Translate (-1 to quit): ";
        cin >> addr;

        if (addr == -1) break;

        int result = mm.translate(addr);
        if (result == -1) {
            cout << "[!] Address " << addr << " could not be translated." << endl;
        } else {
            cout << "[✓] Virtual: " << addr << " -> Physical: " << result << endl;
        }
    }
}

int main() {
    int vSize, pSize;
    showIntro();
    getMemorySizes(vSize, pSize);

    MemoryManager mm(vSize * 1024, pSize * 1024);
    runSimulation(mm);

    cout << "\nSimulation Ended.\n";
    return 0;
}
