#include "test_mgr.hpp"
#include <iostream>

namespace knitpp 
{
	TestManager::TestManager(const TestManager& copied)
	{
		std::copy(copied.m_tests.begin(), copied.m_tests.end(), this->m_tests.begin());
	}
	TestManager::TestManager(TestManager&& moved) noexcept
		:m_tests(std::move(moved.m_tests))
	{}
	TestManager::TestManager(Vector<Function<void()>>&& functions)
		:m_tests(functions)
	{}
	TestManager::TestManager(Vector<Function<void()>>& functions)
	{
		std::copy(this->m_tests.begin(), this->m_tests.end(), functions.begin());
	}
	auto TestManager::operator=(const TestManager& copied) -> TestManager&
	{
		this->m_tests.clear();
		std::copy(copied.m_tests.begin(), copied.m_tests.end(), this->m_tests.begin());
		return *this;
	}
	auto TestManager::operator=(TestManager&& moved) noexcept -> TestManager&
	{
		this->m_tests.clear();
		this->m_tests = std::move(moved.m_tests);
		return *this;
	}
	auto TestManager::provide(Function<void()>&& fn) -> TestManager&
	{
		this->m_tests.emplace_back(fn);
		return *this;
	}
	void TestManager::runTests()
	{
		int iter = 0;
		for (const auto& test : this->m_tests)
		{
			iter++;
			std::cout << "Running Test " << iter << ":" << '\n';
			std::cout << "============" << '\n' << '\n';
			test();
			std::cout << '\n' << "============" << '\n' << '\n';
		}
	}
} //namespace knitpp
