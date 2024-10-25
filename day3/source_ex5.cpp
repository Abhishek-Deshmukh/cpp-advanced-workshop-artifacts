#include <iostream>
#include <memory>
#include <thread>

using namespace std;

void foo() {
    cout << "Foo\n";
}

class C {
public:
    void C_foo() {
        cout << "C_Foo\n";
    }
};

int main(){

    auto lamb_foo = [](){cout << "lamb_foo\n";};

    thread t1{foo};
    C o{};
    thread t2{&C::C_foo, &o};
    thread t3{lamb_foo};

    t1.join();
    t2.join();
    t3.join();
}