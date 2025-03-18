#include <iostream>
#include <vector>
#include <algorithm>
#include "process.h"

void fcfsScheduling(std::vector<Process> &processes) {
    int current_time = 0;

    std::sort(processes.begin(), processes.end(), [](const Process &a, const Process &b) {
        return a.arrival_time < b.arrival_time;
    });

    for (auto &p : processes) {
        if (current_time < p.arrival_time)
            current_time = p.arrival_time;

        p.completion_time = current_time + p.burst_time;
        current_time = p.completion_time;

        calculateTimes(p);
    }
}

void sjfScheduling(std::vector<Process> &processes) {
    int current_time = 0;

    std::sort(processes.begin(), processes.end(), [](const Process &a, const Process &b) {
        return a.arrival_time < b.arrival_time || 
               (a.arrival_time == b.arrival_time && a.burst_time < b.burst_time);
    });

    for (auto &p : processes) {
        if (current_time < p.arrival_time)
            current_time = p.arrival_time;

        p.completion_time = current_time + p.burst_time;
        current_time = p.completion_time;

        calculateTimes(p);
    }
}

void calculateAverages(const std::vector<Process> &processes) {
    int total_turnaround_time = 0;
    int total_waiting_time = 0;
    
    for (const auto &p : processes) {
        total_turnaround_time += p.turnaround_time;
        total_waiting_time += p.waiting_time;
    }

    double avg_turnaround_time = (double)total_turnaround_time / processes.size();
    double avg_waiting_time = (double)total_waiting_time / processes.size();

    std::cout << "\nAverage Turnaround Time: " << avg_turnaround_time << std::endl;
    std::cout << "Average Waiting Time: " << avg_waiting_time << std::endl;
}

int main() {
    std::vector<Process> processes = {
        Process(1, 0, 5),
        Process(2, 2, 3),
        Process(3, 4, 1),
        Process(4, 6, 2)
    };

    std::cout << "FCFS Scheduling:" << std::endl;
    fcfsScheduling(processes);
    
    for (const auto &p : processes) {
        printProcessInfo(p);
    }
    calculateAverages(processes);

    processes = {
        Process(1, 0, 5),
        Process(2, 2, 3),
        Process(3, 4, 1),
        Process(4, 6, 2)
    };

    std::cout << "\nSJF Scheduling:" << std::endl;
    sjfScheduling(processes);

    for (const auto &p : processes) {
        printProcessInfo(p);
    }
    calculateAverages(processes);

    return 0;
}
