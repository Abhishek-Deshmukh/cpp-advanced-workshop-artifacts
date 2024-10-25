#include "BaseClass.h"

int main() {
    BaseClass<int, int> o1{1, 1};
    o1.Print_a();
    BaseClass<double, int> o2{1.1, 1};
    o2.Print_a();
    BaseClass<int, double> o3{1, 1.1};
    o3.Print_a();
}