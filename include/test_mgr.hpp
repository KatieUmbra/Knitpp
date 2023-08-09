#pragma once

#include <algorithm>
#include <functional>
#include <vector>

namespace knitpp 
{
	class TestManager
	{

	template <typename T>
	using Vector = std::vector<T>;
	template <typename T>
	using Function = std::function<T>;

	private:
		Vector<Function<void()>> m_tests;
	public:
		TestManager() = default;
		TestManager(const TestManager&);
		TestManager(TestManager&&) noexcept;
		explicit TestManager(Vector<Function<void()>>&&);
		TestManager(Vector<Function<void()>>&);
		~TestManager() = default;

		auto operator=(const TestManager&) -> TestManager&;
		auto operator=(TestManager&&) noexcept -> TestManager&;

		auto provide(Function<void()>&&) -> TestManager&;
		void runTests();
		// TODO(Katie)
		void runTestsInclude();
		// TODO(Katie)
		void runTestsExclude();
	};
} //namespace knitpp
