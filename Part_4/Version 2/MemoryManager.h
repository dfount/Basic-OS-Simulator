#ifndef MEMORYMANAGER_H
#define MEMORYMANAGER_H

#include "PageTableEntry.h"
#include <vector>

class MemoryManager {
public:
    MemoryManager();
    int translate(int virtualAddress);

private:
    std::vector<PageTableEntry> pageTable;
    std::vector<int> frames;
    int nextFreeFrame;

    int loadPage(int virtualPageNumber);
};

#endif
