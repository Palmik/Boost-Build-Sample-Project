#ifndef BAR_2_HPP
#define BAR_2_HPP

#include <library1/bar1.hpp>

inline int bar2(int a, int b)
{
    return bar1(a, b) + bar1(b, a);
}

#endif
 
