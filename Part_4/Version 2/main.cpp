#include <iostream>
#include "MemoryManager.h"

int main() {
    MemoryManager mm;
    int addresses[] = {0, 4096, 8192, 12288, 16384, 20480};

    for (int addr : addresses) {
        int result = mm.translate(addr);
        if (result != -1) {
            std::cout << "Virtual: " << addr << " -> Physical: " << result << std::endl;
        } else {
            std::cout << "Address " << addr << " could not be translated." << std::endl;
        }
    }

    return 0;
}
