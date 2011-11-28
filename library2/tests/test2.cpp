#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE library1/tests/test2

#include <boost/test/unit_test.hpp>

#include <library2/foo2.hpp>

BOOST_AUTO_TEST_CASE(unit1)
{
    std::cout << "--- library2/tests/test2/unit1 ---" << std::endl;
    BOOST_CHECK(true);
}