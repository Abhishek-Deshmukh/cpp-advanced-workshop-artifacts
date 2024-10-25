#include <iostream>
#include <vector>
#include <algorithm>

class C {
private:
    double x;
public:
    C(double argx): x{argx} {}
    bool operator==(C const &rhs) {
        return (x == rhs.x);
    }
    bool operator>(C const &rhs) {
        return (rhs.x < x);
    }
    bool operator<(C const &rhs) {
        return (x < rhs.x);
    }
    void print_x() {std::cout << x << '\n';}
};


int main() {
    std::vector<C> v;

    // creating objects
    for (double i = 0; i < 10; i++) {
        v.push_back(C{(i-4.3)*(i-4.3)});
    }

    // printing it to see
    for (auto el : v) {
        el.print_x();
    }

    std::sort(v.begin(), v.end());

    // printing it to see
    std::cout << "\n\nsorted\n";
    for (auto el : v) {
        el.print_x();
    }
}