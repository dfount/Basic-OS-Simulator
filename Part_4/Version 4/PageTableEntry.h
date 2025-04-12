#ifndef PAGETABLEENTRY_H
#define PAGETABLEENTRY_H

class PageTableEntry {
public:
    bool valid;  // If the page is valid in physical memory
    int frameNumber;  // Physical frame number the page maps to

    PageTableEntry();  // Constructor
};

#endif
