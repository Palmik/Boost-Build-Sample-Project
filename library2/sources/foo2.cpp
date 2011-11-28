#include <library2/foo2.hpp>

#include <library2/foo1.hpp>

int foo2(int a, int b)
{
    return foo1(a, b) + foo1(b, a);
}