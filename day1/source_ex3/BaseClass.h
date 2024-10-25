
#ifndef BASECLASS_H // include guard
#define BASECLASS_H

#include <iostream>

class BaseClass
{
private:
    int x;
    std::string s;
public:
    BaseClass(int argx, const std::string& args): x{argx}, s{args}
    {
        std::cout << "Default Constructor" << '\n';
    }
    // BaseClass(BaseClass&& rhs) noexcept : x{ std::move(rhs.x) }, s{ std::move(rhs.s) } {
    // std::cout << "Moving Constructor" << '\n'; 
    // }
    // BaseClass& operator=(BaseClass&& otherobject) noexcept
    // {
    //     std::cout << "assignment operator Constructor" << '\n'; 
    //     s = std::move(otherobject.s);
    //     x = std::move(otherobject.x);
    //     return *this;
    // }

    void PrintStringBeforeInt();
};


#endif /* MY_CLASS_H */