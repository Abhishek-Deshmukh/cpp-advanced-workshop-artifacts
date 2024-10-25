#include <iostream>

class Singleton
{
public:
	static Singleton &createOnlyOneInstance()
	{
		static Singleton o;
		return o;
	}

	// disable copying of this class
	Singleton(const Singleton &rhs) = delete; // disable the copy constructor
	Singleton &operator=(const Singleton &rhs) = delete; // disable the copy assignment

	// disable movement of this class
	Singleton(Singleton &&rhs) = delete; // disable the move constructor
	Singleton &operator=(Singleton &&rhs) = delete; // disable the move assignment

	void dootherwork()
	{}

private:
	Singleton() {} // disable the Singleton o; scenario
};

int main()
{

	Singleton &o1 = Singleton::createOnlyOneInstance();
	o1.dootherwork();

	Singleton &o2 = Singleton::createOnlyOneInstance(); // ?
	o2.dootherwork();

	Singleton &o3 = Singleton::createOnlyOneInstance(); // ?
	o3.dootherwork();

	// Singleton myobject; will not compile

	std::cout << &o1 << ' ' << &o2 << ' ' << &o3 << '\n';
}