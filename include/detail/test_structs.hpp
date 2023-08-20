#pragma once

#include <functional>
#include <optional>
#include <string>
#include <vector>

namespace knitpp {
	template<typename T>
	using Function = std::function<T>;
	template<typename T>
	using Optional = std::optional<T>;
	template<typename T>
	using Vector = std::vector<T>;
	using String = std::string;

	struct Case
	{
		String name;
		bool success;
		Optional<String> failReason;
	};
	struct Test
	{
		private:
		Function<void()> func;
		Vector<Case> cases;
		public:
		auto findCase(const char* name) -> const Case*;
		auto getFunc() -> const Function<void()>*;
		auto getCases() -> const Vector<Case>*;
	};
} // namespace knitpp
