#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex mcout;

void foo()
{
    mcout.lock();
	cout << "1 - 1." << '\n';
	cout << "1 - 2." << '\n';
	cout << "1 - 3." << '\n';
	cout << "1 - 4." << '\n';
	cout << "1 - 5." << '\n';
	cout << "1 - 6." << '\n';
    mcout.unlock();
}

int main() {
    thread t1{ foo };
    thread t2{ foo };

    t1.join();
    t2.join();
}