#include <iostream>
using namespace std;

int sumNums(int target) {
  int num = 0;
  int output = 0;
  cout << output << endl;
  for(int i = 0; i <= target ; i++ ) {
    output = output + i;
    cout << output << endl;
  }
}

int main(){
  sumNums( 4 );
}