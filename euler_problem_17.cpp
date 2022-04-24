#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <iostream>
#include <map>
#include <cassert>
using namespace std;


#define MAP_INT_STRING map <int, string>

string single_digit_to_letters(int n){
  MAP_INT_STRING digit_to_words;
  digit_to_words.insert(make_pair(1,"one"));
  digit_to_words.insert(make_pair(2,"two"));
  digit_to_words.insert(make_pair(3,"three"));
  digit_to_words.insert(make_pair(4,"four"));
  digit_to_words.insert(make_pair(5,"five"));
  digit_to_words.insert(make_pair(6,"six"));
  digit_to_words.insert(make_pair(7,"seven"));
  digit_to_words.insert(make_pair(8,"eight"));
  digit_to_words.insert(make_pair(9,"nine"));
  MAP_INT_STRING::const_iterator found_element = digit_to_words.find(n);
  if (found_element != digit_to_words.end()){
    return found_element->second;
  }
  
  assert(false); //should not be here
  return string("");
}

string number_to_words(int n){
  if (n > 0 && n < 10)   return single_digit_to_letters(n);
  return string("one");
}


int number_of_letters(int n){
  return number_to_words(n).size();
}

TEST_CASE("test_single_digit_to_letters"){
  CHECK(single_digit_to_letters(1).size() == 3);
  CHECK(single_digit_to_letters(2).size() == 3);
  CHECK(single_digit_to_letters(3).size() == 5);
  CHECK(single_digit_to_letters(4).size() == 4);
  CHECK(single_digit_to_letters(5).size() == 4);
  CHECK(single_digit_to_letters(6).size() == 3);
  CHECK(single_digit_to_letters(7).size() == 5);
  CHECK(single_digit_to_letters(8).size() == 5);
  CHECK(single_digit_to_letters(9).size() == 4);  
}


TEST_CASE("test_acceptance"){
  CHECK(number_of_letters(1) == 3);
  CHECK(number_of_letters(342) == 20);
}

