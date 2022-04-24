#ifdef DOCTEST
  #define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
  #include <doctest.h>
#endif // DOCTEST

#ifndef DOCTEST

#include <iostream>
using namespace std;
int main(void){
  cout << "hello world!" << endl;
  return 0;
}

#endif // DOCTEST


#ifdef DOCTEST
TEST_CASE("hello"){
  CHECK(3 == 1 + 2);
}
#endif // DOCTEST
