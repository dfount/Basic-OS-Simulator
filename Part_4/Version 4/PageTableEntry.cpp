#include "PageTableEntry.h"

// Initialize page table entry to invalid state
PageTableEntry::PageTableEntry() {
    valid = false;
    frameNumber = -1;
}
