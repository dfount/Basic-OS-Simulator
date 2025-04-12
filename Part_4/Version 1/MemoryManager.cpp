#include "MemoryManager.h"

#define PAGE_SIZE 4096
#define VIRTUAL_MEMORY_SIZE 16384
#define PHYSICAL_MEMORY_SIZE 8192

#define NUM_VIRTUAL_PAGES (VIRTUAL_MEMORY_SIZE / PAGE_SIZE)
#define NUM_PHYSICAL_FRAMES (PHYSICAL_MEMORY_SIZE / PAGE_SIZE)

MemoryManager::MemoryManager() {
    pageTable = std::vector<PageTableEntry>(NUM_VIRTUAL_PAGES);
    frames = std::vector<int>(NUM_PHYSICAL_FRAMES, -1);
    nextFreeFrame = 0;
}

int MemoryManager::loadPage(int vpn) {
    if (nextFreeFrame >= NUM_PHYSICAL_FRAMES) {
        return -1;
    }
    pageTable[vpn].valid = true;
    pageTable[vpn].frameNumber = nextFreeFrame;
    frames[nextFreeFrame] = vpn;
    nextFreeFrame++;
    return pageTable[vpn].frameNumber;
}

int MemoryManager::translate(int virtualAddress) {
    int vpn = virtualAddress / PAGE_SIZE;
    int offset = virtualAddress % PAGE_SIZE;

    if (vpn >= NUM_VIRTUAL_PAGES) {
        return -1;
    }

    PageTableEntry &entry = pageTable[vpn];
    if (!entry.valid) {
        int frame = loadPage(vpn);
        if (frame == -1) {
            return -1;
        }
    }

    return entry.frameNumber * PAGE_SIZE + offset;
}
