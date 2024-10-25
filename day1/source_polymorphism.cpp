#include <iostream>

#include <string>

 

class BaseClass
{
public:
	virtual void printmessage()
	{
		std::cout << "Hello from a base class" << '\n';
	}
	virtual ~BaseClass() {}
};

class DerivedClass : public BaseClass
{
public:
	void printmessage() override
	{
		std::cout << "Hello from a derived class" << '\n';
	}
    void printerr() // cannot be called if you use a pointer of BaseClass
    {
        std::cout << "DC: error" <<"\n";
    }
};

int main()
{
	BaseClass* p = new DerivedClass;
	p->printmessage(); // calls the overriden printmessage()
    // p->printerr();
	delete p;
}