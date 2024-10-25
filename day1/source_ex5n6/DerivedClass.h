#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H

#include "BaseClass.h"

class DerivedClass: public BaseClass
{
private:
    int i;
    std::string s;
public:
    DerivedClass(int argi, const std::string& args): i{argi}, s{args}
    {}
    void printmessage() override;
};

#endif