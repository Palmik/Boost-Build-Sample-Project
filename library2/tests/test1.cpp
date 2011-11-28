#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE library1/tests/test1

#include <boost/test/unit_test.hpp>

#include <library2/foo1.hpp>

BOOST_AUTO_TEST_CASE(unit1)
{
    std::cout << "--- library2/tests/test1/unit1 ---" << std::endl;

    for (int a = 0; a < 5; ++a) {
        for (int b = 0; b < 5; ++b) {
            BOOST_CHECK_EQUAL(foo1(a, b), a + b);
        }
    }
}