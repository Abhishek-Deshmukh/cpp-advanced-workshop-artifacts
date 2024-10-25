#include <iostream>
#include <string>
#include <memory>

class BaseClass
{
private:
public:
    virtual void printmessage() {
        std::cout << "Base Class " << "\n";
    };
    virtual ~BaseClass() {}
};

class DerivedClass: public BaseClass
{
private:
    int i;
    std::string s;
public:
    DerivedClass(int argi, const std::string& args): i{argi}, s{args}
    {}
    void printmessage() override {
        std::cout << "Derived Class" << i << s << "\n";
    }
};

class DerivedClass2: public BaseClass
{
private:
    int i;
    std::string s;
public:
    DerivedClass2(int argi, const std::string& args): i{argi}, s{args}
    {}
    void printmessage() override {
        std::cout << "Derived Class 2" << i << s << "\n";
    }
};

int main()
{
	BaseClass* p = new DerivedClass(0, "lol");
	p->printmessage(); // calls the overriden printmessage() from a DerivedClass
	delete p;

	BaseClass* p2 = new DerivedClass2(0, "lol");
	p2->printmessage(); // calls the overriden printmessage() from a DerivedClass2
	delete p2;

	// smart pointer version:
	std::unique_ptr<BaseClass> up = std::make_unique<DerivedClass2>(1, "323");
	up->printmessage();
}