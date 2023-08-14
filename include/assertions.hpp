#pragma once

#include "helpers/macros.hpp"
#include <functional>

namespace knitpp::assert
{
	template <typename T>
	using Function = std::function<T>;

	Knitpp_Export
	template <typename T>
	void eq(const T& left, const T& right) noexcept;

	Knitpp_Export
	template <typename T>
	void notEq(const T& left, const T& right) noexcept;

	Knitpp_Export
	void isTrue(bool value) noexcept;

	Knitpp_Export
	void isFalse(bool value) noexcept;

	Knitpp_Export
	template <typename T>
	void same(const T& left, const T& right) noexcept;

	Knitpp_Export
	template <typename T>
	void notSame(const T& left, const T& right) noexcept;

	Knitpp_Export
	template <typename T>
	void isNullptr(const T* value) noexcept;

	Knitpp_Export
	template <typename T>
	void notNullptr(const T* value) noexcept;

	Knitpp_Export
	template <typename F, typename T>
	void assertThrows(Function<F>) noexcept;

	Knitpp_Export
	template <typename F, typename T>
	void assertDoesNotThrow(Function<F>) noexcept;

	Knitpp_Export
	template <typename T, typename R>
	void assertGreaterThan(const T& left, const R& right) noexcept;

	Knitpp_Export
	template <typename T, typename R>
	void assertGreaterOrEqualThan(const T& left, const R& right) noexcept;

	Knitpp_Export
	template <typename T, typename R>
	void assertLessThan(const T& left, const R& right) noexcept;

	Knitpp_Export
	template <typename T, typename R>
	void assertLessOrEqualThan(const T& left, const R& right) noexcept;
} //namespace knitpp::assert
