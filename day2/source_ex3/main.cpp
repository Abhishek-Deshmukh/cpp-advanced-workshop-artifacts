#include "MyClass.h"
#include <iostream>

int main() {
    MyClass<int, int> o1{1, 1};
    std::cout << o1.GetSum() << "\n";

    MyClass<int, double> o2{1, 3.1};
    std::cout << o2.GetSum() << "\n";
}