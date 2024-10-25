#include <iostream>
#include <thread>
#include <string>
#include <mutex>
#include <vector>
using namespace std;

class MyClass
{
private:
    std::mutex mcout; // for guarding std::cout
    std::mutex mx; // for guarding std::cout
    int x;
public:
    MyClass() {
        std::unique_lock<std::mutex> ul{ mx };
        x = 10;
        ul.unlock();
    }
	void dowork() {
		std::unique_lock<std::mutex> ul{ mcout }; // mcout gets locked here
		std::cout << "Hello from a member-function. 1" << '\n';
		std::cout << "Hello from a member-function. 2" << '\n';
		std::cout << "Hello from a member-function. 3" << '\n';
		ul.unlock(); // and unlocked here
	}
    void upx() {
		std::unique_lock<std::mutex> ul{ mx }; // mcout gets locked here
        x++;
        cout << x << "\n";
        x++;
        cout << x << "\n";
		ul.unlock(); // and unlocked here
    }
};

int main()
{
    MyClass o;

    vector<thread*> vt = {};

    // create threads
    for (int i =0; i < 10; i++)
    {
        vt.push_back(new thread{&MyClass::upx, &o});
    }

    // close threads
    for (int i =0; i < 10; i++)
    {
        vt[i]->join();
    }
}