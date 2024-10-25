#ifndef BASECLASS_H
#define BASECLASS_H

#include <iostream>

template <typename T, typename U>
class BaseClass
{
private:
    T t;
    U u;
public:
    BaseClass(T argt, U argu): t{argt}, u{argu} {
        std::cout << "1";
    }
};

#endif