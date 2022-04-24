#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <iostream>
#include <map>
#include <cassert>
using namespace std;


#define MAP_INT_STRING map <int, string>
string one_digit_to_letters(int n){
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

string two_digit_to_letters(int n){
  MAP_INT_STRING thismap;
  assert( n < 100 && n > 9);
  thismap.insert(make_pair(10,"ten"));
  thismap.insert(make_pair(20,"twenty"));
  thismap.insert(make_pair(30,"thirty"));
  thismap.insert(make_pair(40,"forty"));
  thismap.insert(make_pair(50,"fifty"));
  thismap.insert(make_pair(60,"sixty"));
  thismap.insert(make_pair(70,"seventy"));
  thismap.insert(make_pair(80,"eighty"));
  thismap.insert(make_pair(90,"ninty"));

  thismap.insert(make_pair(11,"eleven"));
  thismap.insert(make_pair(12,"twelve"));
  thismap.insert(make_pair(13,"thirteen"));
  thismap.insert(make_pair(14,"fourteen"));
  thismap.insert(make_pair(15,"fifteen"));
  thismap.insert(make_pair(16,"sixteen"));
  thismap.insert(make_pair(17,"seventeen"));
  thismap.insert(make_pair(18,"eighteen"));
  thismap.insert(make_pair(19,"nineteen"));

  MAP_INT_STRING::const_iterator found_element = thismap.find(n);
  if (found_element != thismap.end()){
    return found_element->second;
  }

  return two_digit_to_letters( (n / 10) * 10) + one_digit_to_letters(n%10);
  
}

string three_digit_to_letters(int n){
  MAP_INT_STRING thismap;
  assert( n < 1000 && n > 99);

  string result;
  string hundred = one_digit_to_letters(n/100) + string("hundred");  
  int remainder = n % 100;
  if (remainder > 9 && remainder < 100) {
    result = hundred + string("and") + two_digit_to_letters(remainder);
  }else if (remainder < 10) {
    result =  hundred + string("and") + one_digit_to_letters(remainder);
  }else if (remainder == 0) {
    result =  hundred;
  }else{
    assert(false); // should not be here.
  }

  return result;
  
}


string number_to_words(int n){
  if (n > 0 && n < 10)   return one_digit_to_letters(n);
  if (n > 10 && n < 100)   return two_digit_to_letters(n);
  if (n > 100 && n < 1000)   return three_digit_to_letters(n);
  if (n == 1000)   return string("onethousand");
  assert(false); // should not be here.
  return string("one");
}


int number_of_letters(int n){
  return number_to_words(n).size();
}

TEST_CASE("test_three_digit_to_letters"){
  CHECK(three_digit_to_letters(301) == "threehundredandone");
  CHECK(three_digit_to_letters(342) == "threehundredandfortytwo");
}

TEST_CASE("test_two_digit_to_letters"){
  CHECK(two_digit_to_letters(22) == "twentytwo");
}

TEST_CASE("test_one_digit_to_letters"){
  CHECK(one_digit_to_letters(1).size() == 3);
  CHECK(one_digit_to_letters(2).size() == 3);
  CHECK(one_digit_to_letters(3).size() == 5);
  CHECK(one_digit_to_letters(4).size() == 4);
  CHECK(one_digit_to_letters(5).size() == 4);
  CHECK(one_digit_to_letters(6).size() == 3);
  CHECK(one_digit_to_letters(7).size() == 5);
  CHECK(one_digit_to_letters(8).size() == 5);
  CHECK(one_digit_to_letters(9).size() == 4);  
}


TEST_CASE("test_acceptance"){
  CHECK(number_of_letters(1) == 3);
  CHECK(number_of_letters(342) == 23);
  CHECK(number_of_letters(115) == 20);
}

