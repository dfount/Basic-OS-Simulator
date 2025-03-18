#include "process.h"

using namespace std; 

// Function to calculate waiting time and turnaround time for a process
void calculateTimes(Process &p) {
    p.turnaround_time = p.completion_time - p.arrival_time; // Turnaround Time = Completion Time - Arrival Time
    p.waiting_time = p.turnaround_time - p.burst_time;       // Waiting Time = Turnaround Time - Burst Time
}

// Function to print process information such as ID, arrival time, burst time, etc.
void printProcessInfo(const Process &p) {
    cout << "Process ID: " << p.process_id
         << " Arrival Time: " << p.arrival_time
         << " Burst Time: " << p.burst_time
         << " Completion Time: " << p.completion_time
         << " Turnaround Time: " << p.turnaround_time
         << " Waiting Time: " << p.waiting_time << endl;
}