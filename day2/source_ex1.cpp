#include <iostream>

template<typename T, typename U>
U add(T arg1, U arg2) {
    return arg1 + arg2;
}

int main(){
    int a = 1, b = 2;
    std::cout << add<int, int>(a, b) << "\n";

    int c = 1;
    double d = 2.1;
    std::cout << add<int, double>(c, d) << "\n";
}