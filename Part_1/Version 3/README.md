# Basic OS Simulator

## Team Members:
- Damian Fuentes

## Project Description:
This project simulates a simplified operating system. In the first phase, we focus on booting up the system and implementing a simple authentication system that prompts users for a username and password.

## Instructions for Running the Program:

1. **Clone the repository:**
   ```bash
   git clone https://github.com/dfount/Basic-OS-Simulator
   ```

2. **Compile the program:**
   ```bash
   g++ -o os_simulator main.cpp auth_handler.cpp auth.cpp
   ```

3. **Run the program:**
   ```bash
   ./os_simulator
   ```

## How the Program Works:

1. **Compiling the Program:**
   Once you have the code, you need to compile it into an executable file (`os_simulator.exe`). Open your terminal and run:
   ```
   g++ -o os_simulator main.cpp auth_handler.cpp auth.cpp
   ```
   This will generate an executable file named `os_simulator`.

2. **Running the Program:**
   After compilation, execute the program by running:
   ```
   ./os_simulator
   ```

3. **Interacting with the OS:**
   Once the program starts, follow the on-screen instructions to proceed with the authentication system.