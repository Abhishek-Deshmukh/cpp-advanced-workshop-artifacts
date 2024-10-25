#include <iostream>

class DerivedClass1;
class DerivedClass2;

class IVisitor // visitor interface
{
public:
	virtual void visit(const DerivedClass1&) const = 0;
	virtual void visit(const DerivedClass2&) const = 0;

	virtual ~IVisitor() = default;
};

class IBaseClass
{
public:
	virtual void accept(const IVisitor&) const = 0;
	virtual ~IBaseClass() = default;
};

class DerivedClass1 : public IBaseClass
{
public:
	void accept(const IVisitor& v) const override
	{
		v.visit(*this);
	}
};

class DerivedClass2 : public IBaseClass
{
public:
	void accept(const IVisitor& v) const override
	{
		v.visit(*this);
	}
};

class Visitor1 : public IVisitor
{
public:
	void visit(const DerivedClass1& arg) const override	{
		std::cout << "Visitor 1 operation on DerivedClass1 " << '\n';
	}
	void visit(const DerivedClass2& arg) const override	{
		std::cout << "Visitor 1 operation on DerivedClass2 " << '\n';
	}
};

class Visitor2 : public IVisitor
{
public:
	void visit(const DerivedClass1& arg) const override	{
		std::cout << "Visitor 2 operation on DerivedClass1 " << '\n';
	}
	void visit(const DerivedClass2& arg) const override	{
		std::cout << "Visitor 2 operation on DerivedClass2 " << '\n';
	}
};

int main()
{

	DerivedClass1 o1;
	DerivedClass2 o2;

	Visitor1 v1;
	Visitor2 v2;

	v1.visit(o1);
	v1.visit(o2);
	v2.visit(o1);
	v2.visit(o2);

	o1.accept(v1);
	o2.accept(v1);
	o1.accept(v2);
	o2.accept(v2);

}