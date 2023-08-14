#pragma once

#include <map>
#include <thread>

namespace knitpp::thread
{
	template <typename T, typename R>
	using Map = std::map<T, R>;
	using ThreadId = std::thread::id;

	inline const ThreadId mainThread = std::this_thread::get_id();
	inline Map<ThreadId, int> threadCurrentId{
		{ mainThread, 0 }
	};

	inline auto getThreadId() -> ThreadId 
	{
		return std::this_thread::get_id();
	}
} //namespace knitpp::thread
