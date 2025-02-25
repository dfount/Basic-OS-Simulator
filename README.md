# Basic OS Simulator

## Overview

The **Basic OS Simulator** is a simulation project designed to demonstrate fundamental operating system concepts such as authentication, process handling, and system calls. The project is divided into multiple versions to showcase different stages of development and feature implementations.

## Features

- User authentication system
- Process management
- System calls handling
- Modular code structure

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
│-- ... (More versions may exist)
```

Each version represents an incremental improvement or different approach to solving OS-related tasks.

## Downloading via VSCode (or any Git-enabled compiler)
If you are using VSCode (or another IDE with Git support), you can download the repository directly by using the built-in Git functionality:
1. Open VSCode and press **Ctrl + Shift + P** (or **Cmd + Shift + P** on Mac).
2. Type `Git: Clone` and select it.
3. Paste the repository URL: `https://github.com/dfount/Basic-OS-Simulator.git`.
4. Choose a local folder to save the project.
5. After cloning, navigate to the folder inside VSCode to access the files.

## Note: The following links will take you to an external website (download-directory.github.io) that allows you to download specific folders from the repository.

- [Download Part\_1/Version 1](https://download-directory.github.io/?url=https://github.com/dfount/Basic-OS-Simulator/tree/main/Part_1/Version%201)
- [Download Part\_1/Version 2](https://download-directory.github.io/?url=https://github.com/dfount/Basic-OS-Simulator/tree/main/Part_1/Version%202)
- [Download Part\_1/Version 3](https://download-directory.github.io/?url=https://github.com/dfount/Basic-OS-Simulator/tree/main/Part_1/Version%203)

## Warnings & Important Notes
- **Educational Purpose:** This project is intended for educational purposes only. It is not designed for production environments.
- **Security Considerations:** The authentication system in this project is simplified for demonstration. Do not use it in real-world applications without proper security enhancements.
- **Code Integrity:** Ensure that any modifications do not introduce unintended security vulnerabilities or performance issues.
- **External Download Site:** The folder-specific download links redirect you to an external website (download-directory.github.io). Always verify the URL before downloading.
- **Compilation Requirements:** Ensure you have a C++ compiler (such as `g++`) installed before attempting to compile the project.
- **File Structure:** Some versions may include different dependencies. Check the corresponding `README.md` file in each version for specific instructions.
- **External Download Site:** The folder-specific download links redirect you to an external website (download-directory.github.io). Always verify the URL before downloading.
- **Compilation Requirements:** Ensure you have a C++ compiler (such as `g++`) installed before attempting to compile the project.
- **File Structure:** Some versions may include different dependencies. Check the corresponding `README.md` file in each version for specific instructions.

## Installation & Usage

1. Clone the repository:
   ```sh
   git clone https://github.com/yourusername/Basic-OS-Simulator.git
   cd Basic-OS-Simulator
   ```
2. Navigate to the desired version:
   ```sh
   cd Part_1/Version_1  # Change version as needed
   ```
3. Compile the code:
   ```sh
   g++ -o os_simulator auth.cpp main.cpp  # Adjust based on the available files
   ```
4. Run the simulator:
   ```sh
   ./os_simulator
   ```

## Contributing

This repository is primarily for demonstration purposes and is publicly accessible for viewing. External contributions are not required.

## License

This project is licensed under the MIT License.

