#include "process.h"

using namespace std;

Process::Process(int pid, int arrival_time, int burst_time, int priority, int memory_required, bool io_operations)
    : pid(pid), arrival_time(arrival_time), burst_time(burst_time), priority(priority),
      memory_required(memory_required), io_operations(io_operations), state(State::NEW),
      remaining_time(burst_time), waiting_time(0), turnaround_time(0) {}

void Process::updateState(State newState, int currentTime) {
    if ((newState == State::READY || newState == State::WAITING) && currentTime > arrival_time) {
        waiting_time++; 
    }
    if (newState == State::TERMINATED && turnaround_time == 0) {
        turnaround_time = currentTime + waiting_time - arrival_time; 
    }

    state = newState;
}

void Process::decrementRemainingTime() {
    if (remaining_time > 0) {
        remaining_time--;
    }
}

void Process::incrementWaitingTime() {
    waiting_time++;
}

void Process::printProcessInfo() const {
    cout << "Process ID: " << pid << endl;
    cout << "Arrival Time: " << arrival_time << endl;
    cout << "Burst Time: " << burst_time << endl;
    cout << "Remaining Time: " << remaining_time << endl;
    cout << "Priority: " << priority << endl;
    cout << "State: " << static_cast<int>(state) << endl;
    cout << "Memory Required: " << memory_required << " MB" << endl;
    cout << "I/O Operations: " << (io_operations ? "Yes" : "No") << endl;
    cout << "Waiting Time: " << waiting_time << endl;
    cout << "Turnaround Time: " << turnaround_time << endl;
    cout << "-----------------------------\n";
}
