#include <iostream>
using namespace std;

extern int number_of_letters(int n);
extern string number_to_words(int n);

int main(void){
  int count = 0;
  for (int i=1; i<=1000; i++){
    string words = number_to_words(i);
    count = count + words.size();    
    cout << i << ":"<< words << ":"<<words.size() << "(" << count << ")" << endl;
  }
  return 0;
}
