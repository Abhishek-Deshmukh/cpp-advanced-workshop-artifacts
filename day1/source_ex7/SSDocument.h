#include "BaseDocument.h"

#ifndef SSDOCUMENT_H
#define SSDOCUMENT_H

class SSDocument : public BaseDocument {
private:
    int no_of_sheets;
public:
    void open();
};

#endif