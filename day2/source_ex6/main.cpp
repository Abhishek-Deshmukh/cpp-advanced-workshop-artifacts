#include "BaseClass.h"
#include "DerivedClass.h"
#include "DerivedClass2.h"

int main() {
    BaseClass<int, int> o1{1, 2};

    DerivedClass o2{1.1, 2};
    o2.Foo();

    DerivedClass2<const char*> o3{"a", 2};
    o3.Foo2();
}