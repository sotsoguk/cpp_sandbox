#include <iostream>
#include <range/v3/all.hpp>
#include <fmt/core.h>
#include <fmt/ranges.h>
#include <string>
#include <vector>

int main()
{
    std::string s{"Hello World!"};
    ranges::for_each(s, [](char c)
                     { fmt::print("{}-", c); });
    fmt::print("\n");
    std::vector<int> v{1,3,4,5};
    fmt::print("{}\n",v);
}