#include <iostream>

template <typename T, typename U>
class BaseClass {
private:
    T t;
    U u;
public:
    BaseClass(T argt, U argu): t{argt}, u{argu}
    {
        std::cout << "1";
    }
    void Print_a()
    {
        std::cout << "a";
    }
};

template <typename T>
class BaseClass<T, double> {
private:
    T t;
    double u;
public:
    BaseClass(T argt, double argu): t{argt}, u{argu}
    {
        std::cout << "2";
    }
    void Print_a()
    {
        std::cout << "b";
    }
};

template <typename T>
class BaseClass<double, T> {
private:
    double t;
    T u;
public:
    BaseClass(double argt, T argu): t{argt}, u{argu}
    {
        std::cout << "3";
    }
    void Print_a()
    {
        std::cout << "c";
    }
};

// template <class T>
// class BaseClass<double, T> {
// public:
//     void Print_a()
//     {
//         std::cout << "c";
//     }
// };