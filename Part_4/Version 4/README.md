
# Virtual Memory Simulator

This project simulates virtual memory translation using a page table. It allows users to enter virtual addresses and see their corresponding physical addresses based on a simple memory management system.

## Features

- **User Input**: The program allows the user to input virtual memory and physical memory sizes (in KB), which will be used to simulate the memory system.
- **Page Table**: Translates virtual addresses to physical addresses using a page table.
- **Simulation**: Users can input virtual addresses and see whether they can be successfully translated or not.
- **Error Handling**: If a virtual address cannot be translated, an error message is shown.

## Files

1. **`main.cpp`**: The main program that orchestrates the virtual memory simulation and handles user interactions.
2. **`MemoryManager.cpp`**: Contains the logic for managing the memory system, including address translation and page loading.
3. **`MemoryManager.h`**: Header file defining the `MemoryManager` class and its methods.
4. **`PageTableEntry.cpp`**: Implements the `PageTableEntry` class to represent each entry in the page table.
5. **`PageTableEntry.h`**: Header file for the `PageTableEntry` class.

## How to Run the Program

1. Clone or download the repository to your local machine.

2. Open the project in your preferred C++ IDE or text editor (such as Visual Studio, Code::Blocks, or Visual Studio Code).

3. **Build and Run** the program. If you are using a terminal, navigate to the project directory and compile the code with the following commands:
   ```bash
   g++ main.cpp MemoryManager.cpp PageTableEntry.cpp -o memory_simulator
   ./memory_simulator
   ```

4. **Input**:
   - The program will first prompt you to enter the virtual and physical memory sizes (in KB).
   - Then, you can input virtual addresses, and the program will attempt to translate them to physical addresses.

5. **Output**:
   - If a translation is successful, the program will display the translated physical address.
   - If a translation fails, the program will notify you that the address could not be translated.

## Example Run

```
=== Virtual Memory Simulator ===
Simulates virtual memory translation using a page table.

Enter Virtual Memory Size (in KB): 16
Enter Physical Memory Size (in KB): 8

Enter Virtual Address to Translate (-1 to quit): 4096
[✓] Virtual: 4096 -> Physical: 4096

Enter Virtual Address to Translate (-1 to quit): 8192
[✓] Virtual: 8192 -> Physical: 8192

Enter Virtual Address to Translate (-1 to quit): 12288
[✓] Virtual: 12288 -> Physical: 12288

Enter Virtual Address to Translate (-1 to quit): 16384
[!] Address 16384 could not be translated.

Simulation Ended.
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
