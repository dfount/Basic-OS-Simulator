#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "process.h"
#include <vector>

using namespace std;

// Function declarations for scheduling algorithms
void FCFS(vector<Process>& processes);
void SJF(vector<Process>& processes);

#endif