#ifndef DERIVEDCLASS2_H
#define DERIVEDCLASS2_H

#include "BaseClass.h"

template <typename T>

class DerivedClass2: public BaseClass<T, int>
{
public:
    DerivedClass2(T argt, int argu): BaseClass<T, int> {argt, argu}
    {}
    void Foo2() {
        std::cout << "3";
    }
};

#endif