#include <iostream>

int* foo() {
    static int x = 0;
    x++;
    return &x;
}

int main() {

    int* x = foo();
    std::cout << *x << "\n";

    int* y = foo();
    std::cout << *x << "\n"; // notice I am printing x not y

    int* z = foo();
    std::cout << *x << "\n"; // notice I am printing x not z
}