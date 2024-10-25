#ifndef MYCLASS_H
#define MYCLASS_H

template <typename T, typename U>
class MyClass {
private:
    T t;
    U u;
public:
    // MyClass(T argt, U argu);
MyClass(T argt, U argu): t {argt}, u{argu}
{}
    // U GetSum();

U GetSum()
{
    return t + u;
}
};

#endif

