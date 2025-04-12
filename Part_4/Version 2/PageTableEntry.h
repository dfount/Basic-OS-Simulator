#ifndef PAGETABLEENTRY_H
#define PAGETABLEENTRY_H

class PageTableEntry {
public:
    bool valid;
    int frameNumber;

    PageTableEntry();
};

#endif
