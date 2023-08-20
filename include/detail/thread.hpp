#pragma once

#include <array>
#include <cmath>
#include <map>
#include <optional>
#include <string>
#include <thread>
#include <vector>

namespace knitpp::thread
{
	template <typename T, typename R>
	using Map = std::map<T, R>;
	using ThreadId = std::thread::id;
	template <typename T>
	using Option = std::optional<T>;
	using String = std::string;
	template <typename T>
	using Vector = std::vector<T>;
	template <typename T, size_t N>
	using Array = std::array<T, N>;

	inline auto getThreadId() -> ThreadId 
	{
		return std::this_thread::get_id();
	}

	class ThreadData
	{
	private:
		ThreadId m_mainThread;
		Map<ThreadId, int> m_threadCount;
		ThreadData(); //NOLINT(modernize-use-equals-delete)
	public:
		ThreadData(const ThreadData&) = delete;
		ThreadData(ThreadData&&) = delete;
		auto operator=(const ThreadData&) -> ThreadData& = delete;
		auto operator=(ThreadData&&) -> ThreadData& = delete;
		~ThreadData() = default;

		static auto get() -> ThreadData&;
	};
} //namespace knitpp::thread
