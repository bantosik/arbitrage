#define BOOST_TEST_MAIN
#if !defined( WIN32 )
    #define BOOST_TEST_DYN_LINK
#endif
#include <boost/test/unit_test.hpp>
#include <turtle/mock.hpp>
#include "arbitrage_controller.h"

BOOST_AUTO_TEST_CASE( arbitrage_controller_should )
{
	    BOOST_CHECK_EQUAL(function(), 0);
	    ///BOOST_FAIL("Now we are talking badly");
}
