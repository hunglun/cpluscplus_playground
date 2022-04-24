#include <iostream>
#include <cassert>
using namespace std;

int single_digit_to_letters(unsigned char n){
  return 0;
}


void test_single_digit_to_letters(){
  assert(single_digit_to_letters(1) == 3);
  assert(single_digit_to_letters(2) == 3);
  assert(single_digit_to_letters(3) == 5);
  assert(single_digit_to_letters(4) == 4);
  assert(single_digit_to_letters(5) == 4);
  assert(single_digit_to_letters(6) == 3);
  assert(single_digit_to_letters(7) == 6);
  assert(single_digit_to_letters(8) == 5);
  assert(single_digit_to_letters(9) == 4);  
}

int main(void){
  return 0;
}
