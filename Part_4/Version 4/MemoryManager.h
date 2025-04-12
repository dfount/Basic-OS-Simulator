#ifndef MEMORYMANAGER_H
#define MEMORYMANAGER_H

#include "PageTableEntry.h"
#include <vector>

class MemoryManager {
public:
    MemoryManager(int vMemSize, int pMemSize);  // Constructor
    int translate(int virtualAddress);  // Translate virtual address to physical address

private:
    std::vector<PageTableEntry> pageTable;  // Page table entries
    std::vector<int> frames;  // Physical memory frames
    int pageSize;  // Page size in bytes (4KB)
    int numVirtualPages;  // Number of virtual pages
    int numPhysicalFrames;  // Number of physical frames
    int nextFreeFrame;  // Index for the next available frame

    void loadPage(int virtualPageNumber);  // Load page into physical memory
};

#endif
