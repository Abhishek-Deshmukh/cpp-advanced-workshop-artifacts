#include <iostream>

class BaseClass
{
    private:
    int x;
    std::string s;
    public:
    BaseClass(int argx, const std::string& args): x{argx}, s{args}
    {
        std::cout << "Default Constructor" << std::endl;
    }
    BaseClass(BaseClass&& rhs) : x{ std::move(rhs.x) }, s{ std::move(rhs.s) } {
    std::cout << "Moving Constructor" << std::endl; 
    }
    BaseClass& operator=(BaseClass&& otherobject)
    {
        std::cout << "assignment operator involed" << std::endl; 
        s = std::move(otherobject.s);
        x = std::move(otherobject.x);
        return *this;
    }
};


class DerivedClass : public BaseClass
{
    private:
    double d;
    public:
    DerivedClass(int argx, const std::string& args, double argd): BaseClass{argx, args}, d{argd} 
    {
        std::cout << "DC: Default constructor" << std::endl;
    }
    DerivedClass(DerivedClass&& rhs) :BaseClass{std::move(rhs)}, d{std::move(rhs.d)} 
    {
        std::cout << "DC: Moving constructor" << std::endl;
    }
    DerivedClass& operator=(DerivedClass&& otherobject)
    {
        std::cout << "DC: assignment operation invoked" << std::endl;
        BaseClass::operator=(std::move(otherobject));
        d = std::move(otherobject.d);
        return *this;
    }
};

int main()
{
    BaseClass a{1, "lol"};
    BaseClass b = std::move(a);

    BaseClass c{1, "lol"};
    BaseClass d{2, "f"};
    d = std::move(c);

    DerivedClass e{1, "lol", 3.14};
    DerivedClass f = std::move(e);

    DerivedClass g{1, "lol", 3.14};
    DerivedClass h{2, "jck", 1.1};

    h = std::move(g);

}