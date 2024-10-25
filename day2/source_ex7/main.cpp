#include <iostream>

int main() {
    // Automatic
    int x = 10;
    double y = 3.14;

    // Dynamic
    int* z = new int(5);
    double* w = new double(2.718);

    // Static
    static int a = 20;
    static double b = 6.28;

    // Output values of variables
    std::cout << "Automatic" << "\n";
    std::cout << "x = " << x << "\n";
    std::cout << "y = " << y << "\n";

    std::cout << "Dynamic" << "\n";
    std::cout << "z = " << *z << "\n";
    std::cout << "w = " << *w << "\n";

    std::cout << "Static" << "\n";
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";

    // Deallocate dynamic memory
    delete z;
    delete w;

    return 0;
}