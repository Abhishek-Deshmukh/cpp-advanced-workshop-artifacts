#include <iostream>

#include <string>

 

class BaseClass

{

private:

	int x;

	std::string s;

public:

	BaseClass(int argx,const std::string& args) : x{ argx }, s{ args }

	{}

};

 

class DerivedClass : public BaseClass

{

private:

	double d;

public:

	//

	DerivedClass(int argx, const std::string& args, double argd) : BaseClass{ argx, args }, d{ argd }

	{}

};

 

int main()

{

	DerivedClass o{ 10, "Sample string", 3.14 };

}