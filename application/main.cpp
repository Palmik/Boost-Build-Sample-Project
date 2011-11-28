#include <iostream>

#include <library1/bar1.hpp>
#include <library1/bar2.hpp>
#include <library2/foo1.hpp>
#include <library2/foo2.hpp>

int main()
{
    int a, b;
    std::cin >> a >> b;

    std::cout << bar1(a, b) << std::endl
              << bar2(a, b) << std::endl
              << foo1(a, b) << std::endl
              << foo2(a, b) << std::endl;              
}