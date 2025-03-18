#include <iostream>
#include <vector>
#include <algorithm>
#include "process.h"

using namespace std;
// Function to perform First-Come, First-Served (FCFS) scheduling
void fcfsScheduling(vector<Process> &processes) {
    int current_time = 0;  // Initialize the current time to 0

    // Sort processes based on their arrival time
    sort(processes.begin(), processes.end(), [](const Process &a, const Process &b) {
        return a.arrival_time < b.arrival_time;
    });

    // Loop through processes and calculate completion time, waiting time, and turnaround time
    for (auto &p : processes) {
        if (current_time < p.arrival_time)
            current_time = p.arrival_time;  // Wait if the CPU is idle until the process arrives

        p.completion_time = current_time + p.burst_time; // Completion Time = Current Time + Burst Time
        current_time = p.completion_time; // Update the current time to the process's completion time

        calculateTimes(p); // Calculate waiting and turnaround times
    }
}

// Function to perform Shortest Job First (SJF) scheduling
void sjfScheduling(vector<Process> &processes) {
    int current_time = 0;  // Initialize the current time to 0

    // Sort processes based on arrival time and burst time (Shortest burst time first)
    sort(processes.begin(), processes.end(), [](const Process &a, const Process &b) {
        return a.arrival_time < b.arrival_time || 
               (a.arrival_time == b.arrival_time && a.burst_time < b.burst_time);
    });

    // Loop through processes and calculate completion time, waiting time, and turnaround time
    for (auto &p : processes) {
        if (current_time < p.arrival_time)
            current_time = p.arrival_time;  // Wait if the CPU is idle until the process arrives

        p.completion_time = current_time + p.burst_time; // Completion Time = Current Time + Burst Time
        current_time = p.completion_time; // Update the current time to the process's completion time

        calculateTimes(p); // Calculate waiting and turnaround times
    }
}

// Function to calculate average waiting time and average turnaround time
void calculateAverages(const vector<Process> &processes) {
    int total_turnaround_time = 0;
    int total_waiting_time = 0;
    
    // Loop through processes to sum turnaround and waiting times
    for (const auto &p : processes) {
        total_turnaround_time += p.turnaround_time;
        total_waiting_time += p.waiting_time;
    }

    // Calculate average turnaround time and average waiting time
    double avg_turnaround_time = (double)total_turnaround_time / processes.size();
    double avg_waiting_time = (double)total_waiting_time / processes.size();

    // Display average times
    cout << "\nAverage Turnaround Time: " << avg_turnaround_time << endl;
    cout << "Average Waiting Time: " << avg_waiting_time << endl;
}

int main() {
    // Sample processes for testing
    vector<Process> processes = {
        Process(1, 0, 5),
        Process(2, 2, 3),
        Process(3, 4, 1),
        Process(4, 6, 2)
    };

    cout << "FCFS Scheduling:" << endl;
    fcfsScheduling(processes);
    
    // Print process information and calculate averages for FCFS
    for (const auto &p : processes) {
        printProcessInfo(p);
    }
    calculateAverages(processes);

    // Reset processes for SJF
    processes = {
        Process(1, 0, 5),
        Process(2, 2, 3),
        Process(3, 4, 1),
        Process(4, 6, 2)
    };

    cout << "\nSJF Scheduling:" << endl;
    sjfScheduling(processes);

    // Print process information and calculate averages for SJF
    for (const auto &p : processes) {
        printProcessInfo(p);
    }
    calculateAverages(processes);

    return 0;
}
