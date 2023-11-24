module;

#include <iostream>
#include <string_view>

#define fn auto

export module knitpp;

export namespace knitpp
{
fn println(std::string_view str)->void
{
	std::cout << str << '\n';
}
} // namespace knitpp
