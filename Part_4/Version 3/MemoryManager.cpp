#include "MemoryManager.h"

using namespace std;

MemoryManager::MemoryManager(int vMemSize, int pMemSize) {
    pageSize = 4096;
    numVirtualPages = vMemSize / pageSize;
    numPhysicalFrames = pMemSize / pageSize;
    nextFreeFrame = 0;
    pageTable = vector<PageTableEntry>(numVirtualPages);
    frames = vector<int>(numPhysicalFrames, -1);
}

void MemoryManager::loadPage(int vpn) {
    if (nextFreeFrame < numPhysicalFrames) {
        pageTable[vpn].valid = true;
        pageTable[vpn].frameNumber = nextFreeFrame;
        frames[nextFreeFrame] = vpn;
        nextFreeFrame++;
    }
}

int MemoryManager::translate(int virtualAddress) {
    int vpn = virtualAddress / pageSize;
    int offset = virtualAddress % pageSize;

    if (vpn >= numVirtualPages) return -1;

    PageTableEntry &entry = pageTable[vpn];
    if (!entry.valid) {
        loadPage(vpn);
        if (!entry.valid) return -1;
    }

    return entry.frameNumber * pageSize + offset;
}
