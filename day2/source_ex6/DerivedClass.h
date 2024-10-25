#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H

#include "BaseClass.h"

class DerivedClass: public BaseClass<int, int>
{
public:
    DerivedClass(int argt, int argu): BaseClass {argt, argu}
    {}
    void Foo() {
        std::cout << "2";
    }
};

#endif