#include <iostream>
#include "process.h"

using namespace std;

int main() {
    Process p1(1, 0, 10, 1, 256, true);  
    Process p2(2, 2, 5, 2, 128, false);  
    Process p3(3, 4, 8, 1, 512, true);   

    int currentTime = 0; 

    while (currentTime < 20) {
        cout << "Time: " << currentTime << endl;
    
        if (currentTime == 0) p1.updateState(Process::State::READY, currentTime);
        if (currentTime == 2) p2.updateState(Process::State::READY, currentTime);
        if (currentTime == 4) p3.updateState(Process::State::READY, currentTime);
    
        if (p1.getRemainingTime() > 0) p1.incrementWaitingTime();
        if (p2.getRemainingTime() > 0) p2.incrementWaitingTime();
        if (p3.getRemainingTime() > 0) p3.incrementWaitingTime();
    
        if (p1.getRemainingTime() > 0) p1.decrementRemainingTime();
        if (p2.getRemainingTime() > 0) p2.decrementRemainingTime();
        if (p3.getRemainingTime() > 0) p3.decrementRemainingTime();
    
        p1.printProcessInfo();
        p2.printProcessInfo();
        p3.printProcessInfo();
    
        currentTime++;  
    }

    return 0;
}
