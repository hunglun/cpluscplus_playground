#include <iostream>
using namespace std;

extern string hello(void);
int main(void){
  cout << hello() << endl;
  return 0;
}
