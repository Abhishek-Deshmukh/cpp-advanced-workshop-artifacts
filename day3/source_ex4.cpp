#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int global_x1, global_x2;

mutex mu1, mu2;

void foo1()
{
    // std::lock_guard<std::mutex> lg1(mu1);
    std::unique_lock<std::mutex> lg1(mu1);
    global_x1 ++;
    cout << "x1 foo " << global_x1 << "\n";
    lg1.unlock();

    // std::lock_guard<std::mutex> lg2(mu2);
    std::unique_lock<std::mutex> lg2(mu2);
    global_x2 ++;
    cout << "x2 foo " << global_x2 << "\n";
    lg2.unlock();
}

void foo2()
{

    // std::lock_guard<std::mutex> lg1(mu1);
    std::unique_lock<std::mutex> lg1(mu1);
    global_x1 ++;
    cout << "x1 foo2 " << global_x1 << "\n";
    lg1.unlock();

    // std::lock_guard<std::mutex> lg2(mu2);
    std::unique_lock<std::mutex> lg2(mu2);
    global_x2 ++;
    cout << "x2 foo2 " << global_x2 << "\n";
    lg2.unlock();
}

int main()
{
	thread t1{ foo1 };
	thread t2{ foo2 };
	thread t3{ foo1 };
	thread t4{ foo2 };

	t1.join();
	t2.join();
	t3.join();
	t4.join();
}