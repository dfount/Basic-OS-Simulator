#include "MemoryManager.h"

using namespace std;

// Constructor to initialize memory system with virtual and physical memory sizes
MemoryManager::MemoryManager(int vMemSize, int pMemSize) {
    pageSize = 4096;  // Page size is 4KB
    numVirtualPages = vMemSize / pageSize;
    numPhysicalFrames = pMemSize / pageSize;
    nextFreeFrame = 0;

    pageTable = vector<PageTableEntry>(numVirtualPages);
    frames = vector<int>(numPhysicalFrames, -1);  // -1 means frame is empty
}

// Load a page into a physical frame
void MemoryManager::loadPage(int vpn) {
    if (nextFreeFrame < numPhysicalFrames) {
        pageTable[vpn].valid = true;
        pageTable[vpn].frameNumber = nextFreeFrame;
        frames[nextFreeFrame] = vpn;
        nextFreeFrame++;
    }
}

// Translate virtual address to physical address
int MemoryManager::translate(int virtualAddress) {
    int vpn = virtualAddress / pageSize;
    int offset = virtualAddress % pageSize;

    if (vpn >= numVirtualPages) return -1;  // Invalid VPN

    PageTableEntry &entry = pageTable[vpn];

    if (!entry.valid) {
        loadPage(vpn);  // Load page if not valid
        if (!entry.valid) return -1;  // If load failed, return error
    }

    return entry.frameNumber * pageSize + offset;  // Return physical address
}
