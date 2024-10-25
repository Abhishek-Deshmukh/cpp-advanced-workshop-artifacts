#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

void foo(int x)
{
    // cout << x << "\n";
    x++;
}

int main()
{
	thread t1{ foo, 1 };

    cout << "No. of threads: " << thread::hardware_concurrency() << "\n";
    cout << "No. of threads: " << t1.hardware_concurrency() << "\n";
    cout << "thread id: " << t1.get_id() << "\n";

	t1.join();
}