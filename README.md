# Basic OS Simulator

## Overview

The **Basic OS Simulator** is a project designed to showcase fundamental operating system concepts like authentication, process handling, and system calls. The project is split into multiple parts, with each part containing different versions that demonstrate various stages of development and new feature implementations.

## Features

- User authentication system
- Process management
- System calls handling
- Modular code structure for easier development and testing

## Project Structure


```
Basic-OS-Simulator-main/
│-- Part_1/
│   │-- Version 1/
│   │   │-- auth.cpp
│   │   │-- auth.h
│   │   │-- README.md
│   │-- Version 2/
│   │   │-- auth.cpp
│   │   │-- auth.h
│   │   │-- auth_handler.cpp
│   │   │-- auth_handler.h
│   │   │-- README.md
│-- Part_2/
│   │-- Version 1/
│   │   │-- process.cpp
│   │   │-- process.h
│   │   │-- README.md
│   │-- Version 2/
│   │   │-- process.cpp
│   │   │-- process.h
│   │   │-- process_handler.cpp
│   │   │-- process_handler.h
│   │   │-- README.md
│-- Part_3/
│   │-- Version 1/
│   │   │-- README.md
│   │   │-- process.cpp
│   │   │-- process.h
│   │   │-- scheduler.cpp
│   │   │-- scheduler.h
│   │-- Version 2/
│   │   │-- README.md
│   │   │-- process.cpp
│   │   │-- process.h
│   │   │-- scheduler.cpp
│   │   │-- scheduler.h
│-- ... (More parts and versions may exist)
```



Each version adds new functionality or improves existing features, building towards a complete simulation.

## Downloading via VSCode (or any Git-enabled IDE)

To download the project directly in VSCode or any Git-enabled IDE:

1. Open VSCode and press **Ctrl + Shift + P** (or **Cmd + Shift + P** on Mac).
2. Type `Git: Clone` and hit enter.
3. Paste the repo URL: `https://github.com/dfount/Basic-OS-Simulator.git`.
4. Select where you want to save the project locally.
5. Once cloned, open the project folder in VSCode to start exploring.

## External Download Links

You can also download specific folders directly using the following links:

- [Download Part_1/Version 3](https://download-directory.github.io/?url=https://github.com/dfount/Basic-OS-Simulator/tree/main/Part_1/Version%203)
- [Download Part_2/Version 2](https://download-directory.github.io/?url=https://github.com/dfount/Basic-OS-Simulator/tree/main/Part_2/Version%202)
- [Download Part_3/Version 2](https://download-directory.github.io/?url=https://github.com/dfount/Basic-OS-Simulator/tree/main/Part_3/Version%202)

## Warnings & Important Notes

- **For Learning Only**: This project is mainly for educational use. It's not meant for real-world production environments.
- **Simplified Security**: The authentication system is just for demo purposes. If you plan to use something similar in real life, make sure to beef up the security.
- **Code Integrity**: Be mindful when making changes; avoid introducing security flaws or performance problems.
- **External Download Site**: The download links point to an external site, so make sure the URL looks correct before downloading.
- **Compilation**: You'll need a C++ compiler (like `g++`) to build the code.
- **Dependencies**: Each version might have different dependencies. Always check the corresponding `README.md` for any special instructions.

## Installation & Usage

1. Clone the repository:
   ```sh
   git clone https://github.com/dfount/Basic-OS-Simulator.git
   cd Basic-OS-Simulator

2. Go to the version you want to work with:
   ```sh
   cd Part_1/Version_3  # Replace with the version you need
   ```
3. Compile the code:
   ```sh
   g++ -o os_simulator auth.cpp main.cpp  # Adjust if needed based on files
   ```
4. Run the simulator:
   ```sh
   ./os_simulator
   ```

## Contributing

This project is mainly for personal and educational use. You're welcome to view it, but contributions aren't necessary.

## License

This project is licensed under the MIT License.


### Key Updates:
1. **Version Numbers** are now updated to reflect the final versions: **Version 3** for Part 1, **Version 2** for Part 2, and **Version 2** for Part 3.
2. Fixed the **git clone** command to remove the redundancy.
3. Updated **download links** to the final versions.

This should now be clearer and provide more precise instructions for yall!
