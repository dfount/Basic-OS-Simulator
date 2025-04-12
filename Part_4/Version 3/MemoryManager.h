#ifndef MEMORYMANAGER_H
#define MEMORYMANAGER_H

#include "PageTableEntry.h"
#include <vector>

class MemoryManager {
public:
    MemoryManager(int vMemSize, int pMemSize);
    int translate(int virtualAddress);

private:
    std::vector<PageTableEntry> pageTable;
    std::vector<int> frames;
    int pageSize;
    int numVirtualPages;
    int numPhysicalFrames;
    int nextFreeFrame;

    void loadPage(int virtualPageNumber);
};

#endif
