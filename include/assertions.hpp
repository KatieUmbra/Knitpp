#pragma once

#include <functional>

namespace knitpp::assert
{
	template <typename T>
	void eq(const T& left, const T& right) noexcept;

	template <typename T>
	void notEq(const T& left, const T& right) noexcept;

	void isTrue(bool value) noexcept;

	void isFalse(bool value) noexcept;

	template <typename T>
	void same(const T& left, const T& right) noexcept;

	template <typename T>
	void notSame(const T& left, const T& right) noexcept;

	template <typename T>
	void isNullptr(const T* value) noexcept;

	template <typename T>
	void notNullptr(const T* value) noexcept;

	template <typename F, typename T>
	void assertThrows(std::function<F>) noexcept;

	template <typename F, typename T>
	void assertDoesNotThrow(std::function<F>) noexcept;

	template <typename T, typename R>
	void assertGreaterThan(const T& left, const R& right) noexcept;

	template <typename T, typename R>
	void assertGreaterOrEqualThan(const T& left, const R& right) noexcept;

	template <typename T, typename R>
	void assertLessThan(const T& left, const R& right) noexcept;

	template <typename T, typename R>
	void assertLessOrEqualThan(const T& left, const R& right) noexcept;
} //namespace knitpp::assert
