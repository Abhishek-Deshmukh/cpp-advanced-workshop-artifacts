
#include "BaseDocument.h"

#ifndef PDFDOCUMENT_H
#define PDFDOCUMENT_H

class PDFDocument : public BaseDocument {
private:
    int no_of_pages;
public:
    void open();
};

#endif