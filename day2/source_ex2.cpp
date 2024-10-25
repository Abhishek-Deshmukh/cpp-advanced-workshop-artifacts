#include <iostream>

template <typename T, typename U>
class MyClass {
private:
    T t;
    U u;
public:
    MyClass(T argt, U argu): t{argt}, u{argu}
    {}
    U GetSum() {
        return t + u;
    }
};

int main() {
    MyClass<int, int> o1{1, 1};
    std::cout << o1.GetSum() << "\n";

    MyClass<int, double> o2{1, 3.1};
    std::cout << o2.GetSum() << "\n";
}