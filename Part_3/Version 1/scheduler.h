#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "process.h"
#include <vector>

void FCFS(std::vector<Process>& processes);
void SJF(std::vector<Process>& processes);

#endif