#ifndef BASECLASS_H
#define BASECLASS_H

#include <string>
#include <iostream>
class BaseClass
{
public:
    virtual void printmessage() = 0;
    virtual ~BaseClass() {}
};

#endif