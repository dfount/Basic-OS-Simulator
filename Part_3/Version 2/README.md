
# Part 3 - Process Scheduling Simulation: FCFS and SJF

## Overview

In this part of the **Basic OS Simulator**, we simulate the **First-Come, First-Served (FCFS)** and **Shortest Job First (SJF)** scheduling algorithms.

- **FCFS** is a simple scheduling algorithm where the process that arrives first gets executed first.
- **SJF** schedules the process with the shortest burst time first. This implementation only includes the **non-preemptive version** of SJF.

## Features:

- **FCFS** Scheduling Algorithm
- **SJF** (Non-Preemptive) Scheduling Algorithm
- **Metrics Calculated**:
  - **Completion Time**
  - **Turnaround Time**
  - **Waiting Time**
  - **Average Turnaround Time** and **Average Waiting Time**

## How to Run:

1. Clone the repository and navigate to **Part 3**:
   ```sh
   git clone https://github.com/dfount/Basic-OS-Simulator.git
   cd Basic-OS-Simulator/Part_3/Version_1
   ```

2. Compile and run the scheduler:
    ```sh
    g++ -o scheduler scheduler.cpp process.cpp
    ./scheduler
    ```

3. Input the process details (ID, arrival time, and burst time) when prompted.

4. View the results for each process and the average metrics.
