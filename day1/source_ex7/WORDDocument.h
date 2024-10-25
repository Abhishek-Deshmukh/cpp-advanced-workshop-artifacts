#include "BaseDocument.h"

#ifndef WORDDOCUMENT_H
#define WORDDOCUMENT_H

class WORDDocument : public BaseDocument {
private:
    int no_of_pages;
public:
    void open();
};

#endif