#include "process.h"

void calculateTimes(Process &p) {
    p.turnaround_time = p.completion_time - p.arrival_time;
    p.waiting_time = p.turnaround_time - p.burst_time;
}

void printProcessInfo(const Process &p) {
    std::cout << "Process ID: " << p.process_id
              << " Arrival Time: " << p.arrival_time
              << " Burst Time: " << p.burst_time
              << " Completion Time: " << p.completion_time
              << " Turnaround Time: " << p.turnaround_time
              << " Waiting Time: " << p.waiting_time << std::endl;
}
