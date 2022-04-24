#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <iostream>

using namespace std;



string number_to_words(int n){
  return string("one");
}

int number_of_letters(int n){
  return number_to_words(n).size();
}

int single_digit_to_letters(int n){
  return number_of_letters(n);
}

TEST_CASE("test_single_digit_to_letters"){
  CHECK(single_digit_to_letters(1) == 3);
  CHECK(single_digit_to_letters(2) == 3);
  CHECK(single_digit_to_letters(3) == 5);
  CHECK(single_digit_to_letters(4) == 4);
  CHECK(single_digit_to_letters(5) == 4);
  CHECK(single_digit_to_letters(6) == 3);
  CHECK(single_digit_to_letters(7) == 6);
  CHECK(single_digit_to_letters(8) == 5);
  CHECK(single_digit_to_letters(9) == 4);  
}


TEST_CASE("test_acceptance"){
  CHECK(number_of_letters(1) == 3);
  CHECK(number_of_letters(342) == 20);
}

