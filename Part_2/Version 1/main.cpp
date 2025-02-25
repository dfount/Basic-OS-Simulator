#include <iostream>
#include "process.h"

using namespace std;

int main() {
    // Create a few process instances
    Process p1(1, 0, 10, 1, 256, true);  // Process 1
    Process p2(2, 2, 5, 2, 128, false);  // Process 2
    Process p3(3, 4, 8, 1, 512, true);   // Process 3

    int currentTime = 0; // Global time for simulation

    // Simulate time progression
    while (currentTime < 20) {
        cout << "Time: " << currentTime << endl;
    
        // Update state based on arrival time
        if (currentTime == 0) p1.updateState(Process::State::READY, currentTime);
        if (currentTime == 2) p2.updateState(Process::State::READY, currentTime);
        if (currentTime == 4) p3.updateState(Process::State::READY, currentTime);
    
        // Update waiting time every cycle
        if (p1.getRemainingTime() > 0) p1.incrementWaitingTime();
        if (p2.getRemainingTime() > 0) p2.incrementWaitingTime();
        if (p3.getRemainingTime() > 0) p3.incrementWaitingTime();
    
        // Process time decrement
        if (p1.getRemainingTime() > 0) p1.decrementRemainingTime();
        if (p2.getRemainingTime() > 0) p2.decrementRemainingTime();
        if (p3.getRemainingTime() > 0) p3.decrementRemainingTime();
    
        // Print process info
        p1.printProcessInfo();
        p2.printProcessInfo();
        p3.printProcessInfo();
    
        currentTime++;  // Move to the next time unit
    }

    return 0;
}
