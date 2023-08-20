#include "detail/thread.hpp"

namespace knitpp::thread
{
	ThreadData::ThreadData()
	: m_mainThread(getMainThread())
	{
		m_threadCount[m_mainThread] = 0;
	}
	auto ThreadData::get() -> ThreadData&
	{
		static ThreadData instance;
		return instance;
	}

	auto ThreadData::getMainThread() -> ThreadId&
	{
		return get().m_mainThread;
	}

	auto ThreadData::getThreadCount(const ThreadId& id) -> int
	{
		return get().m_threadCount[id];
	}

	void ThreadData::setThreadCount(const ThreadId& id)
	{
		get().m_threadCount[id]++;
	}
} //namespace knitpp::thread
