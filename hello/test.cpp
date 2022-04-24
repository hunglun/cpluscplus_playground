#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;
extern string hello(void);

TEST_CASE("hello"){
  CHECK( hello() == string("hello"));
}
