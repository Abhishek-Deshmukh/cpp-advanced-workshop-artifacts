#include <iostream>
#include <thread>

void myfunction()
{
	std::cout << "1 - 1." << '\n';
	std::cout << "1 - 2." << '\n';
	std::cout << "1 - 3." << '\n';
	std::cout << "1 - 4." << '\n';
	std::cout << "1 - 5." << '\n';
	std::cout << "1 - 6." << '\n';
}

void foo2()
{
	std::cout << "2 - 1." << '\n';
	std::cout << "2 - 2." << '\n';
	std::cout << "2 - 3." << '\n';
	std::cout << "2 - 4." << '\n';
	std::cout << "2 - 5." << '\n';
	std::cout << "2 - 6." << '\n';
}

int main()
{
	// Ex 1
	std::thread t1{ myfunction };
	std::thread t2{ myfunction };

	t1.join();
	t2.join();

	// Ex 2
	std::thread t3{ myfunction };
	std::thread t4{ foo2 };

	t3.join();
	t4.join();
}