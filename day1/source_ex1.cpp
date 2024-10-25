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
        std::cout << "assignment operator Constructor" << std::endl; 
        s = std::move(otherobject.s);
        x = std::move(otherobject.x);
        return *this;
    }
};

int main()
{
    BaseClass a{1, "lol"};
    BaseClass b = std::move(a); // move constructor

    BaseClass a1{1, "lol"};
    BaseClass c{2, "f"};
    c = std::move(a1); // move assignment operator
    return 0;
}