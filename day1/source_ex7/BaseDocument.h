#ifndef BASEDOCUMENT_H
#define BASEDOCUMENT_H

#include <string>
#include <iostream>
class BaseDocument {
private:
    std::string extension = "";
public:
    virtual void open();
    virtual ~BaseDocument() {}
};

#endif