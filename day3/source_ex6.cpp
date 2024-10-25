#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

void foo(int x)
{
    cout << x << "\n";
}

int main()
{
	thread t1{ foo, 1 };
	t1.join();
}