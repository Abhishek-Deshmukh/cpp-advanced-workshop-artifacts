#include "BaseClass.h"
#include "DerivedClass.h"
#include "DerivedClass2.h"
#include <memory>
#include <vector>

int main()
{

	/////////////////// ex5

	BaseClass* p = new DerivedClass(0, "lol");
	p->printmessage(); // calls the overriden printmessage() from a DerivedClass
	delete p;

	BaseClass* p2 = new DerivedClass2(0, "lol");
	p2->printmessage(); // calls the overriden printmessage() from a DerivedClass2
	delete p2;

	// smart pointer version:
	std::unique_ptr<BaseClass> up = std::make_unique<DerivedClass2>(1, "323");
	up->printmessage();

	/////////////////// ex6
	std::vector<BaseClass*> v = {
	new DerivedClass(1, "lol"),
	new DerivedClass2(1, "pop")
	};

	// loop over v
	for(auto i : v) {
		i->printmessage();
	}

	for(auto i : v) {
		delete i;
	}

	std::vector<std::unique_ptr<BaseClass>> up2;

	up2.push_back(std::make_unique<DerivedClass>(1, "lol"));
	up2.push_back(std::make_unique<DerivedClass2>(1, "pop"));

	for(auto& i : up2) {
		i->printmessage();
	}
}