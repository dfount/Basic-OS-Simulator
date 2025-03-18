#ifndef PROCESS_H
#define PROCESS_H

#include <iostream>

using namespace std;

// Structure to represent a process with its properties
struct Process {
    int process_id;
    int arrival_time;
    int burst_time;
    int completion_time;
    int waiting_time;
    int turnaround_time;

    // Constructor to initialize process properties
    Process(int id, int arrival, int burst) 
        : process_id(id), arrival_time(arrival), burst_time(burst),
          completion_time(0), waiting_time(0), turnaround_time(0) {}
};

// Function declarations
void calculateTimes(Process &p);
void printProcessInfo(const Process &p);

#endif