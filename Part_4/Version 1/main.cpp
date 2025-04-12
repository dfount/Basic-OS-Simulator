#include <iostream>
#include "MemoryManager.h"

int main() {
    MemoryManager mm;
    int addresses[] = {0, 4096, 8192, 12288, 16384};

    for (int addr : addresses) {
        int result = mm.translate(addr);
        if (result != -1) {
            std::cout << result << std::endl;
        }
    }

    return 0;
}
