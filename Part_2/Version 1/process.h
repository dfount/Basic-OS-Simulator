#ifndef PROCESS_H
#define PROCESS_H

#include <iostream>

using namespace std;

class Process {
public:
    enum class State { NEW, READY, RUNNING, WAITING, TERMINATED };

    Process(int pid, int arrival_time, int burst_time, int priority, int memory_required, bool io_operations);

    void updateState(State newState, int currentTime);  // Updated to include currentTime
    void decrementRemainingTime();
    void incrementWaitingTime();
    void printProcessInfo() const;

    // Getters and setters
    int getPid() const { return pid; }
    int getArrivalTime() const { return arrival_time; }
    int getBurstTime() const { return burst_time; }
    int getRemainingTime() const { return remaining_time; }
    int getPriority() const { return priority; }
    int getWaitingTime() const { return waiting_time; }
    int getTurnaroundTime() const { return turnaround_time; }
    int getMemoryRequired() const { return memory_required; }

private:
    int pid;
    int arrival_time;
    int burst_time;
    int priority;
    State state;
    int remaining_time;
    int waiting_time;
    int turnaround_time;
    int memory_required;
    bool io_operations;
};

#endif // PROCESS_H
