#include <iostream>
#include <test_mgr.hpp>
#include <thread>

void sumTest()
{
	int a = 0;
	int b = 1;
	//knitpp::assert::eq(a, b);
	std::cout << "Result: " << (a == b) << '\n';
}

void exampleTest()
{
	std::cout << "Hello From Test!" << '\n';
}

auto main() -> int {
	std::cout << "Current thread ID: " << std::this_thread::get_id() << '\n';
	knitpp::TestManager myManager;
	myManager.provide(exampleTest).provide(sumTest);
	myManager.runTests();
}
