#include <iostream>

#include <string>

#include <memory>

class BaseClass

{

public:

	virtual void printmessage() = 0;

	virtual ~BaseClass() {}

};

 

class DerivedClass : public BaseClass

{

public:

	void printmessage() override {

		std::cout << "Hello from a derived class" << '\n';

	}

};

 

class DerivedClass2 : public BaseClass

{

public:

	void printmessage() override {

		std::cout << "Hello from a second derived class" << '\n';

	}

};

 

int main()

{
	BaseClass* p = new DerivedClass;
	p->printmessage(); // calls the overriden printmessage() from a DerivedClass
	delete p;

	BaseClass* p2 = new DerivedClass2;
	p2->printmessage(); // calls the overriden printmessage() from a DerivedClass2
	delete p2;

	// smart pointer version:
	std::unique_ptr<BaseClass> up = std::make_unique<DerivedClass2>();
	up->printmessage();
}