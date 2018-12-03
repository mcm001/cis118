#include <iostream>
using namespace std;

int nonrecFac(int number) {
  int oldnumber;
  int outputsum = number;
  if (number == 0 ) { cout << "invalid input!" << endl; return 0; }
  while (number > 1 ) {
    // cout << "looping\n number is " << number << " outputsum is " << outputsum << endl;
    number--;
    outputsum = outputsum * number;
    // cout << "outputsum is " << outputsum << endl;
  }
  // cout << outputsum;
  return outputsum;
}

int main() {
  int x = 5;
  cout << nonrecFac(x);
}
