#ifndef DERIVEDCLASS2_H
#define DERIVEDCLASS2_H

#include "BaseClass.h"

class DerivedClass2: public BaseClass
{
private:
    int i;
    std::string s;
public:
    DerivedClass2(int argi, const std::string& args): i{argi}, s{args}
    {}
    void printmessage() override;
};

#endif